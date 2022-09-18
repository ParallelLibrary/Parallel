#include "parallel.h"

ParallelWindow* CreateParallelWindow(const wchar_t* title, int width, int height, UINT flags)
{
    ParallelWindow* window;
    window = (ParallelWindow*)calloc(1, sizeof(ParallelWindow));

    window->title = title;
    window->width = width;
    window->height = height;
    window->flags = flags;

    window->next = window->windowdata;
    window->windowdata = window;

    ParallelWindowWin32(window);

    return window;
};

void ParallelWindowEvents(ParallelWindow* window)
{
    ParallelWindowWin32Events(window);
}

int ParallelWindowShouldClose(ParallelWindow* handle)
{
    ParallelWindow* window = (ParallelWindow*) handle;

    return window->shouldClose;
};
