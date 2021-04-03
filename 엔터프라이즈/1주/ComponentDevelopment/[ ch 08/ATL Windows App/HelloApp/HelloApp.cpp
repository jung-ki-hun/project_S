// HelloApp ������ ���ø����̼�

#include <atlbase.h>
extern CComModule _Module;

#include <atlwin.h>

// ���� ������ Ŭ����
class CMainWindow : public CWindowImpl<CMainWindow, CWindow, CFrameWinTraits>
{
public:
	    // ������ Ŭ�������� ���
    DECLARE_WND_CLASS(_T("Hello"));

private:
    // �޼��� ��
	BEGIN_MSG_MAP(CMainWindow)
		MESSAGE_HANDLER(WM_PAINT, OnPaint)
	END_MSG_MAP()

private:
    LRESULT OnPaint(UINT nMsg, WPARAM wparam, LPARAM lparam, BOOL& bHandled) {
		PAINTSTRUCT ps;
		HDC hdc; 
        RECT rect;
		hdc = BeginPaint(&ps);
		GetClientRect(&rect);
        DrawText(hdc, __T("�ȳ��ϼ���? ATL �� ������ �������Դϴ�!"), -1, &rect,
				 DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        EndPaint(&ps);
        return 0;
	}

    virtual void OnFinalMessage(HWND hwnd) {
		PostQuitMessage(0); 
	}
};

CComModule _Module;

// WinMain �Լ�
int APIENTRY WinMain(HINSTANCE hinst,
                     HINSTANCE /*hinstPrev*/,
                     LPSTR     pszCmdLine,
                     int       nCmdShow)
{
    _Module.Init(NULL, hinst);

    CMainWindow wnd;
	wnd.Create(0, CWindow::rcDefault, __T("ATL ������ ���ø����̼�"), 
			   0, 0, (UINT)NULL);
    if(!wnd) 
		return -1;
  
    wnd.CenterWindow();
    wnd.ShowWindow(nCmdShow);
    wnd.UpdateWindow();

    MSG msg;
    while(::GetMessage(&msg, 0, 0, 0) ) {
        ::TranslateMessage(&msg);
        ::DispatchMessage(&msg);
	}

    _Module.Term();
  
    return 0;
}
