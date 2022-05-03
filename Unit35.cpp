//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit35.h"
#include "Unit36.h"
#include "Unit37.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFinal *Final;
//---------------------------------------------------------------------------
__fastcall TFinal::TFinal(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFinal::Button1Click(TObject *Sender)
{
        TrophyPhaseScore->BitBtn1->Caption = Final->Label1->Caption;
        TrophyPhaseScore->BitBtn2->Caption = Final->Label2->Caption;
        TrophyPhaseScore->ShowModal();
        if(TrophyPhaseScore->ModalResult == mrOk){
                Winner->Label2->Caption = Final->Label1->Caption;
        }else if(TrophyPhaseScore->ModalResult == mrCancel){
                Winner->Label2->Caption = Final->Label2->Caption;
        }
        Close();
        Winner->Show();
}
//---------------------------------------------------------------------------

