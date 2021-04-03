// HelloApp 윈도우 애플리케이션

#include <atlbase.h>
#include <atlwin.h>

// 메인 윈도우 클래스
class CMainWindow : public CWindowImpl<CMainWindow, CWindow, CFrameWinTraits>
{
public:

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
        DrawText(hdc, __T("안녕하세요? ATL 로 생성한 윈도우입니다!"), -1, &rect,
				 DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        EndPaint(&ps);
        return 0;
	}

    virtual void OnFinalMessage(HWND /*hwnd*/) {
		PostQuitMessage(0); 
	}
};

// WinMain 함수
int APIENTRY WinMain(HINSTANCE hinst,
                     HINSTANCE /*hinstPrev*/,
                     LPSTR     pszCmdLine,
                     int       nCmdShow)
{
    CMainWindow wnd;
	wnd.Create(0, CWindow::rcDefault, __T("ATL 윈도우 애플리케이션"), 
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
  
    return 0;
}
