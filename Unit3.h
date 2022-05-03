//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <stdlib.h>
//---------------------------------------------------------------------------
class TGroupSetter2 : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TEdit *Edit1;
        TButton *Button1;
        TButton *Button2;
        TLabel *Label2;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TGroupSetter2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TGroupSetter2 *GroupSetter2;
//---------------------------------------------------------------------------
#endif
