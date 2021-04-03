// ATLSansuClient.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "wctype.h"
#include "locale.h"
//#import "progid:ATLSansuServer.ATLSansu.1" no_namespace
#import "C:\Temp\IATLSansu-2015��\ATLSansuServer\ATLSansuServer\Debug\ATLSansuServer.tlb" no_namespace

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
