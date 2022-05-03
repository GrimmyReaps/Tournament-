//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit3.h"
#include "Unit5.h"
#include "Unit1.h"
#include "Unit11.h"
#include "Unit12.h"
#include "Unit13.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TGroupSetter1 *GroupSetter1;
//---------------------------------------------------------------------------
//Init Globals
//We declare global values
String GroupA[5000];
String GroupB[5000];
String GroupC[2500];
String GroupD[2500];
String GroupE[1250];
String GroupF[1250];
String GroupG[1250];
String GroupH[1250];
int LittleHelper;
int PlayerAmountA;
int PlayerAmountB;
int PlayerAmountC;
int PlayerAmountD;
int PlayerAmountE;
int PlayerAmountF;
int PlayerAmountG;
int PlayerAmountH;
//---------------------------------------------------------------------------
__fastcall TGroupSetter1::TGroupSetter1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TGroupSetter1::Button1Click(TObject *Sender)
{
        if(Group2->Checked == true){
                GroupSetter1->Close();
                GroupSetter2->Show();
                GroupSetter2->Edit1->Text = "";
        }else if(Group4->Checked == true){
                GroupSetter1->Close();
                GroupSetter3->Show();
                GroupSetter3->Edit1->Text = "";
        }else if(Group8->Checked == true){
                GroupSetter1->Close();
                GroupSetter4->Show();
                GroupSetter4->Edit1->Text = "";
        }
}
//---------------------------------------------------------------------------


void __fastcall TGroupSetter1::Button2Click(TObject *Sender)
{
        Close();
        Form1->WindowState = wsNormal;
}
//---------------------------------------------------------------------------

