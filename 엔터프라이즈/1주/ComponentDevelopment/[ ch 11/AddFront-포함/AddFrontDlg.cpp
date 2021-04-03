// AddFrontDlg.cpp : implementation file
//

#include "stdafx.h"
#include "AddFront.h"
#include "AddFrontDlg.h"

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
// CAddFrontDlg dialog

CAddFrontDlg::CAddFrontDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CAddFrontDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CAddFrontDlg)
	m_nAddEnd = 0;
	m_nSum = 0;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CAddFrontDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAddFrontDlg)
	DDX_Text(pDX, IDC_ADDEND, m_nAddEnd);
	DDX_Text(pDX, IDC_SUM, m_nSum);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAddFrontDlg, CDialog)
	//{{AFX_MSG_MAP(CAddFrontDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_ADD, OnAdd)
	ON_BN_CLICKED(IDC_ADDTEN, OnAddten)
	ON_BN_CLICKED(IDC_CLEAR, OnClear)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAddFrontDlg message handlers

BOOL CAddFrontDlg::OnInitDialog()
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
	m_pAddBack = IAddBackPtr(__uuidof(AddBack));
	m_pAddEnd = m_pAddBack;
	//m_pAddBack.QueryInterface(__uuidof(IAddEnd), &m_pAddEnd); //»õ±³Àç p.255
	
	m_nAddEnd = m_pAddEnd->AddEnd;
	m_nSum = m_pAddEnd->Sum;
	UpdateData(FALSE);
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CAddFrontDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CAddFrontDlg::OnPaint() 
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
HCURSOR CAddFrontDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CAddFrontDlg::OnAdd() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	m_pAddEnd->AddEnd = m_nAddEnd;
	m_pAddBack->Add();
	m_nSum = m_pAddEnd->Sum;
	UpdateData(FALSE);
}

void CAddFrontDlg::OnAddten() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
//	m_pAddEnd->AddEnd = m_nAddEnd;
	m_pAddBack->AddTen();
	m_nSum = m_pAddEnd->Sum;
	UpdateData(FALSE);
}

void CAddFrontDlg::OnClear() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
//	m_pAddEnd->AddEnd = m_nAddEnd;
	m_pAddEnd->Clear();
	m_nSum = m_pAddEnd->Sum;
	UpdateData(FALSE);
	
}

CAddFrontDlg::~CAddFrontDlg()
{
	m_pAddEnd = 0;
	m_pAddBack = 0;
}
