// Graph.cpp : implementation file
//

#include "stdafx.h"
#include "skk.h"
#include "Graph.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CGraph

IMPLEMENT_SERIAL(CGraph, CCmdTarget, 1)


CGraph::CGraph()
{
	m_pt[0]=CPoint(5,6);
	m_pt[1]=CPoint(30,20);
	m_pt[2]=CPoint(10,15);
	m_pt[3]=CPoint(5,30);
	m_nSize=5;
	m_nShape=1;
}

CGraph::~CGraph()
{
}


BEGIN_MESSAGE_MAP(CGraph, CCmdTarget)
	//{{AFX_MSG_MAP(CGraph)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CGraph message handlers
void CGraph::Display(CRect area, CDC* pDC)
{
   ASSERT(pDC);
	CBrush brush,*pOldBrush;
	brush.CreateSolidBrush(RGB(255,0,0));
	pOldBrush = (CBrush *)pDC->SelectObject(&brush);

   // Save away the graph area
	for(int i=0; i<4; i++)
		if(m_nShape)
			pDC->Rectangle(m_pt[i].x-m_nSize, m_pt[i].y-m_nSize,
						m_pt[i].x+m_nSize, m_pt[i].y+m_nSize);
		else
			pDC->Ellipse(m_pt[i].x-m_nSize, m_pt[i].y-m_nSize,
						m_pt[i].x+m_nSize, m_pt[i].y+m_nSize);

	pDC->SelectObject(pOldBrush);
}

void CGraph::Serialize(CArchive& ca)
{
   // Store the miscellaneous data...
   if (ca.IsStoring())
   {
		ca << m_nShape;
		for(int i=0; i<4; i++)
			ca << m_pt[i] ;
   }
   else
   {
		ca >> m_nShape;
		for(int i=0; i<4; i++)
			ca >> m_pt[i] ;
   }

}
