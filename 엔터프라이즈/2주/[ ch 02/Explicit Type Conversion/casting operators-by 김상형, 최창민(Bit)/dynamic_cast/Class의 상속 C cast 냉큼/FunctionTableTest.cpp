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
//	((CMyView *)p)->OnMyMsg(); // Error 가 나지 않는다.
	
//*
	CMyView *pMy2=dynamic_cast<CMyView *>(p);
	pMy2->OnPaint(); // 호출이 안된다. 뻗는다.
	//pMy2->OnCreate(); //
	//pMy2->OnMyMsg(); // 이건된다. 순서가 이상하지만 

	// 가상함수의 기본 틀이 무너졌다.
	// p 는 부모 class의 instance pointer 이다. 그러므로 pMy2로 캐스팅 했을지라도 
	// 진짜로 가리키는 객체는 부모 class의 instance 이다.  부모class의 멤버를 호출해야 한다.
	// 그런데 자식 클래스의 OnMyMsg();를 호출한다.


	printf("pMy2 = %d\n",pMy2); //0 인데도???
//*/

/*
	CMyView *pMy2=dynamic_cast<CMyView *>(p);
	if(pMy2)
	{
		pMy2->OnMyMsg(); // 호출이 된다?????.
	}
	else 
	{
		printf("호출 불가\n");
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