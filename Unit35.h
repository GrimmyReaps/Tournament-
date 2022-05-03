//---------------------------------------------------------------------------

#ifndef Unit35H
#define Unit35H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TFinal : public TForm
{
__published:	// IDE-managed Components
        TGroupBox *GroupBox1;
        TLabel *Label1;
        TLabel *Label2;
        TButton *Button1;
        void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TFinal(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFinal *Final;
//---------------------------------------------------------------------------
#endif
