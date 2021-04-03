#include<iostream.h>
class CWnd {
public:
	virtual void OnCreate() { cout << "CWnd OnCreate\n"; }
	virtual void OnPaint() { cout << "CWnd OnPaint\n"; }
	virtual void OnClose() { cout << "CWnd OnClose\n"; }
};

class CView : public CWnd {
public:

};

class CMyView : public CView {
public:
	//virtual void OnPaint() { cout << "CMyView OnPaint\n"; }
	//virtual void myview_func() { cout << "CMyView myview_func()\n"; }
};

void main()
{
	CWnd p;
	CMyView *my;
	
	my=dynamic_cast<CMyView *>(&p); //이런 경우 dynamic_cast를 사용하여 확인하라. 
	my->OnPaint();  // Dubugging - NULL return
	
	// p가 자식 클래스(CMyView)의 instance를 가리키고 있을 때만 안전.
	// 그렇지 않을 경우 NULL을 return, 허용치 않는다.

}