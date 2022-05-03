//---------------------------------------------------------------------------

#ifndef Unit37H
#define Unit37H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TTrophyPhaseScore : public TForm
{
__published:	// IDE-managed Components
        TBitBtn *BitBtn1;
        TBitBtn *BitBtn2;
        TLabel *Label1;
private:	// User declarations
public:		// User declarations
        __fastcall TTrophyPhaseScore(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TTrophyPhaseScore *TrophyPhaseScore;
//---------------------------------------------------------------------------
#endif
