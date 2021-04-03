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

// MFC application 에서는 CWinApp class 에서 호출
/*
	#include "debug.h"
	int CSwjooApp::ExitInstance() 
	{
		// TODO: Add your specialized code here and/or call the base class
		debugend();
		return CWinApp::ExitInstance();
	}
*/

//Window Application 에서 사용할때는 
// C:\Skk Education\Study-Lang\WINAPI\API로 배우는 Windows 구조와 원리\
// 7장\GuiWithConsoleOutput  의 project 참고

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

// Console 창만을 닫으려 해도 부모 프로세스도 같이 죽어버린다. 
// 그리고 Error Message 를 띄운다.
// Error Message 창만이라도 없애보자. 
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
