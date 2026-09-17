cmake_minimum_required(VERSION 3.20)

if (APPLE)
    set(CMAKE_OSX_DEPLOYMENT_TARGET "11.0" CACHE STRING "Minimum OS X deployment version")
endif()

project(BanjoTooieRecompiled LANGUAGES C CXX)
set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang" AND CMAKE_CXX_SIMULATE_ID STREQUAL "MSVC")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-everything /W4")
endif()

# Opt out of constexpr mutex constructor on windows to prevent vcredist issues
if (WIN32)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_DISABLE_CONSTEXPR_MUTEX_CONSTRUCTOR")
endif()

if (APPLE)
    enable_language(OBJC OBJCXX)
endif()

if (CMAKE_VERSION VERSION_GREATER_EQUAL "3.24.0")
    cmake_policy(SET CMP0135 NEW)
endif()

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

set(RT64_STATIC TRUE)
set(RT64_SDL_WINDOW_VULKAN TRUE)
add_compile_definitions(
    HLSL_CPU
    __PRFCHWINTRIN_H
)

# --- Runtime dependencies ---------------------------------------------------
# The runtime repos are git submodules under lib/ (see .gitmodules and
# README "Dependencies"). Three of them carry local patches that are *required*
# for the game to boot and render; `tools/setup_deps.py` applies them from
# patches/. Run it after cloning.
set(N64MODERNRUNTIME_DIR ${CMAKE_SOURCE_DIR}/lib/N64ModernRuntime)
set(RT64_DIR ${CMAKE_SOURCE_DIR}/lib/rt64)
# RecompFrontend resolves `../../../../../patches/ui_funcs.h` relative to its own
# sources, so it must be reached through the same `lib/RecompFrontend` layout
# the upstream projects use.
set(RECOMPFRONTEND_DIR ${CMAKE_SOURCE_DIR}/lib/RecompFrontend)

add_subdirectory(${RT64_DIR} ${CMAKE_BINARY_DIR}/rt64)

set(BUILD_SHARED_LIBS OFF)

add_subdirectory(${N64MODERNRUNTIME_DIR} ${CMAKE_BINARY_DIR}/N64ModernRuntime)

target_include_directories(rt64 PRIVATE ${CMAKE_BINARY_DIR}/rt64/src)

# --- RecompiledFuncs --------------------------------------------------------
# Library containing the primary recompiler output. Every generated file
# includes "tooie_recomp.h" via the config's recomp_include, so the project's
# include/ directory must be on its include path.
add_library(RecompiledFuncs STATIC)

target_compile_options(RecompiledFuncs PRIVATE
    -fno-strict-aliasing
    -Wno-unused-variable
    -Wno-implicit-function-declaration
    -falign-functions=16
)

target_include_directories(RecompiledFuncs PRIVATE
    ${CMAKE_SOURCE_DIR}/include
    ${N64MODERNRUNTIME_DIR}/ultramodern/include
    ${N64MODERNRUNTIME_DIR}/librecomp/include
    ${N64MODERNRUNTIME_DIR}/N64Recomp/include
)

file(GLOB FUNC_C_SOURCES ${CMAKE_SOURCE_DIR}/RecompiledFuncs/*.c)
file(GLOB FUNC_CXX_SOURCES ${CMAKE_SOURCE_DIR}/RecompiledFuncs/*.cpp)
target_sources(RecompiledFuncs PRIVATE ${FUNC_C_SOURCES} ${FUNC_CXX_SOURCES})

# --- Main executable --------------------------------------------------------
add_executable(BanjoTooieRecompiled)

set(SOURCES
    ${CMAKE_SOURCE_DIR}/src/main.cpp
    ${CMAKE_SOURCE_DIR}/src/recomp_api.cpp
    ${CMAKE_SOURCE_DIR}/src/register_overlays.cpp
    ${CMAKE_SOURCE_DIR}/src/rom_decompression.cpp
    ${CMAKE_SOURCE_DIR}/rsp/n_aspMain.cpp
    # Banjo-Tooie is a CIC-NUS-6105 cartridge: the PIF challenge/response
    # protection is checked at runtime, so the SI DMA path needs the same
    # algorithm RT64's vendored mupen64plus-core already ships.
    ${RT64_DIR}/src/contrib/mupen64plus-core/src/device/pif/n64_cic_nus_6105.c
)

target_include_directories(BanjoTooieRecompiled PRIVATE
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/src
    ${CMAKE_SOURCE_DIR}/RecompiledFuncs
    ${N64MODERNRUNTIME_DIR}/N64Recomp/include
    # rt64_extended_gbi.h: the extended-GBI command words and hook opcodes the
    # interpolation metadata in src/recomp_api.cpp is derived from.
    ${RT64_DIR}/include
    ${N64MODERNRUNTIME_DIR}/thirdparty/sse2neon
    ${RT64_DIR}/src/contrib
    ${RT64_DIR}/src/contrib/hlslpp/include
    ${RT64_DIR}/src/contrib/dxc/inc
    ${RT64_DIR}/src/contrib/nativefiledialog-extended/src/include
    ${RT64_DIR}/src
    ${RT64_DIR}/src/rhi
    ${RT64_DIR}/src/render
    ${RECOMPFRONTEND_DIR}/recompinput/include
    ${RECOMPFRONTEND_DIR}/recompui/include
    ${RECOMPFRONTEND_DIR}/recompui/src
    ${RECOMPFRONTEND_DIR}/lib/SlotMap
    ${CMAKE_CURRENT_BINARY_DIR}
)

if(CMAKE_SIZEOF_VOID_P EQUAL 8 AND CMAKE_SYSTEM_PROCESSOR MATCHES "x86_64|amd64|AMD64")
    target_compile_options(BanjoTooieRecompiled PRIVATE
        -march=nehalem
        -fno-strict-aliasing
        -fms-extensions
    )
else()
    target_compile_options(BanjoTooieRecompiled PRIVATE
        -fno-strict-aliasing
        -fms-extensions
    )
endif()

if (MSVC)
    target_link_options(BanjoTooieRecompiled PRIVATE /OPT:NOICF)
    target_link_options(BanjoTooieRecompiled PRIVATE "/MAP:${CMAKE_BINARY_DIR}/BanjoTooieRecompiled.map")
endif()

if (WIN32)
    include(FetchContent)

    if (DEFINED ENV{SDL2_VERSION})
        set(SDL2_VERSION $ENV{SDL2_VERSION})
    else()
        set(SDL2_VERSION "2.30.3")
    endif()

    FetchContent_Declare(
        sdl2
        URL https://github.com/libsdl-org/SDL/releases/download/release-${SDL2_VERSION}/SDL2-devel-${SDL2_VERSION}-VC.zip
    )
    FetchContent_MakeAvailable(sdl2)
    target_include_directories(BanjoTooieRecompiled PRIVATE
        ${sdl2_SOURCE_DIR}/include
    )
    target_link_directories(BanjoTooieRecompiled PRIVATE
        ${sdl2_SOURCE_DIR}/lib/x64
    )

    add_custom_command(TARGET BanjoTooieRecompiled POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "${sdl2_SOURCE_DIR}/lib/x64/SDL2.dll"
            "${RT64_DIR}/src/contrib/dxc/bin/x64/dxil.dll"
            "${RT64_DIR}/src/contrib/dxc/bin/x64/dxcompiler.dll"
            $<TARGET_FILE_DIR:BanjoTooieRecompiled>)

    # Release must be a GUI subsystem binary: /SUBSYSTEM:CONSOLE makes Windows
    # allocate a console for the process, so launching the game from Explorer
    # pops up a cmd window that stays for the whole session.
    #
    # /ENTRY:mainCRTStartup is required alongside /SUBSYSTEM:WINDOWS, because the
    # program's entry point is `main`, not `WinMain`.
    #
    # This does not lose the diagnostics: `--show-console` calls AllocConsole and
    # rebinds stdin/stdout/stderr to it (see main.cpp), so a release build can
    # still be run with a console when something needs debugging. Output is also
    # captured normally when a parent process supplies pipes, which is how the
    # tools in tools/ run it.
    #
    # Debug deliberately keeps a console, for development.
    set_target_properties(
        BanjoTooieRecompiled
        PROPERTIES
            LINK_FLAGS_DEBUG "/SUBSYSTEM:CONSOLE"
            LINK_FLAGS_RELEASE "/SUBSYSTEM:WINDOWS /ENTRY:mainCRTStartup"
            LINK_FLAGS_RELWITHDEBINFO "/SUBSYSTEM:WINDOWS /ENTRY:mainCRTStartup"
            LINK_FLAGS_MINSIZEREL "/SUBSYSTEM:WINDOWS /ENTRY:mainCRTStartup"
    )

    target_link_libraries(BanjoTooieRecompiled PRIVATE SDL2 Winmm.lib)

    # Executable icon. Compiled into the PE's resource section, which is what
    # Explorer, the taskbar and the window's title bar read; no runtime code is
    # involved, and an SDL window created without SDL_SetWindowIcon inherits it.
    # See assets/icon.rc (and assets/icon.png for the source image).
    target_sources(BanjoTooieRecompiled PRIVATE ${CMAKE_SOURCE_DIR}/assets/icon.rc)
endif()

if (APPLE)
    find_package(SDL2 REQUIRED)
    target_include_directories(BanjoTooieRecompiled PRIVATE ${SDL2_INCLUDE_DIRS})
    set(CMAKE_THREAD_PREFER_PTHREAD TRUE)
    set(THREADS_PREFER_PTHREAD_FLAG TRUE)
    find_package(Threads REQUIRED)
    target_link_libraries(BanjoTooieRecompiled PRIVATE ${CMAKE_DL_LIBS} Threads::Threads SDL2::SDL2)
endif()

if (CMAKE_SYSTEM_NAME MATCHES "Linux")
    find_package(SDL2 REQUIRED)
    add_compile_definitions("PLUME_SDL_VULKAN_ENABLED")
    add_compile_definitions("RT64_SDL_WINDOW_VULKAN")
    target_include_directories(BanjoTooieRecompiled PRIVATE ${SDL2_INCLUDE_DIRS})
    find_package(Freetype REQUIRED)
    include_directories(${FREETYPE_LIBRARIES})
    target_link_libraries(BanjoTooieRecompiled PRIVATE ${FREETYPE_LIBRARIES} SDL2::SDL2)
    set(CMAKE_THREAD_PREFER_PTHREAD TRUE)
    set(THREADS_PREFER_PTHREAD_FLAG TRUE)
    find_package(Threads REQUIRED)
    target_link_libraries(BanjoTooieRecompiled PRIVATE "-latomic -static-libstdc++" ${CMAKE_DL_LIBS} Threads::Threads)
endif()

# --- DXC options (required by rt64) ----------------------------------------
set(DXC_COMMON_OPTS "-I${PROJECT_SOURCE_DIR}/src")
set(DXC_DXIL_OPTS "-Wno-ignored-attributes")
set(DXC_SPV_OPTS "-spirv" "-fspv-target-env=vulkan1.0" "-fvk-use-dx-layout")
set(DXC_PS_OPTS "${DXC_COMMON_OPTS}" "-E" "PSMain" "-T ps_6_0" "-D DYNAMIC_RENDER_PARAMS")
set(DXC_VS_OPTS "${DXC_COMMON_OPTS}" "-E" "VSMain" "-T vs_6_0" "-D DYNAMIC_RENDER_PARAMS" "-fvk-invert-y")
set(DXC_CS_OPTS "${DXC_COMMON_OPTS}" "-E" "CSMain" "-T cs_6_0")
set(DXC_GS_OPTS "${DXC_COMMON_OPTS}" "-E" "GSMain" "-T gs_6_0")
set(DXC_RT_OPTS "${DXC_COMMON_OPTS}" "-D" "RT_SHADER" "-T" "lib_6_3" "-fspv-target-env=vulkan1.1spirv1.4" "-fspv-extension=SPV_KHR_ray_tracing" "-fspv-extension=SPV_EXT_descriptor_indexing")

if (WIN32)
    add_compile_definitions(NOMINMAX)
endif()

# The shader compiler. It must be set for every platform, not just Windows:
# RecompFrontend compiles its own shaders through rt64's `build_shader`, which
# always emits SPIR-V (and additionally DXIL on Windows, MSL on macOS), so a
# Linux build needs dxc-linux just as much as a Windows build needs dxc.exe.
#
# ⚠ This mirrors rt64's own selection deliberately. rt64 sets `DXC` in *its*
# directory scope, and a CMake function resolves variables from its *call site*,
# so RecompFrontend's calls do not see rt64's copy -- they see this one. Without
# it the command line starts with the first option and the shell reports
# `-spirv: not found`.
if (WIN32)
    set(DXC "${RT64_DIR}/src/contrib/dxc/bin/x64/dxc.exe")
elseif (APPLE)
    # dxc-macos is a shell script that finds its libraries through DYLD_LIBRARY_PATH.
    if (CMAKE_SYSTEM_PROCESSOR STREQUAL "x86_64")
        set(DXC "DYLD_LIBRARY_PATH=${RT64_DIR}/src/contrib/dxc/lib/x64" "${RT64_DIR}/src/contrib/dxc/bin/x64/dxc-macos")
    else()
        set(DXC "DYLD_LIBRARY_PATH=${RT64_DIR}/src/contrib/dxc/lib/arm64" "${RT64_DIR}/src/contrib/dxc/bin/arm64/dxc-macos")
    endif()
else()
    # libdxcompiler.so lives beside the binary, not in the system library path,
    # so the leading `VAR=value` element is load-bearing: CMake emits it
    # unquoted, and the shell reads it as an environment assignment for the
    # command that follows.
    if (CMAKE_SYSTEM_PROCESSOR STREQUAL "x86_64")
        set(DXC "LD_LIBRARY_PATH=${RT64_DIR}/src/contrib/dxc/lib/x64" "${RT64_DIR}/src/contrib/dxc/bin/x64/dxc-linux")
    else()
        set(DXC "LD_LIBRARY_PATH=${RT64_DIR}/src/contrib/dxc/lib/arm64" "${RT64_DIR}/src/contrib/dxc/bin/arm64/dxc-linux")
    endif()
endif()

# --- RecompFrontend ---------------------------------------------------------
set(RECOMP_FRONTEND_N64MODERNRUNTIME_PATH ${N64MODERNRUNTIME_DIR})
set(RECOMP_FRONTEND_RT64_PATH ${RT64_DIR})
add_subdirectory(${RECOMPFRONTEND_DIR} ${CMAKE_BINARY_DIR}/RecompFrontend)

target_link_libraries(BanjoTooieRecompiled PRIVATE
    RecompiledFuncs
    recompui
    recompinput
    librecomp
    ultramodern
    rt64
    nfd
)

target_sources(BanjoTooieRecompiled PRIVATE ${SOURCES})

# The version the executable reports. The release workflow sets BT_VERSION to
# the version it is publishing so the launcher's label identifies the build;
# without it main.cpp falls back to its own default.
#
# An environment variable rather than a cache entry on purpose: a cache entry
# would persist in build-cmake/ and keep stamping a stale version into local
# builds after the workflow that set it had gone.
#
# The emptiness test matters: an empty define would make the version string "",
# which recomp::Version::from_string rejects, and main() would exit before the
# window opened. An exported-but-empty BT_VERSION must mean "no stamp".
if (DEFINED ENV{BT_VERSION} AND NOT "$ENV{BT_VERSION}" STREQUAL "")
    target_compile_definitions(BanjoTooieRecompiled PRIVATE "BT_VERSION=\"$ENV{BT_VERSION}\"")
endif()

# recompui loads its stylesheet and fonts from `assets/` relative to the
# working directory.
add_custom_command(TARGET BanjoTooieRecompiled POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/assets
        $<TARGET_FILE_DIR:BanjoTooieRecompiled>/assets)

set_property(TARGET BanjoTooieRecompiled PROPERTY VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}")
