//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit32.h"
#include "Unit33.h"
#include "Unit37.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tsixeenth *sixeenth;
//---------------------------------------------------------------------------
__fastcall Tsixeenth::Tsixeenth(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall Tsixeenth::Button1Click(TObject *Sender)
{
        TrophyPhaseScore->BitBtn1->Caption = sixeenth->Label1->Caption;
        TrophyPhaseScore->BitBtn2->Caption = sixeenth->Label2->Caption;
        TrophyPhaseScore->ShowModal();
        if(TrophyPhaseScore->ModalResult == mrOk){
                QuarterFinal->Label1->Caption = sixeenth->Label1->Caption;
        }else if(TrophyPhaseScore->ModalResult == mrCancel){
                QuarterFinal->Label1->Caption = sixeenth->Label2->Caption;
        }
        Button1->Enabled = false;
        TrophyPhaseScore->BitBtn1->Caption = "";
        TrophyPhaseScore->BitBtn2->Caption = "";
        if(Button1->Enabled == false && Button2->Enabled == false && Button3->Enabled == false && Button4->Enabled == false && Button5->Enabled == false && Button6->Enabled == false && Button7->Enabled == false && Button8->Enabled == false){
                Button9->Enabled = true;
                Button9->Visible = true;
        }
}
//---------------------------------------------------------------------------

void __fastcall Tsixeenth::Button2Click(TObject *Sender)
{
        TrophyPhaseScore->BitBtn1->Caption = sixeenth->Label3->Caption;
        TrophyPhaseScore->BitBtn2->Caption = sixeenth->Label4->Caption;
        TrophyPhaseScore->ShowModal();
        if(TrophyPhaseScore->ModalResult == mrOk){
                QuarterFinal->Label2->Caption = sixeenth->Label3->Caption;
        }else if(TrophyPhaseScore->ModalResult == mrCancel){
                QuarterFinal->Label2->Caption = sixeenth->Label4->Caption;
        }
        Button2->Enabled = false;
        TrophyPhaseScore->BitBtn1->Caption = "";
        TrophyPhaseScore->BitBtn2->Caption = "";
        if(Button1->Enabled == false && Button2->Enabled == false && Button3->Enabled == false && Button4->Enabled == false && Button5->Enabled == false && Button6->Enabled == false && Button7->Enabled == false && Button8->Enabled == false){
                Button9->Enabled = true;
                Button9->Visible = true;
        }
}
//---------------------------------------------------------------------------


void __fastcall Tsixeenth::Button3Click(TObject *Sender)
{
        TrophyPhaseScore->BitBtn1->Caption = sixeenth->Label5->Caption;
        TrophyPhaseScore->BitBtn2->Caption = sixeenth->Label6->Caption;
        TrophyPhaseScore->ShowModal();
        if(TrophyPhaseScore->ModalResult == mrOk){
                QuarterFinal->Label3->Caption = sixeenth->Label5->Caption;
        }else if(TrophyPhaseScore->ModalResult == mrCancel){
                QuarterFinal->Label3->Caption = sixeenth->Label6->Caption;
        }
        Button3->Enabled = false;
        TrophyPhaseScore->BitBtn1->Caption = "";
        TrophyPhaseScore->BitBtn2->Caption = "";
        if(Button1->Enabled == false && Button2->Enabled == false && Button3->Enabled == false && Button4->Enabled == false && Button5->Enabled == false && Button6->Enabled == false && Button7->Enabled == false && Button8->Enabled == false){
                Button9->Enabled = true;
                Button9->Visible = true;
        }
}
//---------------------------------------------------------------------------

void __fastcall Tsixeenth::Button4Click(TObject *Sender)
{
        TrophyPhaseScore->BitBtn1->Caption = sixeenth->Label7->Caption;
        TrophyPhaseScore->BitBtn2->Caption = sixeenth->Label8->Caption;
        TrophyPhaseScore->ShowModal();
        if(TrophyPhaseScore->ModalResult == mrOk){
                QuarterFinal->Label4->Caption = sixeenth->Label7->Caption;
        }else if(TrophyPhaseScore->ModalResult == mrCancel){
                QuarterFinal->Label4->Caption = sixeenth->Label8->Caption;
        }
        Button4->Enabled = false;
        TrophyPhaseScore->BitBtn1->Caption = "";
        TrophyPhaseScore->BitBtn2->Caption = "";
        if(Button1->Enabled == false && Button2->Enabled == false && Button3->Enabled == false && Button4->Enabled == false && Button5->Enabled == false && Button6->Enabled == false && Button7->Enabled == false && Button8->Enabled == false){
                Button9->Enabled = true;
                Button9->Visible = true;
        }
}
//---------------------------------------------------------------------------

void __fastcall Tsixeenth::Button5Click(TObject *Sender)
{
        TrophyPhaseScore->BitBtn1->Caption = sixeenth->Label9->Caption;
        TrophyPhaseScore->BitBtn2->Caption = sixeenth->Label10->Caption;
        TrophyPhaseScore->ShowModal();
        if(TrophyPhaseScore->ModalResult == mrOk){
                QuarterFinal->Label5->Caption = sixeenth->Label9->Caption;
        }else if(TrophyPhaseScore->ModalResult == mrCancel){
                QuarterFinal->Label5->Caption = sixeenth->Label10->Caption;
        }
        Button5->Enabled = false;
        TrophyPhaseScore->BitBtn1->Caption = "";
        TrophyPhaseScore->BitBtn2->Caption = "";
        if(Button1->Enabled == false && Button2->Enabled == false && Button3->Enabled == false && Button4->Enabled == false && Button5->Enabled == false && Button6->Enabled == false && Button7->Enabled == false && Button8->Enabled == false){
                Button9->Enabled = true;
                Button9->Visible = true;
        }
}
//---------------------------------------------------------------------------

void __fastcall Tsixeenth::Button6Click(TObject *Sender)
{
        TrophyPhaseScore->BitBtn1->Caption = sixeenth->Label11->Caption;
        TrophyPhaseScore->BitBtn2->Caption = sixeenth->Label12->Caption;
        TrophyPhaseScore->ShowModal();
        if(TrophyPhaseScore->ModalResult == mrOk){
                QuarterFinal->Label6->Caption = sixeenth->Label11->Caption;
        }else if(TrophyPhaseScore->ModalResult == mrCancel){
                QuarterFinal->Label6->Caption = sixeenth->Label12->Caption;
        }
        Button6->Enabled = false;
        TrophyPhaseScore->BitBtn1->Caption = "";
        TrophyPhaseScore->BitBtn2->Caption = "";
        if(Button1->Enabled == false && Button2->Enabled == false && Button3->Enabled == false && Button4->Enabled == false && Button5->Enabled == false && Button6->Enabled == false && Button7->Enabled == false && Button8->Enabled == false){
                Button9->Enabled = true;
                Button9->Visible = true;
        }
}
//---------------------------------------------------------------------------

void __fastcall Tsixeenth::Button7Click(TObject *Sender)
{
        TrophyPhaseScore->BitBtn1->Caption = sixeenth->Label13->Caption;
        TrophyPhaseScore->BitBtn2->Caption = sixeenth->Label14->Caption;
        TrophyPhaseScore->ShowModal();
        if(TrophyPhaseScore->ModalResult == mrOk){
                QuarterFinal->Label7->Caption = sixeenth->Label13->Caption;
        }else if(TrophyPhaseScore->ModalResult == mrCancel){
                QuarterFinal->Label7->Caption = sixeenth->Label14->Caption;
        }
        Button7->Enabled = false;
        TrophyPhaseScore->BitBtn1->Caption = "";
        TrophyPhaseScore->BitBtn2->Caption = "";
        if(Button1->Enabled == false && Button2->Enabled == false && Button3->Enabled == false && Button4->Enabled == false && Button5->Enabled == false && Button6->Enabled == false && Button7->Enabled == false && Button8->Enabled == false){
                Button9->Enabled = true;
                Button9->Visible = true;
        }
}
//---------------------------------------------------------------------------

void __fastcall Tsixeenth::Button8Click(TObject *Sender)
{
        TrophyPhaseScore->BitBtn1->Caption = sixeenth->Label15->Caption;
        TrophyPhaseScore->BitBtn2->Caption = sixeenth->Label16->Caption;
        TrophyPhaseScore->ShowModal();
        if(TrophyPhaseScore->ModalResult == mrOk){
                QuarterFinal->Label8->Caption = sixeenth->Label15->Caption;
        }else if(TrophyPhaseScore->ModalResult == mrCancel){
                QuarterFinal->Label8->Caption = sixeenth->Label16->Caption;
        }
        Button8->Enabled = false;
        TrophyPhaseScore->BitBtn1->Caption = "";
        TrophyPhaseScore->BitBtn2->Caption = "";
        if(Button1->Enabled == false && Button2->Enabled == false && Button3->Enabled == false && Button4->Enabled == false && Button5->Enabled == false && Button6->Enabled == false && Button7->Enabled == false && Button8->Enabled == false){
                Button9->Enabled = true;
                Button9->Visible = true;
        }
}
//---------------------------------------------------------------------------

void __fastcall Tsixeenth::Button9Click(TObject *Sender)
{
        Close();
        QuarterFinal->Show();        
}
//---------------------------------------------------------------------------

