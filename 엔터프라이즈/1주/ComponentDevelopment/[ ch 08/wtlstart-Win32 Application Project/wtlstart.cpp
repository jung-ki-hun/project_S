#include <atlbase.h>
extern CComModule _Module;
#include <atlwin.h>

// MainWindow.h��
// CWindowImpl�� ��� Ŭ������ �޼������� ������ ����
class CMyWindow : public CWindowImpl<CMyWindow>
{
public:
    // ������ Ŭ�������� ���
    DECLARE_WND_CLASS(_T("Hello"));

private:
    // �޼��� ��
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

    // ���� �����츦 �ۼ�
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
