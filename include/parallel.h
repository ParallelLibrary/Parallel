#ifndef _UNICODE
#endif
#ifndef _WIN32
#endif

#include <windows.h>

typedef struct ParallelWindow ParallelWindow;

struct ParallelWindow
{
 HINSTANCE hInstance;
 HWND hwnd;
 const wchar_t* title;
 int width;
 int height;
 UINT flags;
 int shouldClose;

 ParallelWindow* next;
 ParallelWindow* prev;
 ParallelWindow* windowdata;
};

ParallelWindow* CreateParallelWindow(const wchar_t* title, int width, int height, UINT flags);
void ParallelWindowWin32(ParallelWindow* window);
void ParallelWindowEvents(ParallelWindow* window);
void ParallelWindowWin32Events(ParallelWindow* window);
void ParallelWindowWin32CloseRequest(ParallelWindow* window);
void ParallelWindowCloseRequest(ParallelWindow* window);
void ParallelWindowDestroyWindow(ParallelWindow* window);
void ParallelWindowDestroyWindowWin32(ParallelWindow* window);
void ParallelWindowQuitWin32(ParallelWindow* window);
void ParallelWindowQuit(ParallelWindow* window);
int ParallelWindowShouldClose(ParallelWindow* handle);

