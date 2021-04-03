// MyMulDivClient.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

#import "..\..\MyMul\Debug\MyMul.tlb" no_namespace

int _tmain(int argc, _TCHAR* argv[])
{
    ::CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);

    // IMyMulDiv

    IMyMulPtr pMyMulDiv(__uuidof(MyMul));

    int result;

    pMyMulDiv->Mul(4, 2, &result);
    cout << result << endl;

    // IMyAddSub

    ISansuPtr pMyAddSub(__uuidof(MyMul));   
    cout << pMyAddSub->Add(2, 5) << endl;


	return 0;
}

