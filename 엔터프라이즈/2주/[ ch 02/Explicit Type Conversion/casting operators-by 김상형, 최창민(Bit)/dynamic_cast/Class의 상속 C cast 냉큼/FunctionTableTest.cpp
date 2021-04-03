#include<iostream.h>
#include<stdio.h>
class CWnd {
public:
	virtual void OnCreate() { cout << "CWnd OnCreate\n"; }
	virtual void OnPaint() { cout << "CWnd OnPaint\n"; }
	virtual void OnClose() { cout << "CWnd OnClose\n"; }
};

class CMyView : public CWnd {
public:
	void OnPaint() { cout << "CMyView OnPaint\n"; }
	void OnMyMsg() { cout << "CMyView OnMyMsg\n"; }
};

void main()
{
	CWnd *a;
	a=new CMyView();
	a->OnPaint();
/*
	((CMyView *)a)->OnMyMsg();
	CMyView *pMy=dynamic_cast<CMyView *>(a);
	pMy->OnMyMsg();

//*/

	CWnd *p;
	p=new CWnd();
//	((CMyView *)p)->OnMyMsg(); // Error �� ���� �ʴ´�.
	
//*
	CMyView *pMy2=dynamic_cast<CMyView *>(p);
	pMy2->OnPaint(); // ȣ���� �ȵȴ�. ���´�.
	//pMy2->OnCreate(); //
	//pMy2->OnMyMsg(); // �̰ǵȴ�. ������ �̻������� 

	// �����Լ��� �⺻ Ʋ�� ��������.
	// p �� �θ� class�� instance pointer �̴�. �׷��Ƿ� pMy2�� ĳ���� �������� 
	// ��¥�� ����Ű�� ��ü�� �θ� class�� instance �̴�.  �θ�class�� ����� ȣ���ؾ� �Ѵ�.
	// �׷��� �ڽ� Ŭ������ OnMyMsg();�� ȣ���Ѵ�.


	printf("pMy2 = %d\n",pMy2); //0 �ε���???
//*/

/*
	CMyView *pMy2=dynamic_cast<CMyView *>(p);
	if(pMy2)
	{
		pMy2->OnMyMsg(); // ȣ���� �ȴ�?????.
	}
	else 
	{
		printf("ȣ�� �Ұ�\n");
	}
//*/

}

/* If you meet error message, "warning C4541: 'dynamic_cast' used on polymorphic type
   'class Parent' with /GR-; unpredictable behavior may result,
   Check option, "Enable Run-Time Type Information(RTTI)"
*/

/* To find this option in the development environment, 
   click Settings on the Project menu. Then click the C/C++ tab, 
   and click C++ Language in the Category box. 
*/