// PibadaDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Pibada.h"
#include "PibadaDlg.h"

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
// CPibadaDlg dialog

CPibadaDlg::CPibadaDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CPibadaDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CPibadaDlg)
	m_strCurrentVersion = _T("");
	m_nYear = 0;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CPibadaDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CPibadaDlg)
	DDX_Text(pDX, IDC_EDIT1, m_strCurrentVersion);
	DDX_Text(pDX, IDC_EDIT2, m_nYear);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CPibadaDlg, CDialog)
	//{{AFX_MSG_MAP(CPibadaDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CPibadaDlg message handlers

BOOL CPibadaDlg::OnInitDialog()
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
	GetInfo();
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CPibadaDlg::GetInfo()
{
	HKEY hKey=HKEY_LOCAL_MACHINE;
	HKEY hOpenedRootKey, hOpenedChildKey;
	const char *lpszSubKey="SOFTWARE\\Pibada Soft";
	const char *lpszSubSubKey="GinGaMinGa";

	const char *lpszValueName="CurrentVersion";
	char Buffer[20];
	DWORD dwSize=20;

	const char *lpszValueName2="Year";
	DWORD dwSize2=sizeof (DWORD);
	DWORD dwData;




	if( ::RegOpenKeyEx( hKey, lpszSubKey, 0, KEY_ALL_ACCESS, 
			&hOpenedRootKey ) == ERROR_SUCCESS )
	{
		if( ::RegOpenKeyEx( hOpenedRootKey, lpszSubSubKey, 0, KEY_ALL_ACCESS, 
			&hOpenedChildKey ) == ERROR_SUCCESS )
		{
			if( ( ::RegQueryValueEx( hOpenedChildKey, lpszValueName, 
					NULL, NULL, (unsigned char *) Buffer, &dwSize ) == ERROR_SUCCESS)
				&&
				( ::RegQueryValueEx( hOpenedChildKey, lpszValueName2, 
					NULL, NULL, (unsigned char *) &dwData, &dwSize2 ) == ERROR_SUCCESS))

			{
				m_strCurrentVersion=(CString) Buffer;
				m_nYear=(long) dwData;
				UpdateData(FALSE);
				::RegCloseKey( hOpenedChildKey );
				::RegCloseKey( hOpenedRootKey );
			}
		}
	}
}


void CPibadaDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CPibadaDlg::OnPaint() 
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
HCURSOR CPibadaDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}


