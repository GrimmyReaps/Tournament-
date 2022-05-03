//---------------------------------------------------------------------------

#ifndef Unit6H
#define Unit6H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TNameInput : public TForm
{
__published:	// IDE-managed Components
        TBitBtn *BitBtn1;
        TEdit *Edit1;
        TLabel *Label1;
private:	// User declarations
public:		// User declarations
        __fastcall TNameInput(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TNameInput *NameInput;
//---------------------------------------------------------------------------
#endif
