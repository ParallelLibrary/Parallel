#include "parallel.h"

#define PARALLEL_INIT_VIDEO 011

void ParallelInit(UINT flags)
{
    if ((flags & PARALLEL_INIT_VIDEO))
    {

    }
}

ParallelWindow* CreateParallelWindow(const char* title, int x, int y, int w, int h, UINT flags)
{
    ParallelWindow* window;
    window = (ParallelWindow*)calloc(1, sizeof(ParallelWindow));

    window->title = title;
    window->w = w;
    window->h = h;
    window->x = x;
    window->y = y;

    window->flags = flags;

    if (ParallelWin32(window))
    {
     DestroyWindow(window->hwnd);
    };

    return window;
}

int ParallelPollEvent(ParallelEvent* event)
{
return 0;
}
