#include "parallel.h"

glXCreateContextAttribsARBProc glXCreateContextAttribsARB = (glXCreateContextAttribsARBProc*) glXGetProcAddressARB("glXCreateContextAttribsARB"); 

int parallelglx(ParallelWindow* window)
{
int glAtttibs[] 
{
GLX_RGBA, 
GLX_DOUBLEBUFFER,
GLX_DEPTH_SIZE, 24,
GLX_STENCIL_SIZE, 8,
GLX_RED_SIZE, 8,
GLX_GREEN_SIZE, 8,
GLX_BLUE_SIZE, 8,
GLX_SAMPLE_BUFFERS, 0,
GLX_SAMPLES, 0,
None
}

XVisualInfo* info = glXChooseVisual(window->d, s, glAttribs);

XSetWindowAttributes windowAttribs;
windowAttribs.border_pixel = BlackPixel (window->d, s);
windowAttribs.background_pixel = WhitePixel (window->d, s);
windowAttribs.overide_redirect = true;
windowAttribs.color_map = XCreateColorMap(window->d, RootWindow(window->d, s), visual->visual, AllocNone);
windowAttribs.event_mask = ExposureMask;

int glAttribsARB[] = {
GLX_X_RENDERABLE, TRUE,
GLX_DRAWABLE_TYPE, GLX_WINDOW_BIT,
GLX_X_VISUAL_TYPE, GLX_TRUE_COLOR,
GLX_RED_SIZE, 8,
GLX_GREEN_SIZE, 8,
GLX_BLUE_SIZE, 8,
GLX_ALPHA_SIZE, 8,
GLX_DEPTH_SIZE, 24,
GLX_STENCIL_SIZE, 8,
GLX_DOUBLE_BUFFER, TRUE,
None
}

int fbcount;

GLXFBConfig fbc = glxChooseFBConfig(window->d, DefaultScreen(window->d), glAttribsARB, &fbcount);

int best_Fbc = -1, worst_Fbc = -1, best_num_samp = -1, worst_num_samp = 999;

XVisualInfo* visual = glxGetVisualFrimFBConfig(window->d, bestFbc);

XFree(vi);

XFree(fbc);

int context_attribs[] = {
	GLX_CONTEXT_MAJOR_VERSION_ARB, 4,
	GLX_CONTEXT_MINOR_VERSION_ARB, 6,
	GLX_CONTEXT_FLAGS_ARB, GLX_CONTEXT_CORE_PROFILE_BIT_ARB,
	None
};

GLXContext context = 0;

context = glXCreateNewContext(window->d, fbc, GLX_RGBA_TYPE, 0, True);

context = glXCreateContextAttribsARB(window->d, fbc, 0, true, context_attribs);

XSync(window->d,False);
}
