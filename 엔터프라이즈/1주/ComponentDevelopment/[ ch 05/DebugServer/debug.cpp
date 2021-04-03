#include "stdafx.h"

bool first=FALSE;
HANDLE hOut;

void debug(char *caption)
{
	if(!initialize()) return;

	char buf[128];
	DWORD sz;
	wsprintf(buf, "%s\n", caption);
	WriteFile(hOut, buf, strlen( buf), &sz, NULL);
}


void debug(char *caption, int data)
{
	if(!initialize()) return;

	char buf[128];
	DWORD sz;
	wsprintf(buf, "%s = %20d\n", caption, data);
	WriteFile(hOut, buf, strlen( buf), &sz, NULL);
}

// MFC application ������ CWinApp class ���� ȣ��
/*
	#include "debug.h"
	int CSwjooApp::ExitInstance() 
	{
		// TODO: Add your specialized code here and/or call the base class
		debugend();
		return CWinApp::ExitInstance();
	}
*/

//Window Application ���� ����Ҷ��� 
// C:\Skk Education\Study-Lang\WINAPI\API�� ���� Windows ������ ����\
// 7��\GuiWithConsoleOutput  �� project ����

void debugend()
{
	FreeConsole();
}

BOOL initialize()
{
	if(!first)
	{
		first=TRUE;
		if( !AllocConsole())return FALSE;
		else
		{
			hOut = CreateFile( "CONOUT$", GENERIC_READ | GENERIC_WRITE,
							FILE_SHARE_READ | FILE_SHARE_WRITE,
							NULL, OPEN_EXISTING, 0, 0);
			if( hOut != INVALID_HANDLE_VALUE)
			{
				SetConsoleCtrlHandler( 
					(PHANDLER_ROUTINE) CtrlHandler,  // handler function 
						TRUE);     
				return TRUE;

			}
			else
			{
				MessageBox( NULL, "Console Creationg Failed", "Error",
						MB_OK | MB_ICONEXCLAMATION);
				return FALSE;
			}
		}
	}
	return TRUE;
}

// Console â���� ������ �ص� �θ� ���μ����� ���� �׾������. 
// �׸��� Error Message �� ����.
// Error Message â���̶� ���ֺ���. 
BOOL CtrlHandler(DWORD fdwCtrlType) 
{ 
    switch (fdwCtrlType) 
    { 
        // Handle the CTRL+C signal. 
 
        case CTRL_C_EVENT: 
 
			// CTRL+CLOSE: confirm that the user wants to exit. 
		case CTRL_CLOSE_EVENT: 
		//	CloseHandle( hOut);
		//	TerminateProcess(GetCurrentProcess(), 0);
			//FreeConsole();
            return TRUE; 
 
        default: 
 
            return FALSE; 
    } 
} 
