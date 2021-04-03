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
	void OnPaint() { cout << "CMyView OnPaint\n"; }
};

void main()
{
	CMyView a;
	a.OnPaint();
}