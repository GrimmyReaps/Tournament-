//---------------------------------------------------------------------------

#ifndef Unit34H
#define Unit34H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TSemiFinal : public TForm
{
__published:	// IDE-managed Components
        TGroupBox *GroupBox1;
        TLabel *Label1;
        TLabel *Label2;
        TGroupBox *GroupBox2;
        TLabel *Label3;
        TLabel *Label4;
        TButton *Button1;
        TButton *Button2;
        TButton *Button9;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button9Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TSemiFinal(TComponent* Owner);
        TLabel* labels[4];
};
//---------------------------------------------------------------------------
extern PACKAGE TSemiFinal *SemiFinal;
//---------------------------------------------------------------------------
#endif
