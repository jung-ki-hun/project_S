// ATLSansuClient.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "wctype.h"
#include "locale.h"
//#import "progid:ATLSansuServer.ATLSansu.1" no_namespace
#import "C:\Temp\IATLSansu-2015년\ATLSansuServer\ATLSansuServer\Debug\ATLSansuServer.tlb" no_namespace

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	::CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);

	try {
		IATLSansuPtr pATLSansu(__uuidof(ATLSansu));

		_wsetlocale(LC_ALL, L"korean");


		int result;	
		pATLSansu->SansuAdd(4,2,&result);
		cout <<result << endl;
	}
	catch(_com_error& e) {
		cout << e.ErrorMessage() << endl;
	}


	::CoUninitialize();

	return 0;
}
