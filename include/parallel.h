#ifndef _UNICODE
#include "unicodeforever.h"
#endif

#ifdef _WIN32 && __WIN32 && __WIN32__ 
#include <windows.h>
#include <GL/wgl.h>
#include <GL/wglext.h>
#endif

#ifdef __linux && __linux__ && __unix && __unix__
#include <GL/glx.h>
#include <GL/glxext.h>
#include <X11/Xlib.h>
#include <wayland-client.h>
#endif

#ifdef __APPLE__
#include <Cocoa/Cocoa.h>
#include <OpenGL/gl.h>
#endif

#ifdef __ANDROID__
#include <native_window.h>
#endif

#ifdef __DIRECTX__
#include <d3d12.h>
#include <d3d11.h>
#endif

#ifdef __OPENGL__
#include <GL/gl.h>
#include <GL/glext>
#include <GL/glcorearb.h>
#include <EGL/egl.h>
#include <EGL/eglext.h>
#endif

#ifdef __VULKAN__
#include <vulkan/vulkan.h>
#endif

#ifdef __METAL__
#include <Metal/Metal.hpp>
#endif

bool wglCreateContextAttribsARB_type(HDC hdc, HGLRC hSharedContext, const int* attribList); wglCreateContextAttribsARB_type* wglCreateContextAttribsARB;

bool wglChoosePixelFormatARB_type(HDC hdc, const int* piAttribIList, const FLOAT pfAttribFList, UINT nMaxFormats, int *piFormats, UINT * nNumFormats); wglChoosePixelFormatARB_type* wglChoosePixelFormatARB;

PFNGLBINDBUFFERARBPROC glBindBuffer = (PFNGLBINDBUFFERARBPROC*) wglGetProcAddress("glBindBuffer");
PFNGLDELETEBUFFERSARBPROC glDeleteBuffers = (PFNGLDELETEBUFFERSARBPROC*) wglGetProcAddress("glDeleteBuffers");
PFNGLGENBUFFERSARBPROC glGenBuffers = (PFNGLGENBUFFERSARBPROC*) wglGetProcAddress("glGenBuffers");
PFNGLBUFFERDATAARBPROC glBufferData = (PFNGLBUFFERDATAARBPROC*) wglGetProcAddress("glBufferData");
PFNGLTEXPARAMETERARBPROC glTexParameter = (PFNGLTEXPARAMETERARBPROC*) wglGetProcAddress("glTexParameter");
PFNGLTEXPARAMETERIARBPROC glTexParameteri = (PFNGLTEXPARAMETERIARBPROC*) wglGetProcAddress("glTexParameteri");
PFNGLTEXPARAMETERFVARBPROC glTexParameterfv = (PFNGLTEXPARAMETERFVARBPROC*) wglGetProcAddress("glTexParameterfv");
PFNGLGENERATEMIPMAPARBPROC glGenerateMipMap = (PFNGLGENERATEMIPMAPARBPROC*) wglGetProcAddress("glGenerateMipMap");
PFNGLGENTEXTURESARBPROC glGenTextures = (PFNGLGENTEXTURESARBPROC*) wglGetProcAddress("glGenTextures");
PFNGLBINDTEXTURESARBPROC glBindTexture = (PFNGLBINDTEXTURESARBPROC*) wglGetProcAddress("glBindTexture");
PFNGLACTIVATETEXTUREARBPROC glActivateTexture = (PFNGLACTIVATETEXTUREARBPROC*) wglGetProcAddress("glActivateTexture");
PFNGLTEXTIMAGE2DARBPROC glTextImage2D = (PFNGLTEXTIMAGE2DARBPROC*) wglGetProcAddress("glTextImage2D");
PFNGLVERTEXATTRIBPOINTERARBPROC glVertexAttribPointer = (PFNGLVERTEXATTRIBPOINTERARBPROC*) wglGetProcAddress("glVertexAttribPointer");
PFNGLENABLEVERTEXATTRIBARRAYARBPROC glEnableVertexAttribArray = (PFNGLENABLEVERTEXATTRIBARRAYARBPROC*) wglGetProcAddress("glEnableVertexAttribArray");
PFNGLBINDVERTEXARRAYARBPROC glBindVertexArray = (PFNGLBINDVERTEXARRAYARBPROC*) wglGetProcAddress("glBindVertexArray");
PFNGLCREATESHADERARBPROC glCreateShader = (PFNGLCREATESHADERARBPROC*) wglGetProcAddress("glCreateShader");
PFNGLSHADERSOURCEARBPROC glShaderSource = (PFNGLSHADERSOURCEARBPROC*) wglGetProcAddress("glShaderSource");
PFNGLCOMPILESHADERARBPROC glCompileShader = (PFNGLCOMPILESHADERARBPROC*) wglGetProcAddress("glCompileShader");
PFNGLGETSHADERIVARBPROC glGetShaderiv = (PFNGLGETSHADERIVARBPROC*) wglGetProcAddress("glGetShaderiv");
PFNGLGETSHADERINFOLOGARBPROC glGetShaderInfoLog = (PFNGLGETSHADERINFOLOGARBPROC*) wglGetProcAddress("glGetShaderInfoLog");
PFNGLDRAWELEMENTSARBPROC glDrawElements = (PFNGLDRAWELEMENTSARBPROC*) wglGetProcAddress("glDrawElements");
PFNGLCREATEPROGRAMARBPROC glCreateProgram = (PFNGLCREATEPROGRAMARBPROC*) wglGetProcAddress("glCreateProgram");
PFNGLATTACHSHADERARBPROC glAttachShader = (PFNGLATTACHSHADERARBPROC*) wglGetProcAddress("glAttachShader");
PFNGLLINKPROGRAMARBPROC glLinkProgram = (PFNGLLINKPROGRAMARBPROC*) wglGetProcAddress("glLinkProgram");
PFNGLUSEPROGRAMARBPROC glUseProgram = (PFNGLUSEPROGRAMARBPROC*) wglGetProcAddress("glUseProgram");
PFNGLDELETESHADERARBPROC glDeleteShader = (PFNGLDELETESHADERARBPROC*) wglGetProcAddress("glDeleteShader");

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
 Display* d;
 Window* w;
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
void ParallelAdjustRect(ParallelWindow* window, DWORD style, int x, int y, int w, int h, UINT flags);

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
int ParallelANativeWindow(ParallelWindow* window);

/* Windows */
int ParallelWGL(ParallelWindow* window);

/* Linux */
int ParallelGLX(ParallelWindow* window);

/*Linux and MacOS */
int ParallelEGL(ParallelWindow* window);

/* Android */
int ParallelGLES(ParallelWindow* window);
#ifdef __cplusplus
}
#endif // __cplusplus
