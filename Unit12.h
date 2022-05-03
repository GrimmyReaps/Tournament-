//---------------------------------------------------------------------------

#ifndef Unit12H
#define Unit12H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TGroupSetter4 : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TLabel *Label2;
        TEdit *Edit1;
        TButton *Button1;
        TButton *Button2;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TGroupSetter4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TGroupSetter4 *GroupSetter4;
//---------------------------------------------------------------------------
#endif
