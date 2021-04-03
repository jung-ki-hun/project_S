// HelloClient.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "wctype.h"
#include "locale.h"
//#import "progid:HelloServer.Hello.1" no_namespace
#import "..\GetSystem\GetSystem\Debug\GetSystem.tlb" no_namespace

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	::CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);


	//*
	OLECHAR* szName;

	try {		
		VARIANT m_retval;
		DISPID m_dispidGetSystem;
		DISPPARAMS m_dispparams;
		IDispatchPtr m_pDisp;


		m_pDisp = IDispatchPtr(__uuidof(GetSystem));
		szName = L"getSystemBstr";
		m_pDisp->GetIDsOfNames(IID_NULL,
							   &szName,
							   1,
							   LOCALE_SYSTEM_DEFAULT,
							   &m_dispidGetSystem);	
		//printf("%d\n",m_dispidGetSystem);

		VariantInit(&m_retval);
		m_dispparams.rgvarg = NULL;
		m_dispparams.cArgs = 0;
		m_dispparams.rgdispidNamedArgs = NULL;
		m_dispparams.cNamedArgs = 0;


		m_pDisp->Invoke(m_dispidGetSystem,
						IID_NULL,
						LOCALE_SYSTEM_DEFAULT,
						DISPATCH_METHOD,
						&m_dispparams,
						&m_retval,
						NULL, NULL);

		//출력	
		wcout<< m_retval.bstrVal <<endl;

	}
	catch(_com_error& e) {
		cout << e.ErrorMessage() << endl;
	}
	//*/
	try {
		IGetSystemPtr pIGetSystem(__uuidof(GetSystem));

		_wsetlocale(LC_ALL, L"korean");

		BSTR message = pIGetSystem->getSystemBstr();

		wcout<< message << endl;


	}
	catch(_com_error& e) {
		cout << e.ErrorMessage() << endl;
	}

	::CoUninitialize();

	return 0;
}

