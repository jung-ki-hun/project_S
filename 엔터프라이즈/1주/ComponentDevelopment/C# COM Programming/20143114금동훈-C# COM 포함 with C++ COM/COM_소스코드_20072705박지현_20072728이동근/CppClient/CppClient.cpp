// CppClient.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "iostream"
#include "objBase.h"
#include "conio.h"
#import "..\DDMulDiv\bin\Debug\DDMulDiv.tlb" no_namespace

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	::CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);
	IDDMulDivPtr pMulDiv(__uuidof(DDMulDiv));

	cout << "4 + 4 = " << pMulDiv->Add(4, 4) << endl;

	cout << "16 - 8 = " << pMulDiv->Sub(16, 8) << endl;

	cout << "2 * 4 = " << pMulDiv->Mul(2, 4) << endl;

	cout << "32 / 4 = " << pMulDiv->Div(32, 4) << endl;

	getch();
	return 0;
}

