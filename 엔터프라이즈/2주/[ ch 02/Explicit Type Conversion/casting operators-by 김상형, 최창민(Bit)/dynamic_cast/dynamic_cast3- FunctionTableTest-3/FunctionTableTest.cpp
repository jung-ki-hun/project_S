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
	
	my=dynamic_cast<CMyView *>(&p); //�̷� ��� dynamic_cast�� ����Ͽ� Ȯ���϶�. 
	my->OnPaint();  // Dubugging - NULL return
	
	// p�� �ڽ� Ŭ����(CMyView)�� instance�� ����Ű�� ���� ���� ����.
	// �׷��� ���� ��� NULL�� return, ���ġ �ʴ´�.

}