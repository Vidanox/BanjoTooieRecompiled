// Native front-end for the Banjo-Tooie recompilation.
//
// Ported from BanjoRecomp's main.cpp to N64ModernRuntime's single-struct
// `recomp::start(const recomp::Configuration&)` entry point. The overlay
// syscall subsystem lives in recomp_api.cpp; the recompiled functions and
// their overlay table come from RecompiledFuncs/.

#include <array>
#include <atomic>
#include <chrono>
#include <cinttypes>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <exception>
#include <filesystem>
#include <fstream>
#include <iterator>
#include <stdexcept>
#include <vector>

#include "nfd.h"

#include "ultramodern/ultra64.h"
#include "ultramodern/ultramodern.hpp"
#include "ultramodern/config.hpp"
#include "ultramodern/renderer_context.hpp"

#define SDL_MAIN_HANDLED
#ifdef _WIN32
#include "SDL.h"
#include "SDL_syswm.h"
#else
#include "SDL2/SDL.h"
#include "SDL2/SDL_syswm.h"
#undef None
#undef Status
#undef LockMask
#undef ControlMask
#undef Success
#undef Always
#endif

#include "recompui/recompui.h"
#include "recompui/program_config.h"
#include "recompui/renderer.h"
#include "recompui/config.h"
#include "util/file.h"
#include "recompinput/input_events.h"
#include "recompinput/recompinput.h"
#include "recompinput/profiles.h"
#include "recompinput/players.h"

#include "librecomp/game.hpp"
#include "librecomp/mods.hpp"
#include "librecomp/rsp.hpp"

#include "funcs.h"
#include "register_overlays.hpp"
#include "rom_decompression.hpp"
#include "tooie_visibility.hpp"

#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <timeapi.h>
#endif

// The release workflow stamps the version it is publishing into the binary
// (CMakeLists.txt turns the BT_VERSION environment variable into this define),
// so the launcher's version label -- and any bug report that quotes it --
// identifies the build. A local build keeps the default.
//
// The string must stay MAJOR.MINOR.PATCH, optionally followed by `+suffix` or
// `-suffix`: it is parsed by recomp::Version::from_string, which rejects
// anything else and takes the process down with "Invalid version string".
#ifdef BT_VERSION
const std::string version_string = BT_VERSION;
#else
const std::string version_string = "1.0.0";
#endif

SDL_Window* window = nullptr;

void exit_error(const char* str, const char* arg) {
    std::fprintf(stderr, str, arg);
    std::fflush(stderr);
    std::exit(EXIT_FAILURE);
}

// --- Graphics / window -----------------------------------------------------

ultramodern::gfx_callbacks_t::gfx_data_t create_gfx() {
    std::fprintf(stderr, "[tooie] create_gfx enter\n"); std::fflush(stderr);
    SDL_SetHint(SDL_HINT_WINDOWS_DPI_AWARENESS, "permonitorv2");
    SDL_SetHint(SDL_HINT_GAMECONTROLLER_USE_BUTTON_LABELS, "0");
    SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_PS4_RUMBLE, "1");
    SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_PS5_RUMBLE, "1");
    SDL_SetHint(SDL_HINT_MOUSE_FOCUS_CLICKTHROUGH, "1");
    SDL_SetHint(SDL_HINT_JOYSTICK_ALLOW_BACKGROUND_EVENTS, "1");

    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMECONTROLLER | SDL_INIT_JOYSTICK |
                 SDL_INIT_HAPTIC) > 0) {
        exit_error("Failed to initialize SDL2: %s\n", SDL_GetError());
    }

    std::fprintf(stderr, "[tooie] create_gfx done\n"); std::fflush(stderr);
    return {};
}

ultramodern::renderer::WindowHandle create_window(
    ultramodern::gfx_callbacks_t::gfx_data_t) {
    std::fprintf(stderr, "[tooie] create_window enter\n"); std::fflush(stderr);
    uint32_t flags = SDL_WINDOW_RESIZABLE;

#if defined(__APPLE__)
    flags |= SDL_WINDOW_METAL;
#elif defined(RT64_SDL_WINDOW_VULKAN)
    flags |= SDL_WINDOW_VULKAN;
#endif

    // BT_WINDOW_POS=x,y (test harness): create the window at that position, in
    // physical pixels, without activating it, so an unattended run can sit on a
    // second monitor instead of popping up over whatever the user is doing.
    int window_x = SDL_WINDOWPOS_CENTERED;
    int window_y = SDL_WINDOWPOS_CENTERED;
    if (const char* pos = std::getenv("BT_WINDOW_POS")) {
        int x = 0;
        int y = 0;
        if (std::sscanf(pos, "%d,%d", &x, &y) == 2) {
            window_x = x;
            window_y = y;
            SDL_SetHint(SDL_HINT_WINDOW_NO_ACTIVATION_WHEN_SHOWN, "1");
        }
    }

    window = SDL_CreateWindow("Banjo-Tooie: Recompiled",
                              window_x, window_y,
                              1600, 900, flags);
    if (window == nullptr) {
        exit_error("Failed to create window: %s\n", SDL_GetError());
    }
    std::fprintf(stderr, "[tooie] create_window created\n"); std::fflush(stderr);

    tooie::visibility::update_display_size(1600, 900);

    SDL_SysWMinfo wm_info;
    SDL_VERSION(&wm_info.version);
    SDL_GetWindowWMInfo(window, &wm_info);

#if defined(_WIN32)
    return ultramodern::renderer::WindowHandle{
        wm_info.info.win.window, GetCurrentThreadId()};
#elif defined(__linux__) || defined(__ANDROID__)
    return ultramodern::renderer::WindowHandle{window};
#elif defined(__APPLE__)
    return ultramodern::renderer::WindowHandle{wm_info.info.cocoa.window};
#else
    return ultramodern::renderer::WindowHandle{window};
#endif
}

void update_gfx(void*) {
    static int count = 0;
    if (count < 5) {
        std::fprintf(stderr, "[tooie] update_gfx call %d enter\n", count);
        std::fflush(stderr);
    }
    recompinput::handle_events();
    int width = 0, height = 0;
    SDL_GetWindowSize(window, &width, &height);
    tooie::visibility::update_display_size(width, height);
    if (count < 5) {
        std::fprintf(stderr, "[tooie] update_gfx call %d done\n", count);
        std::fflush(stderr);
        count++;
    }
}

// --- Audio -----------------------------------------------------------------

static SDL_AudioCVT audio_convert;
static SDL_AudioDeviceID audio_device = 0;

static uint32_t sample_rate = 48000;
static uint32_t output_sample_rate = 48000;

constexpr uint32_t input_channels = 2;
static uint32_t output_channels = 2;

constexpr uint32_t duplicated_input_frames = 4;
static uint32_t discarded_output_frames = 0;

constexpr uint32_t bytes_per_frame = input_channels * sizeof(float);

// BT_PACELOG (src/recomp_api.cpp) reads these: the audio clock as the game
// generates it, how much of it never reached the device, and how often the
// device queue was found empty (an underrun proxy).
std::atomic<uint64_t> g_audio_in_frames{0};
std::atomic<uint64_t> g_audio_dropped_out_frames{0};
std::atomic<uint32_t> g_audio_empty_queues{0};
std::atomic<uint32_t> g_audio_buffers{0};

extern "C" void tooie_audio_stats(uint64_t* in_frames, uint64_t* dropped_out,
                                  uint32_t* empty_queues, uint32_t* buffers,
                                  uint32_t* queued_us, uint32_t* in_rate,
                                  uint32_t* out_rate) {
    *in_frames = g_audio_in_frames.load(std::memory_order_relaxed);
    *dropped_out = g_audio_dropped_out_frames.load(std::memory_order_relaxed);
    *empty_queues = g_audio_empty_queues.load(std::memory_order_relaxed);
    *buffers = g_audio_buffers.load(std::memory_order_relaxed);
    const uint64_t queued = audio_device != 0 ? SDL_GetQueuedAudioSize(audio_device) : 0;
    *queued_us = static_cast<uint32_t>(queued / (output_channels * sizeof(float)) *
                                       1000000ULL / output_sample_rate);
    *in_rate = sample_rate;
    *out_rate = output_sample_rate;
}

void queue_samples(int16_t* audio_data, size_t sample_count) {
    g_audio_buffers.fetch_add(1, std::memory_order_relaxed);
    g_audio_in_frames.fetch_add(sample_count / input_channels, std::memory_order_relaxed);
    if (SDL_GetQueuedAudioSize(audio_device) == 0) {
        g_audio_empty_queues.fetch_add(1, std::memory_order_relaxed);
    }
    static std::vector<float> swap_buffer;
    static std::array<float, duplicated_input_frames * input_channels>
        duplicated_sample_buffer;

    size_t resampled_sample_count =
        sample_count + duplicated_input_frames * input_channels;
    size_t max_sample_count =
        std::max(resampled_sample_count,
                 resampled_sample_count * audio_convert.len_mult);
    if (max_sample_count > swap_buffer.size()) {
        swap_buffer.resize(max_sample_count);
    }

    for (size_t i = 0; i < duplicated_input_frames * input_channels; i++) {
        swap_buffer[i] = duplicated_sample_buffer[i];
    }

    for (size_t i = 0; i < sample_count; i += input_channels) {
        swap_buffer[i + 0 + duplicated_input_frames * input_channels] =
            audio_data[i + 1] * (0.5f / 32768.0f);
        swap_buffer[i + 1 + duplicated_input_frames * input_channels] =
            audio_data[i + 0] * (0.5f / 32768.0f);
    }

    if (sample_count <= duplicated_input_frames * input_channels) {
        return;
    }

    for (size_t i = 0; i < duplicated_input_frames * input_channels; i++) {
        duplicated_sample_buffer[i] = swap_buffer[i + sample_count];
    }

    audio_convert.buf = reinterpret_cast<Uint8*>(swap_buffer.data());
    audio_convert.len =
        (sample_count + duplicated_input_frames * input_channels) *
        sizeof(swap_buffer[0]);

    if (SDL_ConvertAudio(&audio_convert) < 0) {
        std::fprintf(stderr, "Error using SDL audio converter: %s\n",
                     SDL_GetError());
        return;
    }

    const uint64_t cur_queued_microseconds =
        static_cast<uint64_t>(SDL_GetQueuedAudioSize(audio_device)) /
        bytes_per_frame * 1000000 / sample_rate;
    uint32_t num_bytes_to_queue =
        audio_convert.len_cvt -
        output_channels * discarded_output_frames * sizeof(swap_buffer[0]);
    float* samples_to_queue =
        swap_buffer.data() + output_channels * discarded_output_frames / 2;

    const uint32_t skip_factor = cur_queued_microseconds / 100000;
    if (skip_factor != 0) {
        const uint32_t skip_ratio = 1 << skip_factor;
        g_audio_dropped_out_frames.fetch_add(
            (num_bytes_to_queue - num_bytes_to_queue / skip_ratio) /
                (output_channels * sizeof(swap_buffer[0])),
            std::memory_order_relaxed);
        num_bytes_to_queue /= skip_ratio;
        for (size_t i = 0;
             i < num_bytes_to_queue / (output_channels * sizeof(swap_buffer[0]));
             i++) {
            samples_to_queue[2 * i + 0] = samples_to_queue[2 * skip_ratio * i + 0];
            samples_to_queue[2 * i + 1] = samples_to_queue[2 * skip_ratio * i + 1];
        }
    }

    SDL_QueueAudio(audio_device, samples_to_queue, num_bytes_to_queue);
}

size_t get_frames_remaining() {
    constexpr float buffer_offset_frames = 1.0f;
    uint64_t buffered_byte_count = SDL_GetQueuedAudioSize(audio_device);

    buffered_byte_count =
        buffered_byte_count * 2 * sample_rate / output_sample_rate /
        output_channels;

    const uint32_t frames_per_vi = (sample_rate / 60);
    if (buffered_byte_count >
        (buffer_offset_frames * bytes_per_frame * frames_per_vi)) {
        buffered_byte_count -=
            (buffer_offset_frames * bytes_per_frame * frames_per_vi);
    } else {
        buffered_byte_count = 0;
    }
    return static_cast<size_t>(buffered_byte_count / bytes_per_frame);
}

void update_audio_converter() {
    if (SDL_BuildAudioCVT(&audio_convert, AUDIO_F32, input_channels,
                          sample_rate, AUDIO_F32, output_channels,
                          output_sample_rate) < 0) {
        std::fprintf(stderr, "Error creating SDL audio converter: %s\n",
                     SDL_GetError());
        throw std::runtime_error("Error creating SDL audio converter");
    }
    discarded_output_frames =
        duplicated_input_frames * output_sample_rate / sample_rate;
}

void set_frequency(uint32_t freq) {
    sample_rate = freq;
    update_audio_converter();
}

bool reset_audio(uint32_t output_freq) {
    SDL_AudioSpec spec_desired{};
    spec_desired.freq = static_cast<int>(output_freq);
    spec_desired.format = AUDIO_F32;
    spec_desired.channels = static_cast<Uint8>(output_channels);
    spec_desired.samples = 0x100;
    spec_desired.callback = nullptr;
    spec_desired.userdata = nullptr;

    audio_device =
        SDL_OpenAudioDevice(nullptr, false, &spec_desired, nullptr, 0);
    if (audio_device == 0) {
        std::fprintf(stderr, "Error opening audio device: %s\n",
                     SDL_GetError());
        return false;
    }

    SDL_PauseAudioDevice(audio_device, 0);
    output_sample_rate = output_freq;
    update_audio_converter();
    return true;
}

// --- Input -----------------------------------------------------------------

ultramodern::input::connected_device_info_t get_connected_device_info(
    int controller_num) {
    if (recompinput::players::is_single_player_mode() ||
        recompinput::players::get_player_is_assigned(controller_num)) {
        return ultramodern::input::connected_device_info_t{
            .connected_device = ultramodern::input::Device::Controller,
            .connected_pak = ultramodern::input::Pak::RumblePak,
        };
    }

    return ultramodern::input::connected_device_info_t{
        .connected_device = ultramodern::input::Device::None,
        .connected_pak = ultramodern::input::Pak::None,
    };
}

// BT_AUTOPAD: scripted button presses for player 1, for reaching states the
// attract loop never shows (the new-game intro) from an unattended run.
// Synthetic keystrokes do not reach the window (AGENTS.md, Instruments), so the
// presses are ORed in after the real controller is read. Format:
// "seconds:button,..." with seconds counted from the first input poll and
// button one of a b z start l r du dd dl dr cu cd cl cr, or a stick direction
// up down left right (full deflection). Each press is held for 0.15 s;
// "from-to:button" holds it for that span instead. Unset means no effect.
struct AutopadPress {
    double at;
    double until;
    uint16_t button;
    float x;
    float y;
};

std::vector<AutopadPress> autopad_script() {
    std::vector<AutopadPress> presses;
    const char* script = std::getenv("BT_AUTOPAD");
    if (script == nullptr) {
        return presses;
    }
    static const std::pair<const char*, uint16_t> names[] = {
        {"a", 0x8000}, {"b", 0x4000}, {"z", 0x2000}, {"start", 0x1000},
        {"du", 0x0800}, {"dd", 0x0400}, {"dl", 0x0200}, {"dr", 0x0100},
        {"l", 0x0020}, {"r", 0x0010}, {"cu", 0x0008}, {"cd", 0x0004},
        {"cl", 0x0002}, {"cr", 0x0001},
    };
    std::string text = script;
    size_t start = 0;
    while (start < text.size()) {
        size_t end = text.find(',', start);
        if (end == std::string::npos) {
            end = text.size();
        }
        const std::string item = text.substr(start, end - start);
        const size_t colon = item.find(':');
        if (colon != std::string::npos) {
            const std::string when = item.substr(0, colon);
            const std::string name = item.substr(colon + 1);
            const size_t dash = when.find('-');
            const double at = std::atof(when.c_str());
            const double until = (dash != std::string::npos)
                ? std::atof(when.c_str() + dash + 1) : at + 0.15;
            for (const auto& [label, bit] : names) {
                if (name == label) {
                    presses.push_back({at, until, bit, 0.0f, 0.0f});
                }
            }
            if (name == "up") presses.push_back({at, until, 0, 0.0f, 1.0f});
            if (name == "down") presses.push_back({at, until, 0, 0.0f, -1.0f});
            if (name == "left") presses.push_back({at, until, 0, -1.0f, 0.0f});
            if (name == "right") presses.push_back({at, until, 0, 1.0f, 0.0f});
        }
        start = end + 1;
    }
    return presses;
}

// The BT_AUTOPAD clock: steady_clock ticks at the first input poll, shared with
// the test harness (src/test_harness.cpp) so BT_POKE/BT_WARP/BT_POS times line
// up with BT_AUTOPAD's.
std::atomic<int64_t> g_harness_origin{0};

double harness_seconds_since(int64_t origin) {
    return std::chrono::duration<double>(
        std::chrono::steady_clock::duration(
            std::chrono::steady_clock::now().time_since_epoch().count() - origin))
        .count();
}

extern "C" double tooie_harness_seconds() {
    const int64_t origin = g_harness_origin.load(std::memory_order_relaxed);
    return origin == 0 ? -1.0 : harness_seconds_since(origin);
}

// RT64's BT_RT64_FRAMEDUMP times its window on this clock (rt64_present_queue.cpp).
extern "C" double (*g_bt_rt64_harness_seconds)();

bool get_input_with_autopad(int player_index, uint16_t* buttons_out,
                            float* x_out, float* y_out) {
    static const std::vector<AutopadPress> presses = autopad_script();
    if (g_harness_origin.load(std::memory_order_relaxed) == 0) {
        int64_t expected = 0;
        g_harness_origin.compare_exchange_strong(
            expected, std::chrono::steady_clock::now().time_since_epoch().count());
    }
    const bool connected = recompinput::profiles::get_n64_input(
        player_index, buttons_out, x_out, y_out);
    if (presses.empty() || player_index != 0) {
        return connected;
    }
    const double now = harness_seconds_since(
        g_harness_origin.load(std::memory_order_relaxed));
    for (const AutopadPress& press : presses) {
        if (now >= press.at && now < press.until) {
            *buttons_out |= press.button;
            if (press.x != 0.0f) {
                *x_out = press.x;
            }
            if (press.y != 0.0f) {
                *y_out = press.y;
            }
        }
    }
    return true;
}

// Controller 1's buttons that went down since the last read, for the
// any-button skip to the file select (cutscene_skip.cpp, AGENTS.md §7.16). The
// game's own button counters cannot serve: an attract demo replays its
// recording INTO the raw pad buffer (_glrecord_entrypoint_0), so they report
// the demo's presses as the player's.
extern "C" std::atomic<uint32_t> g_bt_pad1_pressed;

bool get_input_tracked(int player_index, uint16_t* buttons_out, float* x_out, float* y_out) {
    const bool connected = get_input_with_autopad(player_index, buttons_out, x_out, y_out);
    if (player_index == 0) {
        static uint16_t last = 0;
        const uint16_t now = static_cast<uint16_t>(*buttons_out & 0xFF3FU);
        g_bt_pad1_pressed.fetch_or(static_cast<uint32_t>(now & ~last), std::memory_order_relaxed);
        last = now;
    }
    return connected;
}

// --- RSP microcode ---------------------------------------------------------

extern RspUcodeFunc n_aspMain;

RspUcodeFunc* get_rsp_microcode(const OSTask* task) {
    switch (task->t.type) {
        case M_AUDTASK:
            return n_aspMain;
        default:
            std::fprintf(stderr, "Unknown task type: %" PRIu32 "\n",
                         static_cast<uint32_t>(task->t.type));
            return nullptr;
    }
}

// --- Game entry ------------------------------------------------------------

gpr get_entrypoint_address();

std::vector<recomp::GameEntry> supported_games = {
    {
        .rom_hash = 0x00F70DE5F2D70EA2ULL,
        .internal_name = "BANJO TOOIE",
        .display_name = "Banjo-Tooie (USA)",
        .game_id = u8"bt.n64.us.1.0",
        .mod_game_id = "bt",
        .save_type = recomp::SaveType::Eep16k,
        .thumbnail_bytes = std::span<const char>{},
        .is_enabled = false,
        .decompression_routine = tooie::decompress_tooie,
        .has_compressed_code = true,
        .entrypoint_address = get_entrypoint_address(),
        .entrypoint = recomp_entrypoint,
    },
};

// RT64's switch for vertex smoothing (lib/rt64 rt64_game_frame.cpp).
extern "C" std::atomic<uint32_t> g_bt_rt64_vertex_smooth;
// RT64's switch for the improved shadows (lib/rt64 rt64_state.cpp).
extern "C" std::atomic<uint32_t> g_bt_rt64_improved_shadows;
// The sky seam blending switch (recomp_api.cpp, sky_seams, AGENTS.md §7.9).
extern "C" std::atomic<uint32_t>* tooie_sky_seams_flag();
// The texture seam blending switch (recomp_api.cpp, texseam, AGENTS.md §7.14).
extern "C" std::atomic<uint32_t>* tooie_tex_seams_flag();
// The hold-Start-to-skip switch (cutscene_skip.cpp, AGENTS.md §7.15).
extern "C" std::atomic<uint32_t>* tooie_hold_skip_flag();
// The any-button-to-file-select switch (cutscene_skip.cpp, AGENTS.md §7.16).
extern "C" std::atomic<uint32_t>* tooie_boot_skip_flag();

void initialize_config() {
    const std::filesystem::path recomp_dir =
        recompui::file::get_app_folder_path();
    if (!recomp_dir.empty()) {
        std::filesystem::create_directories(recomp_dir);
    }

    recompui::config::GeneralTabOptions general_options{};
    recomp::config::Config& general = recompui::config::create_general_tab(general_options);
    // Port option: hold Start for a second to skip a cutscene sequence, through
    // the game's own skip paths (cutscene_skip.cpp, AGENTS.md §7.15).
    general.add_bool_option(
        "bt_hold_skip",
        "Hold Start to Skip Cutscenes",
        "Hold Start for a second during a cutscene to skip it, the way the game itself skips the intro. "
        "A short press of Start does what it always did.",
        true);
    general.add_option_change_callback("bt_hold_skip",
        [](recomp::config::ConfigValueVariant cur_value, recomp::config::ConfigValueVariant,
           recomp::config::OptionChangeContext) {
            if (const bool* on = std::get_if<bool>(&cur_value)) {
                tooie_hold_skip_flag()->store(*on ? 1U : 0U, std::memory_order_relaxed);
            }
        });
    // Port option: any button during the boot logos, the title or the attract
    // demo goes straight to the file select, through the game's own Start paths
    // (cutscene_skip.cpp, AGENTS.md §7.16).
    general.add_bool_option(
        "bt_boot_skip",
        "Skip Straight to File Select",
        "Press any button during the opening logos, the title screen or the attract demo to go straight to "
        "the file select, instead of waiting for the logos to finish and pressing Start.",
        true);
    general.add_option_change_callback("bt_boot_skip",
        [](recomp::config::ConfigValueVariant cur_value, recomp::config::ConfigValueVariant,
           recomp::config::OptionChangeContext) {
            if (const bool* on = std::get_if<bool>(&cur_value)) {
                tooie_boot_skip_flag()->store(*on ? 1U : 0U, std::memory_order_relaxed);
            }
        });
    recomp::config::Config& graphics = recompui::config::create_graphics_tab();
    // Port option: smooth the whole-unit snapping of CPU-animated vertices
    // (RT64 GameFrame::smoothVertexRange, AGENTS.md §7.7h). The change callback
    // also fires on load, so RT64's flag follows the saved value from the start.
    graphics.add_bool_option(
        "bt_smooth_faces",
        "Smooth Animated Faces",
        "Smooths the per-vertex shimmer of characters the game animates on the CPU (Mingella, Grunty and "
        "others), whose vertices snap to whole units every frame. Takes effect when the framerate is above "
        "the original.",
        true);
    graphics.add_option_change_callback("bt_smooth_faces",
        [](recomp::config::ConfigValueVariant cur_value, recomp::config::ConfigValueVariant,
           recomp::config::OptionChangeContext) {
            if (const bool* on = std::get_if<bool>(&cur_value)) {
                g_bt_rt64_vertex_smooth.store(*on ? 1U : 0U, std::memory_order_relaxed);
            }
        });
    // Port option: blend the texels either side of the sky's tile borders so the
    // seams between sky tiles stop showing (AGENTS.md §7.9). The game data is
    // rewritten once per sky, so turning it off takes effect at the next map load.
    graphics.add_bool_option(
        "bt_sky_seams",
        "Blend Sky Seams",
        "Hides the seams between the tiles the sky is made of. The game cuts each sky into square tiles that "
        "cannot blend into each other, which shows as straight lines through the clouds. Turning this off "
        "takes effect at the next area load.",
        true);
    graphics.add_option_change_callback("bt_sky_seams",
        [](recomp::config::ConfigValueVariant cur_value, recomp::config::ConfigValueVariant,
           recomp::config::OptionChangeContext) {
            if (const bool* on = std::get_if<bool>(&cur_value)) {
                tooie_sky_seams_flag()->store(*on ? 1U : 0U, std::memory_order_relaxed);
            }
        });
    // Port option: the same blending for the world and for character models,
    // done once per piece of geometry (AGENTS.md §7.14).
    graphics.add_bool_option(
        "bt_tex_seams",
        "Blend Texture Seams",
        "Hides the seams where the square tiles a picture is cut into meet on the world and on characters, "
        "the same way Blend Sky Seams does for the sky. Turning this off takes effect at the next area load.",
        true);
    graphics.add_option_change_callback("bt_tex_seams",
        [](recomp::config::ConfigValueVariant cur_value, recomp::config::ConfigValueVariant,
           recomp::config::OptionChangeContext) {
            if (const bool* on = std::get_if<bool>(&cur_value)) {
                tooie_tex_seams_flag()->store(*on ? 1U : 0U, std::memory_order_relaxed);
            }
        });
    // Port option: character shadows drawn whole on any ground and eased between
    // lights (RT64 rt64_state.cpp btImproveShadows + the composite pass, AGENTS.md §7.13).
    graphics.add_bool_option(
        "bt_improved_shadows",
        "Improved Shadows",
        "Draws character shadows whole on stairs, ledges, slopes and uneven floors, where the original cuts "
        "them along the ground's edges, and eases them between lights instead of snapping.",
        true);
    graphics.add_option_change_callback("bt_improved_shadows",
        [](recomp::config::ConfigValueVariant cur_value, recomp::config::ConfigValueVariant,
           recomp::config::OptionChangeContext) {
            if (const bool* on = std::get_if<bool>(&cur_value)) {
                g_bt_rt64_improved_shadows.store(*on ? 1U : 0U, std::memory_order_relaxed);
            }
        });
    recompui::config::create_controls_tab();
    recompui::config::create_sound_tab();
    recompui::config::create_mods_tab();
    recompui::config::finalize();
}

// The launcher wallpaper.
//
// ⚠ recompui's render interface does NOT read image files. Its
// `RenderInterface::LoadTexture` (recompui/src/renderer/ui_renderer.cpp) looks
// the source up in `image_from_bytes_map`, which is only ever populated by
// `queue_image_from_bytes_file` / `queue_image_from_bytes_rgba32`, and for an
// unknown source it returns a **1x1 transparent texture and reports success**.
// So any `<img src="assets/menu.png">` or `decorator: image( assets/menu.png )`
// renders nothing at all, silently, with no log line. This is the same
// mechanism the launcher thumbnail uses -- BanjoRecomp registers its icon bytes
// under a synthetic name and passes that name as the src.
//
// Two consequences shape the code below:
//   * the bytes must be read and registered by us before the texture is used;
//   * the registered name starts with '?', which makes
//     `RenderManager::LoadTexture` skip `JoinPath` and use the string verbatim.
//     Without that the document path ("assets/") is prepended and the lookup
//     fails.
//
// RmlUi's `<img>` has no `object-fit`, so it would stretch the image to the
// element box. A decorated div with `cover` scales and crops instead, which
// stays correct at any window aspect ratio.
class Wallpaper : public recompui::Element {
protected:
    std::string_view get_type_name() override { return "Wallpaper"; }
public:
    Wallpaper(recompui::ResourceId rid, recompui::Element* parent,
              std::string_view asset, std::string_view registered_name)
        : Element(rid, parent, 0, "div", false) {
        // Read the PNG and hand the bytes to the renderer. This must happen
        // before the decorator is instanced; `LoadTexture` flushes the queue
        // itself, so queueing here is enough.
        const std::string asset_path =
            recompui::file::get_asset_path(std::string(asset).c_str()).string();
        std::ifstream file{asset_path, std::ios::binary};
        if (file) {
            std::vector<char> bytes{std::istreambuf_iterator<char>(file),
                                    std::istreambuf_iterator<char>()};
            if (!bytes.empty()) {
                recompui::queue_image_from_bytes_file(
                    std::string(registered_name), bytes);
            }
        }
        else {
            std::fprintf(stderr, "[tooie] wallpaper: cannot open %s\n",
                         asset_path.c_str());
            std::fflush(stderr);
        }

        // A div has no content, so its auto height is 0 and the decorator would
        // have nothing to paint into. Fill the parent explicitly.
        set_position(recompui::Position::Absolute);
        set_top(0.0f);
        set_left(0.0f);
        set_width(100.0f, recompui::Unit::Percent);
        set_height(100.0f, recompui::Unit::Percent);

        // `set_attribute` is protected in recompui::Element and documented as
        // "use ... in inherited classes ... unless it's necessary" -- this is
        // that case: RmlUi has no typed setter for a decorator, and the inline
        // `style` attribute is the only way to reach one from the port.
        set_attribute("style", "decorator: image( " +
                                   std::string(registered_name) + " cover );");
    }
};

// Registered image name for the wallpaper; the '?' keeps `JoinPath` out of it.
static constexpr const char* kWallpaperImage = "?/tooie/wallpaper";

// Option plates.
//
// The wallpaper is bright and busy, and the theme's stock option look (dim grey
// label on a transparent background, a light grey hover) all but disappears
// against it. Each option instead carries its own dark, mostly-opaque plate, so
// the labels stay legible over any part of the image.
//
// The active plate is a near-opaque dark blue (the theme's PrimaryD) rather
// than the theme's brighter Primary: on a bright wallpaper a bright blue plate
// measures only ~1.9:1 against the image behind it, i.e. *worse* than the idle
// plate, which is backwards for a highlight. Dark blue keeps the luminance
// separation (~4.9:1) while the hue shift still reads as "selected".
static constexpr recompui::Color kOptionPlate{10, 12, 18, 205};
static constexpr recompui::Color kOptionPlateActive{0, 38, 117, 240};
static constexpr recompui::Color kOptionText{245, 245, 245, 255};

void initialize_launcher_menu(recompui::LauncherMenu* menu) {
    constexpr recompui::Color menu_background{0x24, 0x17, 0x0D, 0xFF};
    menu->set_background_color(menu_background);
    menu->set_font_family("LatoLatin");

    // The program name is drawn across the middle of the wallpaper, where it
    // competes with the art for attention and adds nothing the window title does
    // not already say. The option column is the whole menu.
    menu->remove_default_title();

    // Behind the menu: `background_wrapper` is the launcher's first child, so
    // everything created later paints over it. It is also the element
    // `set_launcher_background_svg` fills, so this is the intended slot.
    if (recompui::Element* background = menu->get_background_container()) {
        recompui::get_current_context().create_element<Wallpaper>(
            background, "menu.png", kWallpaperImage);
    }

    const auto& game = supported_games.front();
    auto* game_options = menu->init_game_options_menu(
        game.game_id, game.mod_game_id, game.display_name,
        game.thumbnail_bytes,
        recompui::GameOptionsMenuLayout::Right);
    game_options->add_start_game_or_load_rom_option("Select ROM",
                                                    "Start Game");
    game_options->add_setup_controls_option();
    game_options->add_settings_option();
    game_options->add_mods_option();
    game_options->add_exit_option();

    // `Right` anchors the column to the bottom-right corner of the menu
    // container (right/bottom 24dp, which the container has already inset 24dp
    // from the frame). Narrow it so the buttons read as a column rather than a
    // band.
    game_options->set_width(30.0f, recompui::Unit::Percent);

    for (recompui::GameOption* option : game_options->get_options()) {
        // BanjoRecomp's menu text: family, size and tracking all come from its
        // launcher_animation.cpp (set_font_family("Suplexmentary Comic NC"),
        // label set_font_size(56), set_letter_spacing(4)). The plates have an
        // auto height, so they grow to fit rather than clipping the label.
        option->set_font_family("Suplexmentary Comic NC");
        if (recompui::Label* label = option->get_label()) {
            // Size *and* line box. recompui's typography presets set
            // `line_height = font_size` as a fixed dp value
            // (ui_theme.cpp: create_typography_preset), so raising the font size
            // alone leaves the line box at the preset's 36dp -- the glyphs grow
            // but the element does not, and the plate stays exactly the height
            // it was. BanjoRecomp sets only the size because its options carry
            // 24dp of padding and a taller row to absorb it.
            label->set_font_size(56.0f);
            label->set_line_height(56.0f);
            label->set_letter_spacing(4.0f);
        }

        option->set_background_color(kOptionPlate);
        option->set_color(kOptionText);
        // The column is right-aligned, so centre the label inside its plate --
        // right-aligning it would leave the left padding visibly larger.
        option->set_justify_content(recompui::JustifyContent::Center);

        option->hover_style.set_background_color(kOptionPlateActive);
        option->hover_style.set_color(kOptionText);
        // The focus colour is deliberately not set here: `GameOption`'s own
        // Update handler reassigns `focus_style`'s colour every frame from
        // `get_pulse_color` (an orange pulse between Secondary and SecondaryL),
        // so anything set here is overwritten before it is ever seen. That pulse
        // is legible on this plate (~7.7:1), so it is left alone.
        option->focus_style.set_background_color(kOptionPlateActive);

        // `GameOption`'s own disabled states reset the background to
        // transparent, which would drop the plate entirely. Keep it -- the
        // element's 0.5 opacity is what marks the option unavailable.
        option->disabled_style.set_background_color(kOptionPlate);
        option->hover_disabled_style.set_background_color(kOptionPlate);
    }

}

int main(int argc, char** argv) {
    std::fprintf(stderr, "[tooie] main entered\n");
    std::fflush(stderr);
    g_bt_rt64_harness_seconds = tooie_harness_seconds;

    std::set_terminate([]() {
        std::fprintf(stderr, "[tooie] std::terminate called\n");
        std::fflush(stderr);
        try {
            std::rethrow_exception(std::current_exception());
        } catch (const std::exception& e) {
            std::fprintf(stderr, "[tooie] exception: %s\n", e.what());
        } catch (...) {
            std::fprintf(stderr, "[tooie] non-std exception\n");
        }
        std::fflush(stderr);
        std::abort();
    });

    (void)argc;
    (void)argv;

    SDL_SetMainReady();
    std::fprintf(stderr, "[tooie] step sdl_setmainready\n"); std::fflush(stderr);

#ifdef _WIN32
    for (int i = 1; i < argc; i++) {
        if (std::strcmp(argv[i], "--show-console") == 0) {
            if (GetConsoleWindow() == nullptr) {
                AllocConsole();
                freopen("CONIN$", "r", stdin);
                freopen("CONOUT$", "w", stderr);
                freopen("CONOUT$", "w", stdout);
            }
            break;
        }
    }
    SetConsoleOutputCP(CP_UTF8);
#endif
    std::fprintf(stderr, "[tooie] step console\n"); std::fflush(stderr);

    recomp::Version project_version{};
    if (!recomp::Version::from_string(version_string, project_version)) {
        std::fprintf(stderr, "Invalid version string: %s\n",
                     version_string.c_str());
        return EXIT_FAILURE;
    }
    std::fprintf(stderr, "[tooie] step version\n"); std::fflush(stderr);

#ifdef _WIN32
    timeBeginPeriod(1);
#endif
    std::fprintf(stderr, "[tooie] step timebeginperiod\n"); std::fflush(stderr);

    if (NFD_Init() != NFD_OKAY) {
        std::fprintf(stderr, "NFD_Init failed: %s\n", NFD_GetError());
        return EXIT_FAILURE;
    }
    std::fprintf(stderr, "[tooie] step nfd\n"); std::fflush(stderr);

    recompui::programconfig::set_program_name("Banjo-Tooie: Recompiled");
    recompui::programconfig::set_program_id(u8"BanjoTooieRecompiled");

    // recompui requires a primary font and the project stylesheet under
    // `assets/` (relative to the working directory on Windows).
    //
    // Only the Lato family is registered as primary. `promptfont/promptfont.ttf`
    // and `NotoEmoji-Regular.ttf` are loaded by recompui itself (see its
    // `UIState` font_faces list) -- registering them again is both redundant
    // and, for promptfont, a trap: the file lives in the `promptfont/`
    // subdirectory, so `register_extra_font("promptfont.ttf")` resolved to a
    // path that does not exist and logged
    // `Failed to load font face from assets\promptfont.ttf, could not open
    // file` on every launch while the correctly-pathed load right next to it
    // succeeded.
    recompui::register_primary_font("LatoLatin-Regular.ttf", "LatoLatin");
    recompui::register_extra_font("LatoLatin-Bold.ttf");
    recompui::register_extra_font("LatoLatin-Italic.ttf");
    recompui::register_extra_font("LatoLatin-BoldItalic.ttf");
    // The launcher option font, matching BanjoRecomp's menu text (its
    // launcher_animation.cpp sets the same family on every option). An extra
    // font takes no family argument -- RmlUi registers it under the name inside
    // the TTF, lowercased for matching, which here is "suplexmentary comic nc".
    recompui::register_extra_font("Suplexmentary Comic NC.ttf");

    std::fprintf(stderr, "[tooie] step programconfig\n"); std::fflush(stderr);

    if (SDL_InitSubSystem(SDL_INIT_AUDIO) != 0 || !reset_audio(48000)) {
        std::fprintf(stderr, "Unable to initialize SDL audio\n");
        SDL_Quit();
        NFD_Quit();
        return EXIT_FAILURE;
    }
    std::fprintf(stderr, "[tooie] step audio\n"); std::fflush(stderr);

    const std::filesystem::path config_path =
        recompui::file::get_app_folder_path();
    std::error_code directory_error;
    std::filesystem::create_directories(config_path, directory_error);
    recomp::register_config_path(config_path);
    std::fprintf(stderr, "[tooie] step config_path\n"); std::fflush(stderr);

    for (const auto& game : supported_games) {
        recomp::register_game(game);
    }
    std::fprintf(stderr, "[tooie] step register_game\n"); std::fflush(stderr);

    recompui::register_ui_exports();
    recompui::register_launcher_init_callback(initialize_launcher_menu);
    std::fprintf(stderr, "[tooie] step ui_exports\n"); std::fflush(stderr);

    tooie::register_overlays();
    std::fprintf(stderr, "[tooie] step overlays\n"); std::fflush(stderr);

    recompinput::players::set_single_player_mode(true);
    std::fprintf(stderr, "[tooie] step single_player\n"); std::fflush(stderr);

    initialize_config();
    std::fprintf(stderr, "[tooie] step init_config\n"); std::fflush(stderr);

    recomp::rsp::callbacks_t rsp_callbacks{
        .get_rsp_microcode = get_rsp_microcode,
    };

    ultramodern::renderer::callbacks_t renderer_callbacks{
        .create_render_context = [](uint8_t* rdram,
                                    ultramodern::renderer::WindowHandle handle,
                                    bool developer_mode) {
            std::fprintf(stderr, "[tooie] create_render_context enter\n");
            std::fflush(stderr);
            auto ctx = recompui::renderer::create_render_context(
                rdram, handle,
                ultramodern::renderer::PresentationMode::PresentEarly,
                developer_mode);
            std::fprintf(stderr, "[tooie] create_render_context done\n");
            std::fflush(stderr);
            return ctx;
        },
    };

    ultramodern::gfx_callbacks_t gfx_callbacks{
        .create_gfx = create_gfx,
        .create_window = create_window,
        .update_gfx = update_gfx,
    };

    ultramodern::input::callbacks_t input_callbacks{
        .poll_input = recompinput::poll_inputs,
        .get_input = get_input_tracked,
        .set_rumble = recompinput::set_rumble,
        .get_connected_device_info = get_connected_device_info,
    };

    ultramodern::audio_callbacks_t audio_callbacks{
        .queue_samples = queue_samples,
        .get_frames_remaining = get_frames_remaining,
        .set_frequency = set_frequency,
    };

    ultramodern::events::callbacks_t events_callbacks{
        .vi_callback = recompinput::update_rumble,
        .gfx_init_callback = nullptr,
    };

    ultramodern::error_handling::callbacks_t error_handling_callbacks{
        .message_box = recompui::message_box,
    };

    ultramodern::threads::callbacks_t threads_callbacks{};

    recomp::Configuration configuration{};
    configuration.argc = argc;
    configuration.argv = argv;
    configuration.project_version = project_version;
    configuration.rsp_callbacks = rsp_callbacks;
    configuration.renderer_callbacks = renderer_callbacks;
    configuration.audio_callbacks = audio_callbacks;
    configuration.input_callbacks = input_callbacks;
    configuration.gfx_callbacks = gfx_callbacks;
    configuration.events_callbacks = events_callbacks;
    configuration.error_handling_callbacks = error_handling_callbacks;
    configuration.threads_callbacks = threads_callbacks;

    std::fprintf(stderr, "[tooie] step before start\n"); std::fflush(stderr);
    recomp::start(configuration);
    std::fprintf(stderr, "[tooie] step after start\n"); std::fflush(stderr);

    if (window != nullptr) {
        SDL_DestroyWindow(window);
    }
    if (audio_device != 0) {
        SDL_CloseAudioDevice(audio_device);
    }
    SDL_Quit();
    NFD_Quit();

#ifdef _WIN32
    timeEndPeriod(1);
#endif

    return EXIT_SUCCESS;
}
