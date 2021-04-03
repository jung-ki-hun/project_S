// MyMulDivClient.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

