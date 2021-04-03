#include "stdafx.h"
#import "..\SetGetServer\SetGetServer.tlb" no_namespace

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	::CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);
	
	int data;
	
	try {
		ISetGetPtr pISetGet(__uuidof(SetGet));
		pISetGet->Get(&data);
		cout << data << endl;

	}
	catch(_com_error& e) {
		cout << e.ErrorMessage() << endl;
	}

	::CoUninitialize();

	return 0;
}

