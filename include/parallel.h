#ifndef _UNICODE
#include "unicodeforever.h"
#endif

#ifndef _WIN32
#include <windows.h>
#include <GL/wgl.h>
#include <GL/wglext.h>
#endif

#include <GL/gl.h>

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

#define BACKSPACE 0x08
#define TAB 0x09
#define ENTER 0x0D
#define SHIFT 0x10
#define CTRL 0x11
#define CAPLOCKS 0x14
#define ESC 0x1B
#define SPACEBAR 0x20
#define 0 0x30
#define 1 0x31
#define 2 0x32
#define 3 0x33
#define 4 0x34
#define 5 0x35
#define 6 0x36
#define 7 0x37
#define 8 0x38
#define 9 0x39
#define A 0x41
#define B 0x42
#define C 0x43
#define D 0x44
#define E 0x45
#define F 0x46
#define G 0x47
#define H 0x48
#define I 0x49
#define J 0x4A
#define K 0x4B
#define L 0x4C
#define M 0x4D
#define N 0x4E
#define O 0x4F
#define P 0x50
#define Q 0x51
#define R 0x52
#define S 0x53
#define T 0x54
#define U 0x55
#define V 0x56
#define W 0x57
#define X 0x58
#define Y 0x59
#define Z 0x5A

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
