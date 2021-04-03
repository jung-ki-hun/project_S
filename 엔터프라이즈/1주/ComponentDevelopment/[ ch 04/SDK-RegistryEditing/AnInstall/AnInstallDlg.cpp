// AnInstallDlg.cpp : implementation file
//

#include "stdafx.h"
#include "AnInstall.h"
#include "AnInstallDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAnInstallDlg dialog

CAnInstallDlg::CAnInstallDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CAnInstallDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CAnInstallDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CAnInstallDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAnInstallDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAnInstallDlg, CDialog)
	//{{AFX_MSG_MAP(CAnInstallDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_INSTALL, OnInstall)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAnInstallDlg message handlers

BOOL CAnInstallDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CAnInstallDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CAnInstallDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CAnInstallDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CAnInstallDlg::OnInstall() 
{
	HKEY hKey=HKEY_LOCAL_MACHINE;
	HKEY hOpenedRootKey, hOpenedChildKey;
	DWORD dwDisposition;
	const char *lpszSubKey="SOFTWARE\\Pibada Soft";
	const char *lpszSubSubKey="GinGaMinGa";

	const char *lpszValueName="CurrentVersion";
	char *lpData="1.0 Beta";

	const char *lpszValueName2="Year";
	DWORD dwData=2001;


	BOOL bRet1 = (::RegCreateKeyEx( hKey, lpszSubKey, 0, 0, 
		REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, 
		NULL, &hOpenedRootKey, &dwDisposition )==ERROR_SUCCESS); 

	if( bRet1 )
	{
		BOOL bRet2 = (::RegCreateKeyEx( hOpenedRootKey, lpszSubSubKey, 0, 0, 
		REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, 
		NULL, &hOpenedChildKey, &dwDisposition )==ERROR_SUCCESS); 

		if( bRet2 )
		{

			::RegSetValueEx( hOpenedChildKey, lpszValueName, 0, 
			REG_SZ, (unsigned char *) lpData, 
			(DWORD)strlen(lpData)+1 ) ;

			::RegSetValueEx( hOpenedChildKey, lpszValueName2, 0, 
			REG_DWORD, (unsigned char *) &dwData, 
			sizeof (DWORD) ) ;


			::RegCloseKey( hOpenedChildKey );

		}		
		::RegCloseKey( hOpenedRootKey );
		AfxMessageBox("Installation Complete", MB_ICONINFORMATION);
	}
}
