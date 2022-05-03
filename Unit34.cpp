//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit34.h"
#include "Unit35.h"
#include "Unit37.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TSemiFinal *SemiFinal;
//---------------------------------------------------------------------------
__fastcall TSemiFinal::TSemiFinal(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TSemiFinal::Button1Click(TObject *Sender)
{
        TrophyPhaseScore->BitBtn1->Caption = SemiFinal->Label1->Caption;
        TrophyPhaseScore->BitBtn2->Caption = SemiFinal->Label2->Caption;
        TrophyPhaseScore->ShowModal();
        if(TrophyPhaseScore->ModalResult == mrOk){
                Final->Label1->Caption = SemiFinal->Label1->Caption;
        }else if(TrophyPhaseScore->ModalResult == mrCancel){
                Final->Label1->Caption = SemiFinal->Label2->Caption;
        }
        Button1->Enabled = false;
        TrophyPhaseScore->BitBtn1->Caption = "";
        TrophyPhaseScore->BitBtn2->Caption = "";
        if(Button1->Enabled == false && Button2->Enabled == false){
                Button9->Enabled = true;
                Button9->Visible = true;
        }
}
//---------------------------------------------------------------------------

void __fastcall TSemiFinal::Button2Click(TObject *Sender)
{
        TrophyPhaseScore->BitBtn1->Caption = SemiFinal->Label3->Caption;
        TrophyPhaseScore->BitBtn2->Caption = SemiFinal->Label4->Caption;
        TrophyPhaseScore->ShowModal();
        if(TrophyPhaseScore->ModalResult == mrOk){
                Final->Label2->Caption = SemiFinal->Label3->Caption;
        }else if(TrophyPhaseScore->ModalResult == mrCancel){
                Final->Label2->Caption = SemiFinal->Label4->Caption;
        }
        Button2->Enabled = false;
        TrophyPhaseScore->BitBtn1->Caption = "";
        TrophyPhaseScore->BitBtn2->Caption = "";
        if(Button1->Enabled == false && Button2->Enabled == false){
                Button9->Enabled = true;
                Button9->Visible = true;
        }        
}
//---------------------------------------------------------------------------

void __fastcall TSemiFinal::Button9Click(TObject *Sender)
{
        Close();
        Final->Show();        
}
//---------------------------------------------------------------------------

