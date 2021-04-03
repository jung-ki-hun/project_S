// Graph.cpp : implementation file
//

#include "stdafx.h"
#include <math.h>

#include "GraphSrv.h"
#include <fstream.h>
#include "Graph.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CGraph

IMPLEMENT_SERIAL(CGraph, CCmdTarget, 1)
IMPLEMENT_SERIAL(CDatum, CObject, 1)

CGraph* CGraph::nullObj = NULL;

COLORREF CGraph::barColor[NCOL] =
{
   RGB(127,127,127),  // Dark Grey
   RGB(255,  0,  0),  // Red
   RGB(  0,255,  0),  // Green
   RGB(  0,  0,255),  // Blue
   RGB(255,255,  0),  // Yellow
};

CGraph::CGraph()
{
   Init();
}

CGraph::CGraph(const CString& s)
{
   Init();
   m_sTitle = s;
}

CGraph::~CGraph()
{
   // Clear the data out of the list
   while (!m_data.IsEmpty())
      delete m_data.RemoveHead();
}

void CGraph::Init()
{
   m_type = BAR;
   m_frame = AXIS;
   m_YLines = 4;        // Arbitrary choice of four Y-axis lines
   m_bYLines = TRUE;
   m_sTitle = "";

   nMaxVal = -32000;    // Large -ve value for initial comparison
   m_sum = 0.0;
}

void CGraph::Clear()
{
   // Clear the data out of the list
   while (!m_data.IsEmpty())
      delete m_data.RemoveHead();

   Init();
}

// Add a data item to the dataset for this graph.
void CGraph::Add(const char* n, int d)
{
   CDatum* pd = new CDatum;
   ASSERT(pd);

   pd->value = d;
   strcpy(pd->name, n);

   m_data.AddTail(pd);

   // Reset and max value
   if (d > nMaxVal) nMaxVal = d;
}

// Public function which clients call to display a graph
void CGraph::Display(CRect area, CDC* pDC)
{
   ASSERT(pDC);

   // Save away the graph area
   m_rcCli = area;

   CPoint ptCenter( (m_rcCli.left + (m_rcCli.right-m_rcCli.left) / 2),
                    (m_rcCli.top + (m_rcCli.bottom-m_rcCli.top) / 2) );

   // Set the bounding rectangle for the graph
   m_rcBnd.left = m_rcCli.left + (m_rcCli.right-m_rcCli.left) / 6;
   m_rcBnd.top = m_rcCli.top + (m_rcCli.bottom-m_rcCli.top) / 6;
   m_rcBnd.right = m_rcCli.left + 5*(m_rcCli.right-m_rcCli.left) / 6;
   m_rcBnd.bottom = m_rcCli.top + 5*(m_rcCli.bottom-m_rcCli.top) / 6;

   // Plot the title at the top of the window
   pDC->SetTextAlign(TA_CENTER);
   pDC->TextOut(ptCenter.x, m_rcCli.top+10, m_sTitle);

   switch (m_type)
   {
   case BAR:
      DrawBar(pDC);
      break;
   case PIE:
      DrawPie(pDC);
      break;
   case LINE:
      DrawLine(pDC);
      break;
   default:
      AfxMessageBox("Bad graph type in CGraph::Display");
      ASSERT(0);
   }
}

void CGraph::DrawBar(CDC* pDC)
{
   ASSERT(pDC);

   DrawFrame(pDC);

   if (m_data.GetCount() == 0)
      return;      // nothing to do

   DrawYGrid(pDC);

   // Calculate the gap between bars. Each bar is 2*gap in width
   int nInt = 3*m_data.GetCount() + 1;
   int gap = (m_rcBnd.right - m_rcBnd.left) / nInt;

   // Calculate the scale factor for the bars
   double scale = double(m_rcBnd.bottom - m_rcBnd.top) / nYMax;

   // Draw bars
   POSITION pos;
   int i = 0;

   for (pos = m_data.GetHeadPosition(); pos != NULL;)
   {
      CDatum* pd = (CDatum*)m_data.GetNext(pos);
      ASSERT(pd);
      int height = (int)(pd->value * scale);

      CBrush cb(barColor[i%NCOL]);
      CBrush* pOldBrush = pDC->SelectObject(&cb);

      pDC->Rectangle( m_rcBnd.left + (i+1)*gap + i*(2*gap),
                      m_rcBnd.bottom - height,
                      m_rcBnd.left + (i+1)*gap + (i+1)*(2*gap),
                      m_rcBnd.bottom );

      i++;
      pDC->SelectObject(pOldBrush);
   }
}

void CGraph::DrawFrame(CDC* pDC)
{
   ASSERT(pDC);

   if (m_frame == NONE)
      return;

   CPen axisPen(PS_SOLID, 1, RGB(0,0,0));
   CPen* pOldPen = pDC->SelectObject(&axisPen);

   if (m_frame == AXIS)
   {
      // Draw 'axis' lines on the bounding rect
      pDC->MoveTo(m_rcBnd.left, m_rcBnd.top);
      pDC->LineTo(m_rcBnd.left, m_rcBnd.bottom);
      pDC->LineTo(m_rcBnd.right, m_rcBnd.bottom);
   }

   if (m_frame == FULL)
   {
      pDC->Rectangle(&m_rcBnd);
   }

   pDC->SelectObject(pOldPen);
}

void CGraph::DrawYGrid(CDC* pDC)
{
   ASSERT(pDC);

   // Check whether we're supposed to be drawing lines
   if (!m_bYLines)
      return;

   // Find the max value for the Y axis, based on the number of Y lines.
   nYMax = nMaxVal;
   while ((nYMax % m_YLines) != 0)
      nYMax++;

   int nYinc = nYMax / m_YLines;
   int nYoffset = (m_rcBnd.bottom - m_rcBnd.top) / m_YLines;

   // Draw the lines
   pDC->SetTextAlign(TA_RIGHT | TA_BASELINE);
   for (int i=0; i<m_YLines; i++)
   {
      char buff[6];
      pDC->MoveTo(m_rcBnd.left-3, m_rcBnd.top+i*nYoffset);
      pDC->LineTo(m_rcBnd.right, m_rcBnd.top+i*nYoffset);

      sprintf(buff, "%d", nYinc*(m_YLines-i));
      pDC->TextOut(m_rcBnd.left-6, m_rcBnd.top+i*nYoffset, buff, strlen(buff));
   }
}

void CGraph::DrawLine(CDC* pDC)
{
   ASSERT(pDC);

   DrawFrame(pDC);

   if (m_data.GetCount() == 0)
      return;      // nothing to do

   DrawYGrid(pDC);

   // Calculate the gap between points.
   int nInt = m_data.GetCount() + 1;
   int gap = (m_rcBnd.right - m_rcBnd.left) / nInt;

   // Calculate the scale factor for the lines
   double scale = double(m_rcBnd.bottom - m_rcBnd.top) / nYMax;

   // Draw lines
   POSITION pos;
   POSITION lastPos = NULL;
   int i = 0;
   CDatum* pPrev = NULL;

   for (pos = m_data.GetHeadPosition(); pos != NULL;)
   {
      CDatum* pd = (CDatum*)m_data.GetNext(pos);
      ASSERT(pd);

      int height = (int)(pd->value * scale);

      // If there was a previous point, draw from it to this one
      if (pPrev)
      {
         int prevHeight = (int)(pPrev->value * scale);
         pDC->MoveTo(m_rcBnd.left+i*gap, m_rcBnd.bottom-prevHeight);
         pDC->LineTo(m_rcBnd.left+(i+1)*gap, m_rcBnd.bottom-height);
      }

      i++;
      pPrev = pd;
   }
}

void CGraph::DrawPie(CDC* pDC)
{
   ASSERT(pDC);

   // Sanity check - if the data total is zero, we can't plot
   if (Total() == 0)
   {
      AfxMessageBox("Error: data sum is zero - cannot plot");
      return;
   }

   // Calculate the radius
   int radius = min((m_rcCli.bottom-m_rcCli.top)/4,
                    (m_rcCli.right-m_rcCli.left)/4);

   // Set up the offsets
   nXoff = m_rcCli.left + (m_rcCli.right-m_rcCli.left)/4 + 10;
   nYoff = m_rcCli.top + (m_rcCli.bottom-m_rcCli.top)/2;

   // Display pie slices
   m_sum = 0.0;
   POSITION pos;
   pDC->SetTextAlign(TA_LEFT);
   int i = 0;
   int nColor;

   for (pos = m_data.GetHeadPosition(); pos != NULL;)
   {
      CDatum* pd = (CDatum*)m_data.GetNext(pos);
      ASSERT(pd);

      nColor = i%NCOL;

      // Draw the pie slice
      PieSlice(pDC, pd->value, radius, nColor);

      // And the key entry
      CBrush cb(barColor[nColor]);
      CBrush* pOldBrush = pDC->SelectObject(&cb);

      int xpos = m_rcCli.left + (int)((m_rcCli.right-m_rcCli.left)*0.65);
      int ypos = m_rcCli.top + (m_rcCli.bottom-m_rcCli.top)/4+i*20;
      pDC->Rectangle(xpos, ypos, xpos+15, ypos+15);
      pDC->TextOut(xpos+20, ypos, pd->name, strlen(pd->name));

      i++;
      pDC->SelectObject(pOldBrush);
   }
}

int CGraph::Total()
{
   int nTot = 0;

   // Generate and return dataset total
   POSITION pos;

   for (pos = m_data.GetHeadPosition(); pos != NULL;)
   {
      CDatum* pd = (CDatum*)m_data.GetNext(pos);
      nTot += pd->value;
   }

   return nTot;
}

void CGraph::PieSlice(CDC* pDC, int val, int radius, int nColor)
{
   ASSERT(pDC);

   double dPercent = (double)val * 100 / Total();

   // Do plotting
   int startX, startY, endX, endY;
   double PI = 3.1415927;

   startX = (int)(radius * cos(2*PI*m_sum/100.0));
   startY = (int)(-radius * sin(2*PI*m_sum/100.0));
   endX = (int)(radius * cos(2*PI*(m_sum + dPercent)/100.0));
   endY = (int)(-radius * sin(2*PI*(m_sum + dPercent)/100.0));

   // Add offsets for start and end of arc
   startX += nXoff;
   startY += nYoff;
   endX   += nXoff;
   endY   += nYoff;

   // Calculate bounding box corners
   int X1 = nXoff - radius;
   int Y1 = nYoff - radius;
   int X2 = nXoff + radius;
   int Y2 = nYoff + radius;

   CBrush cb(barColor[nColor]);
   CBrush* pOldBrush = pDC->SelectObject(&cb);

   pDC->Pie(X1, Y1, X2, Y2, startX, startY, endX, endY);

   // Increment the sum
   m_sum += dPercent;

   pDC->SelectObject(pOldBrush);
}

void CGraph::Export(ofstream& os)
{
   os << m_sTitle << endl;
   os << m_data.GetCount() << endl;
   os << nMaxVal << endl;

   POSITION pos;

   for (pos = m_data.GetHeadPosition(); pos != NULL;)
   {
      CDatum* pd = (CDatum*)m_data.GetNext(pos);
      ASSERT(pd);
      os << pd->name << "  " << pd->value << endl;
   }
}

void CGraph::Import(ifstream& is)
{
   // Clear everything out before we start...
   Clear();

   char buff[80];
   is.getline(buff, sizeof buff);
   m_sTitle = buff;

   int nCount;
   is >> nCount;
   is >> nMaxVal;

   int i, value;
   for (i=0; i<nCount; i++)
   {
      is >> buff >> value;
      Add(buff, value);
   }
}

BOOL CGraph::GetItem(int index, char* name, int* value)
{
   ASSERT(name);
   ASSERT(value);

   if (index < 0 || index > m_data.GetCount()-1)
   {
      name[0] = '\0';
      *value = 0;
      return FALSE;
   }

   POSITION pos = m_data.FindIndex(index);
   if (pos == NULL)
      return FALSE;

   CDatum* pd = (CDatum*)m_data.GetAt(pos);
   ASSERT(pd);
   strcpy(name, pd->name);
   *value = pd->value;
   return TRUE;
}

BOOL CGraph::SetItem(int index, char* name, int value)
{
   ASSERT(name);
   if (index < 0 || index > m_data.GetCount()-1)
      return FALSE;

   POSITION pos = m_data.FindIndex(index);
   if (pos == NULL)
      return FALSE;

   CDatum* pd = new CDatum;
   ASSERT(pd);

   // Save the old pointer
   CDatum* pOldElement = (CDatum*)m_data.GetAt(pos);
   ASSERT(pOldElement);

   strcpy(pd->name, name);
   pd->value = value;
   m_data.SetAt(pos, pd);

   // Delete the unwanted element
   delete pOldElement;

   return TRUE;
}

BEGIN_MESSAGE_MAP(CGraph, CCmdTarget)
	//{{AFX_MSG_MAP(CGraph)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CGraph message handlers

/////////////////////////////////////////////////////////////////////////
// Serialization for graph and data objects

void CDatum::Serialize(CArchive& ca)
{
   if (ca.IsStoring())
   {
      ca.Write(name,12);
      ca << (DWORD)value;
   }
   else
   {
      ca.Read(name,12);
      ca >> (DWORD&)value;
   }
}

void CGraph::Serialize(CArchive& ca)
{
   // Store the miscellaneous data...
   if (ca.IsStoring())
   {
      ca << m_sTitle;
      ca << (DWORD)nMaxVal;
      ca << (short)m_type << (short)m_frame;
   }
   else
   {
      ca >> m_sTitle;
      ca >> (DWORD&)nMaxVal;
      ca >> (short&)m_type >> (short&)m_frame;

      // COblist::Serialize() uses AddTail(); clear the data list
      // first or you'll just be adding to it!
      m_data.RemoveAll();
   }

   // ...and get the data list to serialize itself
   m_data.Serialize(ca);
}
