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
     void ParallelGLX(ParallelWindow* window);
    }

    if (flags & PARALLEL_DIRECTX)
    {
     void ParallelDirectX11(ParallelWindow* window);
     void ParallelDirectX12(ParallelWindow* window);
    }

    if (flags & PARALLEL_METAL)
    {
     void ParallelMetal(ParallelWindow* window);
    }

    if (flags & PARALLEL_VULKAN)
    {
     void ParallelVulkan(ParallelWindow* window);
    }

    return window;
}

int ParallelPollEvent(ParallelEvent* event)
{
  if (event)
   PARALLEL_QUIT_EVENT:
   free(event);
  }

   return 0;
}
