#include "parallel.h"

int parallel_x11(ParallelWindow* window)
{
 Display* d;
 Window* w;
 int s;
 s = XDefaultScreen(d);
 w = XCreateWindow(d, RootWindow(d, s), x, y, w, h, );
 d = XOpenDisplay(NULL);
}
