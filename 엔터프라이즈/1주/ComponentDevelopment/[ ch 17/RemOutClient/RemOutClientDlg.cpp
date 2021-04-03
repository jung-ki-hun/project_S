// RemOutClientDlg.cpp : implementation file
//

#include "stdafx.h"
#include "RemOutClient.h"
#include "RemOutClientDlg.h"

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
// CRemOutClientDlg dialog

CRemOutClientDlg::CRemOutClientDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CRemOutClientDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CRemOutClientDlg)
	m_nInterfaceType = -1;
	m_nAddEnd = 0;
	m_nSum = 0;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_nInterfaceType = 0;
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CRemOutClientDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CRemOutClientDlg)
	DDX_Radio(pDX, IDC_INTERFACE, m_nInterfaceType);
	DDX_Text(pDX, IDC_ADDEND, m_nAddEnd);
	DDX_Text(pDX, IDC_SUM, m_nSum);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CRemOutClientDlg, CDialog)
	//{{AFX_MSG_MAP(CRemOutClientDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_CREATE, OnCreateServer)
	ON_BN_CLICKED(IDC_RELEASE, OnReleaseServer)
	ON_BN_CLICKED(IDC_ADD, OnAdd)
	ON_BN_CLICKED(IDC_ADDTEN, OnAddten)
	ON_BN_CLICKED(IDC_CLEAR, OnClear)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CRemOutClientDlg message handlers

BOOL CRemOutClientDlg::OnInitDialog()
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

void CRemOutClientDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CRemOutClientDlg::OnPaint() 
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
HCURSOR CRemOutClientDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CRemOutClientDlg::OnCreateServer() 
{
	// TODO: Add your control notification handler code here
	HRESULT hr;

	memset(&svrInfo, 0, sizeof(svrInfo));
	svrInfo.pwszName = L"mtec";

	mqi[0].pIID = &IID_IAddEnd;
	mqi[0].pItf = NULL;
	mqi[0].hr = S_OK;
	mqi[1].pIID = &IID_IAdd;
	mqi[1].pItf = NULL;
	mqi[1].hr = S_OK;

	UpdateData(TRUE);

	try {
		if(m_nInterfaceType == 0) { // �ϳ��� ��û
			m_pAddEnd = IAddEndPtr(__uuidof(RemOutServer));
			m_pAdd = m_pAddEnd;
		}
		else {	// �Ѳ����� ��û
			hr = ::CoCreateInstanceEx(
						__uuidof(RemOutServer),
						NULL,
						CLSCTX_REMOTE_SERVER,
						&svrInfo,
						2,
						&mqi[0]);
			if(FAILED(hr)) {
				_com_issue_error(hr);
			}
			m_pAddEnd = mqi[0].pItf;
			m_pAdd = mqi[1].pItf;
		}
		m_nAddEnd = m_pAddEnd->AddEnd;
		m_nSum = m_pAddEnd->Sum;
	}
	catch(_com_error& e) {
		ShowMessage(e);
	}

	UpdateData(FALSE);
}

void CRemOutClientDlg::OnReleaseServer() 
{
	// TODO: Add your control notification handler code here
	for(int i = 0; i < 2; i++) {
		if(mqi[i].pItf != NULL && SUCCEEDED(mqi[i].hr)) {
			mqi[i].pItf->Release();
			mqi[i].pItf = NULL;
		}
	}
	m_pAddEnd = 0;
	m_pAdd = 0;
}

void CRemOutClientDlg::OnAdd() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	try {
		m_pAddEnd->AddEnd = m_nAddEnd;
		m_pAdd->Add();
		m_nSum = m_pAddEnd->Sum;
	}
	catch(_com_error& e) {
		ShowMessage(e);
	}
	UpdateData(FALSE);
}

void CRemOutClientDlg::OnAddten() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	try {
		m_pAddEnd->AddEnd = m_nAddEnd;
		m_pAdd->AddTen();
		m_nSum = m_pAddEnd->Sum;
	}
	catch(_com_error& e) {
		ShowMessage(e);
	}
	UpdateData(FALSE);
}

void CRemOutClientDlg::OnClear() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	try {
		m_pAddEnd->AddEnd = m_nAddEnd;
		m_pAddEnd->Clear();
		m_nSum = m_pAddEnd->Sum;
	}
	catch(_com_error& e) {
		ShowMessage(e);
	}
	UpdateData(FALSE);
}

void CRemOutClientDlg::ShowMessage(_com_error & e)
{
	_bstr_t bstrSource(e.Source());
	_bstr_t bstrDescription(e.Description());
	CString szMsg = "������ �߻��߽��ϴ�!\n";
	CString szTemp;
		
	szTemp.Format("���� �ڵ� : %081x\n", e.Error());
	szMsg += szTemp;
	szTemp.Format("���� ���� : %s\n", e.ErrorMessage());
	szMsg += szTemp;
	szTemp.Format("���� �ҽ� : %s\n",
		bstrSource.length() ? (LPCTSTR)bstrSource : _T("����"));
	szMsg += szTemp;
	szTemp.Format("���� ���� : %s\n",
		bstrDescription.length() ? (LPCTSTR)bstrDescription : _T("����"));
	szMsg += szTemp;
	AfxMessageBox(szMsg);
}

CRemOutClientDlg::~CRemOutClientDlg()
{
	OnReleaseServer();
}
