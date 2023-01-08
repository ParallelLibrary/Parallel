#include "parallel.h"

int parallelx11(ParallelWindow* window)
{
 Screen* sc;
 XEvent e;
 XSetWindowAttributes a;
 XTextProperty tp;
 tp.value = (const char*)window->title;
 tp.encoding = XA_STRING;
 tp.format = 8;
 tp.nitems = strlen(window->title);

 XTextProperty ip;
 ip.value = (const char*)window->icon;
 ip.encoding = XA_STRING;
 ip.format = 8;
 ip.nitems = strlen(window->icon);

 int s;

 sc = DefaultScreenOfDisplay(window->d);
 s = DefaultScreen(window->d);
 window->w = XCreateWindow(window->d, RootWindow(d, s), x, y, w, h, 0, visual->depth, InputOutput, visual->visual, CWBackPixel | CWColorMap | CWCursor, &a);
 d = XOpenDisplay(NULL);

 XSetWMName(d, w, &tp);
 XSetWMIconName(d, w, &ip);

 switch
 {
 }
}
