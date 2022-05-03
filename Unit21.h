//---------------------------------------------------------------------------

#ifndef Unit21H
#define Unit21H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TScoreBoardC : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TStringGrid *StringGrid1;
        TStringGrid *StringGrid2;
        TStringGrid *StringGrid3;
        TStringGrid *StringGrid4;
        TBitBtn *BitBtn1;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TStringGrid *StringGrid5;
        TStringGrid *StringGrid6;
        TStringGrid *StringGrid7;
        TStringGrid *StringGrid8;
private:	// User declarations
public:		// User declarations
        __fastcall TScoreBoardC(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TScoreBoardC *ScoreBoardC;
//---------------------------------------------------------------------------
#endif
