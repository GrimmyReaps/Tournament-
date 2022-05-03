//---------------------------------------------------------------------------

#ifndef Unit11H
#define Unit11H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TGroupSetter3 : public TForm
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
        __fastcall TGroupSetter3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TGroupSetter3 *GroupSetter3;
//---------------------------------------------------------------------------
#endif
