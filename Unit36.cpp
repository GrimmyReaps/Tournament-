//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit36.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TWinner *Winner;
//---------------------------------------------------------------------------
__fastcall TWinner::TWinner(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------



void __fastcall TWinner::FormClose(TObject *Sender, TCloseAction &Action)
{
        Form1->Close();
}
//---------------------------------------------------------------------------


