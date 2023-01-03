#include "parallel.h"

int parallelwayland(ParallelWindow* window)
{
wl_display* d;
wl_event_loop* e;
wl_compositor* c;
wl_region* r;
wl_buffer* b;
wl_surface* s;

d = wl_display_connect(NULL);
d = wl_display_create(NULL);

if (window->width || window->height)
{
}

}
