//---------------------------------------------------------------------------

#ifndef Unit15H
#define Unit15H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TScoreBoardB : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TLabel *Label2;
        TStringGrid *StringGrid1;
        TStringGrid *StringGrid2;
        TLabel *Label3;
        TLabel *Label4;
        TStringGrid *StringGrid3;
        TStringGrid *StringGrid4;
        TBitBtn *BitBtn1;
private:	// User declarations
public:		// User declarations
        __fastcall TScoreBoardB(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TScoreBoardB *ScoreBoardB;
//---------------------------------------------------------------------------
#endif
