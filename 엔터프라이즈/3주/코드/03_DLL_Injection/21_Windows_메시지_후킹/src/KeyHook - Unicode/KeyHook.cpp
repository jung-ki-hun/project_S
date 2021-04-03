#include "stdio.h"
#include "windows.h"
#include <tchar.h>

#define DEF_PROCESS_NAME		TEXT("hwp.exe")

HINSTANCE g_hInstance = NULL;
HHOOK g_hHook = NULL;
HWND g_hWnd = NULL;

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD dwReason, LPVOID lpvReserved)
{
	switch( dwReason )
	{
        case DLL_PROCESS_ATTACH:
			g_hInstance = hinstDLL;
			break;

        case DLL_PROCESS_DETACH:
			break;	
	}

	return TRUE;
}

LRESULT CALLBACK KeyboardProc(int nCode, WPARAM wParam, LPARAM lParam)
{
	TCHAR szPath[MAX_PATH] = {0,};
	TCHAR *p = NULL;

	if( nCode >= 0 )
	{
		// bit 31 : 0 => press, 1 => release
		if( !(lParam & 0x80000000) )
		{
			GetModuleFileName(NULL, szPath, MAX_PATH);
			OutputDebugString(szPath);
			p = _tcsrchr(szPath, TEXT('\\'));

            // ���� ���μ��� �̸��� ���ؼ� ���� notepad.exe ��� 0 �ƴ� ���� ������
            // => 0 �ƴ� ���� �����ϸ� �޽����� �������� ���޵��� ����
			if (!_tcsicmp(p + 1, DEF_PROCESS_NAME))

				return 1;
				//MessageBox(NULL, TEXT("Test"), TEXT("Test"), IDOK); //
		}
		
	}

    // �Ϲ����� ��쿡�� CallNextHookEx() �� ȣ���Ͽ�
    //   �������α׷� (Ȥ�� ���� ��) ���� �޽����� ������
	return CallNextHookEx(g_hHook, nCode, wParam, lParam);
}

#ifdef __cplusplus
extern "C" {
#endif
	__declspec(dllexport) void HookStart()
	{
		g_hHook = SetWindowsHookEx(WH_KEYBOARD, KeyboardProc, g_hInstance, 0);
	}

	__declspec(dllexport) void HookStop()
	{
		if( g_hHook )
		{
			UnhookWindowsHookEx(g_hHook);
			g_hHook = NULL;
		}
	}
#ifdef __cplusplus
}
#endif