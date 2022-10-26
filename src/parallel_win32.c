#include "parallel.h"

static LRESULT CALLBACK WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

int ParallelWin32(ParallelWindow* window)
{
    DWORD style = CS_VREDRAW | CS_HREDRAW | CS_OWNDC;
    const wchar_t* widetitle;
    int x, y;
    int w, h;

    WNDCLASSEXW wc = {};
    wc.cbSize = sizeof(WNDCLASSEXW);
    wc.style = CS_VREDRAW | CS_HREDRAW | CS_OWNDC;
    wc.lpfnWndProc = WndProc;
    wc.hInstance = window->hInstance;
    wc.lpszClassName = widetitle;
    wc.lpszMenuName = widetitle;
    wc.hIcon = (HICON)LoadImageW(window->hInstance, L"icon.ico", IMAGE_ICON, 512, 512, LR_DEFAULTCOLOR);
    wc.hIconSm = (HICON)LoadImageW(window->hInstance, L"icon.ico", IMAGE_ICON, 32, 32, LR_DEFAULTCOLOR);
    wc.hCursor = LoadCursorW(window->hInstance, IDC_ARROW);
    wc.hbrBackground = 0;

    RegisterClassExW(&wc);

    if (window)
    {
     RECT rect = {0, 0, window->w, window->h};
     x = window->x + rect.left;
     y = window->y + rect.top;
     w = rect.right - rect.left;
     h = rect.bottom - rect.top;
     AdjustWindowRectEx(&rect, style, FALSE, 0);
     SetWindowPos(window->hwnd, HWND_TOP, rect.left, rect.top, rect.right - rect.left, rect.bottom - rect.top, SWP_NOACTIVATE | SWP_NOZORDER);
    }

    widetitle = ParallelSetTitleWin32(window, window->title);

    window->hwnd = CreateWindowExW(0,
                                   widetitle,
                                   widetitle,
                                   WS_OVERLAPPEDWINDOW,
                                   x,
                                   y,
                                   w,
                                   h,
                                   0,
                                   0,
                                   0,
                                   0);

    ShowWindow(window->hwnd, SW_SHOW);

    return 0;
}

int ParallelSetTitleWin32(ParallelWindow* window, const char* title)
{
    const wchar_t widetitle = ParallelCreateWideStringFromUTF8Win32(title);
    SetWindowTextW(window->hwnd, widetitle);
    free(widetitle);
}

int ParallelCreateWideStringFromUTF8Win32(WCHAR* source)
{

}

void ParallelWin32Events(ParallelWindow* window)
{
    MSG msg = {};
    while(PeekMessageW(&msg, NULL, 0, 0, PM_REMOVE))
    {
    TranslateMessage(&msg);
    DispatchMessageW(&msg);
    }
}

static LRESULT CALLBACK WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
  switch (uMsg)
  {
  case WM_CLOSE:
  case WM_DESTROY:
    break;
  default:
     return DefWindowProc(hwnd, uMsg, wParam, lParam);
  }
  return 0;
}
