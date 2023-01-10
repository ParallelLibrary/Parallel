#include "parallel.h"

int parallelandroid(ParallelWindow* window)
{
enum ANativeWindowTransform {
ANATIVEWINDOW_TRANSFORM_IDENTITY = 0x00,
ANATIVEWINDOW_TRANSFORM_MIRROR_HORIZONTAL = 0x01,
ANATIVEWINDOW_TRANSFORM_MIRROR_VERTICAL = 0x02,
ANATIVEWINDOW_TRANSFORM_ROTATE_90 = 0x04,
ANATIVEWINDOW_TRANSFORM_ROTATE_180 = ANATIVEWINDOW_TRANSFORM_MIRROR_HORIZONTAL | ANATIVEWINDOW_TRANSFORM_ROTATE_VERTICAL,
ANATIVEWINDOW_TRANSFORK_ROTATE_270 = ANATIVEWINDOW_TRANSFORM_ROTATE_180 | ANATIVEWINDOW_TRANSFORM_ROTATE_90
} 

enum ANativeWindow_ChangeFramerateStrategy{
ANATIVEWINDOW_CHANGE_FRAME_RATE_ONLY_IF_SEAMLESS = 0,
ANATIVEWINDOW_CHANGE_FRAME_RATE_ALWAYS = 1
}

enum ANativeWindow_FrameRateCompatibility{
ANATIVEWINDOW_FRAME_RATE_COMPATIBILITY_DEFAULT = 0,
ANATIVEWINDOW_FRAME_RATE_COMPATIBILITY_FIXED_SOURCE = 1
}

enum ANativeWindow_LegacyFormat{
WINDOW_FORMAT_RGBA_8888 = AHARDWAREBUFFER_FORMAT_R8G8B8A8_UNORM,
WINDOW_FORMAT_RGBX_8888 = AHARDWAREBUFFER_FORMAT_R8G8B8X8_UNORM,
WINDOW_FORMAT_RGB_565 = AHARDWAREBUFFER_FORMAT_R5G6B5_UNORM
}
}
