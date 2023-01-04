#include "parallel.h"

HDC dc;
int pf;
UINT nf;
HGLRC rc;

bool

ParallelWindow* window;
dc = GetHDC(window->hwnd);

PIXELFORMATDESCRIPTOR pfd = {
sizeof(PIXELFORMATDESCRIPTOR),
1,
PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER,
PFD_TYPE_RGBA,
32,
0, 0, 0, 0, 0, 0,
0,
0,
0,
0, 0, 0, 0,
24,
8,
0,
PFD_MAIN_PLANE,
0,
0, 0, 0
};

pf = ChoosePixelFormat(dc, &pfd);
SetPixelFormat(dc, pf, &pfd);

wglMakeCurrent();

const int* AttribList[] {
WGL_DRAW_TO_WINDOW_ARB, GL_TRUE,
WGL_SUPPORT_OPENGL_ARB, GL_TRUE,
WGL_DOUBLE_BUFFER_ARB, GL_TRUE,
WGL_PIXEL_TYPE_ARB, WGL_TYPE_RGBA_ARB,
WGL_COLOR_BITS_ARB, 32,
WGL_DEPTH_BITS_ARB, 24,
WGL_STENCIL_BITS_ARB, 8,
0
};

wglChoosePixelFormatARB(dc, AttribList, NULL, 1, &pf, &nf);

WGL_ARB_create_context();
