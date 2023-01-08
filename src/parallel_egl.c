#include "parallel.h"

int parallelegl(ParallelWindow* window)
{
EGLDisplay* d;
EGLConfig* c;
EGLSurface* s;
EGLContext* con;

wl_egl_window* w;

w = wl_egl_window_create(s, window->w, window->h);
s = egl_create_surface(d, c, w, NULL);

eglMakeCurrent(d, s, 0, c);

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
