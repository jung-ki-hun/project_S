// EditDlg.cpp : implementation file
//

#include "stdafx.h"
#include "GraphSrv.h"

#include <fstream.h>
#include "Graph.h"

#include "EditDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEditDlg dialog


CEditDlg::CEditDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CEditDlg::IDD, pParent)
{
    m_pGraph = NULL;
    m_lastSel1 = -1;
    m_lastSel2 = -1;

    //{{AFX_DATA_INIT(CEditDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CEditDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CEditDlg)
	DDX_Control(pDX, IDC_COMBO2, m_combo2);
	DDX_Control(pDX, IDC_COMBO1, m_combo1);
	//}}AFX_DATA_MAP
}

void CEditDlg::SetGraph(CGraph* pG)
{
   ASSERT(pG);
   m_pGraph = pG;
}

BEGIN_MESSAGE_MAP(CEditDlg, CDialog)
	//{{AFX_MSG_MAP(CEditDlg)
	ON_CBN_SELCHANGE(IDC_COMBO1, OnSelchangeCombo1)
	ON_CBN_SELCHANGE(IDC_COMBO2, OnSelchangeCombo2)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEditDlg message handlers

BOOL CEditDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
   // Add the data set to the combo box.
   if (m_pGraph)
   {
      int nItems = m_pGraph->Size();
      for (int i=0; i<nItems; i++)
      {
         char name[20];
         int val;

         BOOL bOK = m_pGraph->GetItem(i, name, &val);
         if (bOK)
         {
            char strVal[20];
            itoa(val, strVal, 10);
            m_combo1.AddString(name);      // add the name
            m_combo2.AddString(strVal);    // and the value
         }
      }
   }
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CEditDlg::OnSelchangeCombo1() 
{
   // In the case of a new selection, if there was a previous selection,
   // replace it with the contents of the edit control.

   // Get the edit control associated with the combo box. All CComboBox
   // controls use an ID of 1001 for the edit control, so that's easy!
   CEdit* pEdit1 = (CEdit*)m_combo1.GetDlgItem(1001);
   ASSERT(pEdit1);

   if (m_lastSel1 != -1)
   {
      // Get the text out of the edit control
      CString cs1;
      pEdit1->GetWindowText(cs1);

      // Put it into the last selected position
      m_combo1.DeleteString(m_lastSel1);
      m_combo1.InsertString(m_lastSel1,cs1);
   }

   // Reset the last position
   m_lastSel1 = m_combo1.GetCurSel();
}

void CEditDlg::OnSelchangeCombo2() 
{
   // In the case of a new selection, if there was a previous selection,
   // replace it with the contents of the edit control.

   // Get the edit control associated with the combo box. All CComboBox
   // controls use an ID of 1001 for the edit control, so that's easy!
   CEdit* pEdit2 = (CEdit*)m_combo2.GetDlgItem(1001);
   ASSERT(pEdit2);

   if (m_lastSel2 != -1)
   {
      // Get the text out of the edit control
      CString cs2;
      pEdit2->GetWindowText(cs2);

      // Put it into the last selected position
      m_combo2.DeleteString(m_lastSel2);
      m_combo2.InsertString(m_lastSel2,cs2);
   }

   // Reset the last position
   m_lastSel2 = m_combo2.GetCurSel();
}

void CEditDlg::OnOK() 
{
   // When the user clicks the OK button, we need to rebuild the graph
   // dataset from what's in the combo box. First, though, get the data in
   // the edit controls so we're up to date.
   OnSelchangeCombo1();
   OnSelchangeCombo2();

   for (int i=0; i<m_combo1.GetCount(); i++)
   {
      char s1[20], s2[20];
      m_combo1.GetLBText(i, s1);
      m_combo2.GetLBText(i, s2);

      m_pGraph->SetItem(i, s1, atoi(s2));
   }

   // Call the base class function to dismiss the dialog
   CDialog::OnOK();
}
