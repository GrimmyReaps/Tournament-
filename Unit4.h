//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TGroupSetter1 : public TForm
{
__published:	// IDE-managed Components
        TGroupBox *GroupBox1;
        TRadioButton *Group2;
        TRadioButton *Group4;
        TRadioButton *Group8;
        TButton *Button1;
        TButton *Button2;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TGroupSetter1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TGroupSetter1 *GroupSetter1;
//---------------------------------------------------------------------------
#endif
