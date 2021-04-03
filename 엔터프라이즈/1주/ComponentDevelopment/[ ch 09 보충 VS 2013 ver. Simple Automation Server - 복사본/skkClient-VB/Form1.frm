VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   3195
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   4680
   LinkTopic       =   "Form1"
   ScaleHeight     =   3195
   ScaleWidth      =   4680
   StartUpPosition =   3  'Windows ±âº»°ª
   Begin VB.CommandButton Command2 
      Caption         =   "Change Shape"
      Height          =   1215
      Left            =   480
      TabIndex        =   1
      Top             =   1080
      Width           =   1815
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Start Server"
      Height          =   615
      Left            =   480
      TabIndex        =   0
      Top             =   240
      Width           =   1815
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim myGraph As Object

Private Sub Command1_Click()
    Set myGraph = CreateObject("Skk.Document")
    myGraph.ShowApplication
End Sub

Private Sub Command2_Click()
    myGraph.ShapeChange
End Sub
