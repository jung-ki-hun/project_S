// MyMulDivClient.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

#import "C:\Users\07\Desktop\JsjPrj\bin\Debug\jsjPrj.tlb" no_namespace

int _tmain(int argc, _TCHAR* argv[])
{
	CoInitialize(NULL);

    ICalcPtr p(__uuidof(Calc));
    cout<<p->sum(1,2)<<"\n";
	cout<<p->sub(5,6)<<"\n";
	cout<<p->mul(4,8)<<"\n";
	cout<<p->div(8,2)<<"\n";
   

	return 0;
}

