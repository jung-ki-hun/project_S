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
	virtual void OnPaint() { cout << "CMyView OnPaint\n"; }
	virtual void myview_func() { cout << "CMyView myview_func()\n"; }
};

void main()
{
	CWnd p;
	CMyView *my;
	my=static_cast<CMyView *>(&p);
	my->OnPaint();  
	//static_cast일때 CWnd class의 OnPaint() 호출
	//가상함수의 기본원리 
	//-> 실제 가리키고 있는 instance의 멤버함수 호출

	
	// 한참 나중에 my가 CMyView의 instance pointer다 라는  
	// 사실만으로  CMyView 멤버함수를 호출.-> Error
	// FTT.asm 파일에서 확인
	my->myview_func();
}