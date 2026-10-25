#pragma once

#include <cmath>

namespace tooie::visibility {

struct Plane {
    float normal[3];
    float distance;
};

// The two outward-facing side planes share the camera's forward component.
// Scaling that component widens tan(horizontal half-FOV) without admitting
// objects behind the camera. Normalize distances too, for sphere tests.
inline bool widen_side_planes(Plane (&planes)[2], float expansion) {
    if (!std::isfinite(expansion) || expansion <= 1.0f) {
        return false;
    }
    Plane widened[2]{};
    const float mix = (expansion - 1.0f) * 0.5f;
    for (int side = 0; side < 2; ++side) {
        float length_squared = 0.0f;
        for (int axis = 0; axis < 3; ++axis) {
            const float value = planes[side].normal[axis] + mix *
                (planes[0].normal[axis] + planes[1].normal[axis]);
            widened[side].normal[axis] = value;
            length_squared += value * value;
        }
        if (!std::isfinite(length_squared) || length_squared <= 0.0f) {
            return false;
        }
        const float inverse_length = 1.0f / std::sqrt(length_squared);
        for (float& value : widened[side].normal) {
            value *= inverse_length;
        }
        widened[side].distance = (planes[side].distance + mix *
            (planes[0].distance + planes[1].distance)) * inverse_length;
        if (!std::isfinite(widened[side].distance)) {
            return false;
        }
    }
    planes[0] = widened[0];
    planes[1] = widened[1];
    return true;
}

// Called on the SDL event thread; read by the guest thread via an atomic.
void update_display_size(int width, int height);
float display_aspect_ratio();

} // namespace tooie::visibility
