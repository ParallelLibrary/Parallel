#ifndef _UNICODE
#define _UNICODE
#endif

#ifndef _WIN32
#define _WIN32
#endif

#include <windows.h>

#define PARALLEL_INIT_VIDEO 0x10000
#define PARALLEL_INIT_AUDIO 0x20000
#define PARALLEL_INIT_EVERYTHING (PARALLEL_INIT_VIDEO | PARALLEL_INIT_AUDIO)

#define PARALLEL_INIT_OPENGL
#define PARALLEL_INIT_OPENGLES
#define PARALLEL_INIT_DIRECTX
#define PARALLEL_INIT_VULKAN
#define PARALLEL_INIT_METAL

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

typedef struct ParallelWindow ParallelWindow;

typedef struct ParallelDevice ParallelDevice;

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
UINT32 PARALLEL_QUITEVENT;
};

struct ParallelDevice
{
    void (*parallelcreatewindow) (ParallelWindow* window);
};

/* Creates the Parallel window */
ParallelWindow* CreateParallelWindow(const char* title, int x, int y, int w, int h, UINT flags);

/* Win32 window */
int ParallelWin32(ParallelWindow* window);

/* Pump Events */
void ParallelEvents(ParallelWindow* window);

/* Win32 Events */
void ParallelWin32Events(ParallelWindow* window);

/* Get the window x y coordinates */
void ParallelAdjustWin32Rect(ParallelWindow* window, DWORD style, int x, int y, int w, int h, UINT flags);

/* Win32 Main */
int ParallelMain(void);

/* ParallelWindow Initialize */
void ParallelInit(UINT flags);

/* Poll Events */
int ParallelPollEvent(ParallelEvent* event);

/* Title Unicode */
int ParallelCreateWideStringFromUTF8Win32(WCHAR* source);

int ParallelSetTitleWin32(ParallelWindow* window, const char* title);

/* Find a way to convert ANSI to UNICODE Custom or use MULTIBYTE(UTF-16) fucntion or this */

#ifdef __cplusplus
}
#endif // __cplusplus

