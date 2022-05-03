//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit33.h"
#include "Unit34.h"
#include "Unit37.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TQuarterFinal *QuarterFinal;
//---------------------------------------------------------------------------
__fastcall TQuarterFinal::TQuarterFinal(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TQuarterFinal::Button1Click(TObject *Sender)
{
        TrophyPhaseScore->BitBtn1->Caption = QuarterFinal->Label1->Caption;
        TrophyPhaseScore->BitBtn2->Caption = QuarterFinal->Label2->Caption;
        TrophyPhaseScore->ShowModal();
        if(TrophyPhaseScore->ModalResult == mrOk){
                SemiFinal->Label1->Caption = QuarterFinal->Label1->Caption;
        }else if(TrophyPhaseScore->ModalResult == mrCancel){
                SemiFinal->Label1->Caption = QuarterFinal->Label2->Caption;
        }
        Button1->Enabled = false;
        TrophyPhaseScore->BitBtn1->Caption = "";
        TrophyPhaseScore->BitBtn2->Caption = "";
        if(Button1->Enabled == false && Button2->Enabled == false && Button3->Enabled == false && Button4->Enabled == false){
                Button9->Enabled = true;
                Button9->Visible = true;
        }
}
//---------------------------------------------------------------------------

void __fastcall TQuarterFinal::Button2Click(TObject *Sender)
{
        TrophyPhaseScore->BitBtn1->Caption = QuarterFinal->Label3->Caption;
        TrophyPhaseScore->BitBtn2->Caption = QuarterFinal->Label4->Caption;
        TrophyPhaseScore->ShowModal();
        if(TrophyPhaseScore->ModalResult == mrOk){
                SemiFinal->Label2->Caption = QuarterFinal->Label3->Caption;
        }else if(TrophyPhaseScore->ModalResult == mrCancel){
                SemiFinal->Label2->Caption = QuarterFinal->Label4->Caption;
        }
        Button2->Enabled = false;
        TrophyPhaseScore->BitBtn1->Caption = "";
        TrophyPhaseScore->BitBtn2->Caption = "";
        if(Button1->Enabled == false && Button2->Enabled == false && Button3->Enabled == false && Button4->Enabled == false){
                Button9->Enabled = true;
                Button9->Visible = true;
        }
}
//---------------------------------------------------------------------------

void __fastcall TQuarterFinal::Button3Click(TObject *Sender)
{
        TrophyPhaseScore->BitBtn1->Caption = QuarterFinal->Label5->Caption;
        TrophyPhaseScore->BitBtn2->Caption = QuarterFinal->Label6->Caption;
        TrophyPhaseScore->ShowModal();
        if(TrophyPhaseScore->ModalResult == mrOk){
                SemiFinal->Label3->Caption = QuarterFinal->Label5->Caption;
        }else if(TrophyPhaseScore->ModalResult == mrCancel){
                SemiFinal->Label3->Caption = QuarterFinal->Label6->Caption;
        }
        Button3->Enabled = false;
        TrophyPhaseScore->BitBtn1->Caption = "";
        TrophyPhaseScore->BitBtn2->Caption = "";
        if(Button1->Enabled == false && Button2->Enabled == false && Button3->Enabled == false && Button4->Enabled == false){
                Button9->Enabled = true;
                Button9->Visible = true;
        }
}
//---------------------------------------------------------------------------

void __fastcall TQuarterFinal::Button4Click(TObject *Sender)
{
        TrophyPhaseScore->BitBtn1->Caption = QuarterFinal->Label7->Caption;
        TrophyPhaseScore->BitBtn2->Caption = QuarterFinal->Label8->Caption;
        TrophyPhaseScore->ShowModal();
        if(TrophyPhaseScore->ModalResult == mrOk){
                SemiFinal->Label4->Caption = QuarterFinal->Label7->Caption;
        }else if(TrophyPhaseScore->ModalResult == mrCancel){
                SemiFinal->Label4->Caption = QuarterFinal->Label8->Caption;
        }
        Button4->Enabled = false;
        TrophyPhaseScore->BitBtn1->Caption = "";
        TrophyPhaseScore->BitBtn2->Caption = "";
        if(Button1->Enabled == false && Button2->Enabled == false && Button3->Enabled == false && Button4->Enabled == false){
                Button9->Enabled = true;
                Button9->Visible = true;
        }
}
//---------------------------------------------------------------------------

void __fastcall TQuarterFinal::Button9Click(TObject *Sender)
{
        Close();
        SemiFinal->Show();
}
//---------------------------------------------------------------------------

