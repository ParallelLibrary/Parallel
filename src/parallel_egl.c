#include "parallel.h"

int parallelegl(ParallelWindow* window)
{
int glAtttibs[] = {
EGL_SURFACE_TYPE, EGL_WINDOW_BIT,
EGL_RED_SIZE, 8,
EGL_GREEN_SIZE, 8,
EGL_BLUE_SIZE, 8,
EGL_RENDERABLE_TYPE, EGL_OPENGL_ES3_BIT,
EGL_NONE
}

int contextAttribs[] = {
EGL_CONTEXT_CLIENT_VERSION, 3,
EGL_NONE
}

}
