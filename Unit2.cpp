//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TInfoDump *InfoDump;
//---------------------------------------------------------------------------
__fastcall TInfoDump::TInfoDump(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TInfoDump::SpeedButton1Click(TObject *Sender)
{
        Close();        
}
//---------------------------------------------------------------------------

