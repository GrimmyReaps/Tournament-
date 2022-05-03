//---------------------------------------------------------------------------

#ifndef Unit8H
#define Unit8H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TScoreBoardA : public TForm
{
__published:	// IDE-managed Components
        TStringGrid *StringGrid1;
        TLabel *Label1;
        TBitBtn *BitBtn1;
        TStringGrid *StringGrid2;
        TLabel *Label2;
private:	// User declarations
public:		// User declarations
        __fastcall TScoreBoardA(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TScoreBoardA *ScoreBoardA;
//---------------------------------------------------------------------------
#endif
