#include "parallel.h"

int parallelwayland(ParallelWindow* window)
{
wl_display* d;
wl_event_loop* e;
wl_compositor* c;
wl_region* r;
wl_buffer* b;
const wl_buffer_listener* bl;
wl_surface* s;
wl_listener* l;
wl_registry* reg;
wl_keyboard* k;
const wl_keyboard_listener* kl;
const wl_interface* i;

d = wl_display_connect(NULL);
d = wl_display_create(NULL);

if (window->width || window->height)
{
}

s = wl_compositor_create_surface(c);

wl_surface_attach(&s, &b, window->width, window->height);

wl_surface_destroy(&s);

wl_buffer_add_listener(&b, &bl, NULL);

wl_keyboard_add_listener(&k, &kl, NULL);

wl_keyboard_destroy(&d);

wl_pointer_set_cursor(&p, NULL, &s, 0, 0);

wl_pointer_destroy(&d);

wl_get_registery(display);

wl_registry_add_listener(wl_registry, &l, NULL);

wl_registry_bind(&reg, NULL, &i, 4);

wl_registry_destroy(&reg);
}
