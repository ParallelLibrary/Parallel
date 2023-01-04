#include "parallel.h"

HDC dc;
int pf;
HGLRC rc;

bool

ParallelWindow* window;
dc = GetHDC(window->hwnd);

PIXELFORMATDESCRIPTOR pf = {
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

ChoosePixelFormat();
SetPixelFormat();

wglMakeCurrent();

wglChoosePixelFormatARB();

const int* AttribList[] {
};

WGL_ARB_create_context();
