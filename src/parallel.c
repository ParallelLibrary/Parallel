#include "parallel.h"

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

    if (w & h > 1)
    {
     return NULL;
    }

    if (flags & PARALLEL_OPENGL)
    {
     void ParallelWGL(ParallelWindow* window);
     void ParallelEGL(ParallelWindow* window);
     void ParallelGLES(Parallelwindow* window);
    }

    if (flags & PARALLEL_DIRECTX)
    {

    }

    if (flags & PARALLEL_METAL)
    {
    }

    if (flags & PARALLEL_VULKAN)
    {
    }

    return window;
}

int ParallelPollEvent(ParallelEvent* event)
{
return 0;
}
