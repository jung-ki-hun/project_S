// vcClientDlg.cpp : implementation file
//

#include "stdafx.h"
#include "vcClient.h"
#include "vcClientDlg.h"

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
// CVcClientDlg dialog

CVcClientDlg::CVcClientDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CVcClientDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CVcClientDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

CVcClientDlg::~CVcClientDlg()
{
	m_pCompany = 0;
	m_pEmployees = 0;
}
void CVcClientDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CVcClientDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CVcClientDlg, CDialog)
	//{{AFX_MSG_MAP(CVcClientDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_COUNT, OnCount)
	ON_BN_CLICKED(IDC_ENUM, OnEnum)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CVcClientDlg message handlers

BOOL CVcClientDlg::OnInitDialog()
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
	m_pCompany = new ICompanyPtr(__uuidof(Company));
	m_pEmployees = m_pCompany->Employees;
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CVcClientDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CVcClientDlg::OnPaint() 
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
HCURSOR CVcClientDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CVcClientDlg::OnCount() 
{
	// TODO: Add your control notification handler code here
	IEmployeePtr pEmployee;
	_bstr_t name;
	_bstr_t address;
	_bstr_t telephone;
	CString str;
	
	for(int i = 0; i < m_pEmployees->Count; ++i) {
		pEmployee = m_pEmployees->Item[i+1];
		name = pEmployee->Name;
		address = pEmployee->Address;
		telephone = pEmployee->Telephone;
		str.Format("�̸� : %s\n�ּ� : %s\n��ȭ��ȣ : %s",
					(char*)name, (char*)address, (char*)telephone);
		AfxMessageBox(str);
		pEmployee = 0;
	}
}

void CVcClientDlg::OnEnum() 
{
	// TODO: Add your control notification handler code here
	IEmployeePtr pEmployee;
	IEnumVARIANTPtr pEnum;
	_bstr_t name;
	_bstr_t address;
	_bstr_t telephone;
	VARIANT var[10];
	ULONG count, i;
	CString str;
	
	pEnum = m_pEmployees->_NewEnum;
	for(i = 0; i < 10; ++i)
		VariantInit(&var[i]);
	pEnum->Next(10, var, &count);

	for(i = 0; i < count; ++i) {
		pEmployee = var[i].punkVal;
		name = pEmployee->Name;
		address = pEmployee->Address;
		telephone = pEmployee->Telephone;
		str.Format("�̸� : %s\n�ּ� : %s\n��ȭ��ȣ : %s",
					(char*)name, (char*)address, (char*)telephone);
		AfxMessageBox(str);
		pEmployee = 0;
	}
}
