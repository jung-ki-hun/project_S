// dllmain.cpp : DllMain이 구현된 것입니다.

#include "stdafx.h"
#include "resource.h"
#include "CSyhStat_i.h"
#include "dllmain.h"

CCSyhStatModule _AtlModule;

// DLL 진입점입니다.
extern "C" BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	hInstance;
	return _AtlModule.DllMain(dwReason, lpReserved); 
}
