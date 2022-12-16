#ifndef _UNICODE
#define _UNICODE
#endif

#ifndef _WIN32
#include <windows.h>
#endif

#include <X11/Xlib.h>
#include <wayland-client.h>
#include <Cocoa/Cocoa.h>
#include <native_window.h>

#define PARALLEL_INIT_VIDEO 0x10000
#define PARALLEL_INIT_AUDIO 0x20000
#define PARALLEL_INIT_EVERYTHING (PARALLEL_INIT_VIDEO | PARALLEL_INIT_AUDIO)

#define PARALLEL_WIN32
#define PARALLEL_XLIB
#define PARALLEL_WAYLAND
#define PARALLEL_COCOAS
#define PARALLEL_NATIVEWINDOW

#define PARALLEL_INIT_OPENGL
#define PARALLEL_INIT_OPENGLES
#define PARALLEL_INIT_DIRECTX
#define PARALLEL_INIT_VULKAN
#define PARALLEL_INIT_METAL

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

typedef struct ParallelWindow ParallelWindow;

typedef union ParallelEvent ParallelEvent;

struct ParallelWindow
{
 HINSTANCE hInstance;
 HWND hwnd;
 const char* title;
 int w;
 int h;
 int x;
 int y;
 UINT flags;
};

union ParallelEvent
{
UINT32 PARALLEL_WINDOWEVENT;
UINT32 PARALLEL_KEYEVENT;
UINT32 PARALLEL_QUITEVENT;
};

/* Creates the Parallel window */
ParallelWindow* CreateParallelWindow(const char* title, int x, int y, int w, int h, UINT flags);

/* Parallel Icon */
int ParallelIcon(const char* icon);

/* Parallel Cursor */
int ParallelCursor(const char* cursor);

/* Title Unicode */
int ParallelSetTitle(const char* title);

/* Win32 Window */
int ParallelWin32(ParallelWindow* window);

/* Pump Events */
void ParallelEvents(ParallelWindow* window);

/* Win32 Events */
void ParallelWin32Events(ParallelWindow* window);

/* Get the window x y coordinates for Win32*/
void ParallelAdjustWin32Rect(ParallelWindow* window, DWORD style, int x, int y, int w, int h, UINT flags);

/* Win32 Main */
int ParallelMain(void);

/* ParallelWindow Initialize */
void ParallelInit(UINT flags);

/* Poll Events */
int ParallelPollEvent(ParallelEvent* event);

/* X11 Window */
int ParallelX11(ParallelWindow* window);

/* Wayland Window */
int ParallelWayland(ParallelWindow* window);

/* Cocoa Window */
int ParallelCocoa(ParallelWindow* window);

/* ANativeWindow */
int 
#ifdef __cplusplus
}
#endif // __cplusplus
