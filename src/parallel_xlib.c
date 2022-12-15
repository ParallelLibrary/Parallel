#include "parallel.h"

int parallel_x11(ParallelWindow* window)
{
 Display* d;
 Screen* sc;
 Window* w;
 XEvent e;
 XSetWindowAttributes a;
 int s;

 sc = DefaultScreenOfDisplay(d);
 s = DefaultScreen(d);
 w = XCreateWindow(d, RootWindow(d, s), x, y, w, h, 0, visual->depth, InputOutput, visual->visual, CWBackPixel | CWColorMap | CWCursor, &a);
 d = XOpenDisplay(NULL);
}
