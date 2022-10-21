#include "parallel.h"

void ParallelInit(UINT flags)
{

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

    };

    return window;
}
