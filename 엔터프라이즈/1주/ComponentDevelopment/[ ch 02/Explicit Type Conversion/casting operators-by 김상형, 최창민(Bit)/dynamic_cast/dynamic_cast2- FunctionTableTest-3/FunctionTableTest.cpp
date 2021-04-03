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
	//static_cast�϶� CWnd class�� OnPaint() ȣ��
	//�����Լ��� �⺻���� 
	//-> ���� ����Ű�� �ִ� instance�� ����Լ� ȣ��

	
	// ���� ���߿� my�� CMyView�� instance pointer�� ���  
	// ��Ǹ�����  CMyView ����Լ��� ȣ��.-> Error
	// FTT.asm ���Ͽ��� Ȯ��
	my->myview_func();
}