//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit10.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFinalResults2 *FinalResults2;
//---------------------------------------------------------------------------
__fastcall TFinalResults2::TFinalResults2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFinalResults2::Button1Click(TObject *Sender)
{
        FinalResults2->Close();
        Form1->WindowState = wsNormal;
}
//---------------------------------------------------------------------------
