//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit20.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFinalResults4 *FinalResults4;
//---------------------------------------------------------------------------
__fastcall TFinalResults4::TFinalResults4(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFinalResults4::Button1Click(TObject *Sender)
{
        Close();
        Form1->WindowState = wsNormal;
}
//---------------------------------------------------------------------------
