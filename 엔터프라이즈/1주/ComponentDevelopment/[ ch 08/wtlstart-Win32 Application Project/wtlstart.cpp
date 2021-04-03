#include <atlbase.h>
extern CComModule _Module;
#include <atlwin.h>

// MainWindow.h내
// CWindowImpl의 상속 클래스로 메세지에의 반응을 정의
class CMyWindow : public CWindowImpl<CMyWindow>
{
public:
    // 윈도우 클래스명을 등록
    DECLARE_WND_CLASS(_T("Hello"));

private:
    // 메세지 맵
    BEGIN_MSG_MAP(CMyWindow)
        MESSAGE_HANDLER(WM_PAINT, OnPaint)
        MESSAGE_HANDLER(WM_DESTROY, OnDestroy)
    END_MSG_MAP()

    LRESULT OnPaint(UINT, WPARAM, LPARAM, BOOL&){
        PAINTSTRUCT ps;
        HDC hDC = BeginPaint(&ps);
        RECT rect;
        GetClientRect(&rect);
        DrawText(hDC, _T("Hello, ATL/WTL"),
            -1, &rect, DT_SINGLELINE | DT_CENTER | DT_VCENTER);
        EndPaint(&ps);
        return 0;
    }

    LRESULT OnDestroy(UINT, WPARAM, LPARAM, BOOL&){
        PostQuitMessage(0);
        return 0;
    }
};


//#include "MainWindow.h"

CComModule _Module;

int WINAPI _tWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR lpCmdLine, int nCmdShow)
{
    _Module.Init(NULL, hInstance);

    // 독자 윈도우를 작성
    CMyWindow wnd;
    wnd.Create(NULL, CWindow::rcDefault,
        _T("Hello, ATL/WTL"), WS_OVERLAPPEDWINDOW | WS_VISIBLE);

    MSG msg;
    while(GetMessage(&msg, NULL, 0, 0) > 0){
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    _Module.Term();

    return msg.wParam;
}
