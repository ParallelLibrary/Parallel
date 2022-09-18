#include "parallel.h"

static LRESULT CALLBACK WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

void ParallelWindowWin32(ParallelWindow* window)
{
    WNDCLASSEXW wc = {};
    wc.cbSize = sizeof(WNDCLASSEXW);
    wc.style = CS_VREDRAW | CS_HREDRAW | CS_OWNDC;
    wc.lpfnWndProc = WndProc;
    wc.hInstance = window->hInstance;
    wc.lpszClassName = window->title;
    wc.lpszMenuName = window->title;
    wc.hIcon = (HICON)LoadImageW(window->hInstance, L"icon.ico", IMAGE_ICON, 512, 512, LR_DEFAULTCOLOR);
    wc.hIconSm = (HICON)LoadImageW(window->hInstance, L"icon.ico", IMAGE_ICON, 32, 32, LR_DEFAULTCOLOR);
    wc.hCursor = LoadCursorW(window->hInstance, IDC_ARROW);
    wc.hbrBackground = 0;

    RegisterClassExW(&wc);

    window->hwnd = CreateWindowExW(0,
                                   window->title,
                                   window->title,
                                   WS_OVERLAPPEDWINDOW,
                                   CW_USEDEFAULT,
                                   CW_USEDEFAULT,
                                   window->width,
                                   window->height,
                                   0,
                                   0,
                                   0,
                                   0);
    ShowWindow(window->hwnd, SW_SHOW);
};

void ParallelWindowWin32Events(ParallelWindow* window)
{
    MSG msg = {};
    while(PeekMessageW(&msg, NULL, 0, 0, PM_REMOVE))
    {
    TranslateMessage(&msg);
    DispatchMessageW(&msg);
    }
};

void ParallelWindowDestroyWindowWin32(ParallelWindow* window)
{
    if(window->next)
    {
        window->next->prev = window->prev;
    }

    if (window->prev)
    {
        window->prev->next = window->next;
        window->windowdata = window->next;
    }

    free(window);
};

/* May go for thunk later on */
static LRESULT CALLBACK WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
  switch (uMsg)
  {
  case WM_DESTROY:
      PostQuitMessage(0);
    break;
  default:
     return DefWindowProc(hwnd, uMsg, wParam, lParam);
  }
  return 0;
};


