#include <cmath>
#include <emscripten/emscripten.h>

// C++ equilibrium calculation core.
// Compile with Emscripten to WebAssembly using the command in README.txt.
extern "C" {
EMSCRIPTEN_KEEPALIVE double resultant_magnitude(double fx, double fy) {
    return std::sqrt(fx*fx + fy*fy);
}
EMSCRIPTEN_KEEPALIVE double resultant_angle_deg(double fx, double fy) {
    return std::atan2(fy, fx) * 180.0 / 3.14159265358979323846;
}
EMSCRIPTEN_KEEPALIVE double component_x(double magnitude, double angle_deg) {
    return magnitude * std::cos(angle_deg * 3.14159265358979323846 / 180.0);
}
EMSCRIPTEN_KEEPALIVE double component_y(double magnitude, double angle_deg) {
    return magnitude * std::sin(angle_deg * 3.14159265358979323846 / 180.0);
}
}
