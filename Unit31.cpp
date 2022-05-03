//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit31.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFinalResults8 *FinalResults8;
//---------------------------------------------------------------------------
__fastcall TFinalResults8::TFinalResults8(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFinalResults8::Button1Click(TObject *Sender)
{
        Close();
        Form1->WindowState = wsNormal;
}
//---------------------------------------------------------------------------
