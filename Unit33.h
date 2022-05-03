//---------------------------------------------------------------------------

#ifndef Unit33H
#define Unit33H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TQuarterFinal : public TForm
{
__published:	// IDE-managed Components
        TGroupBox *GroupBox1;
        TLabel *Label1;
        TLabel *Label2;
        TGroupBox *GroupBox2;
        TLabel *Label3;
        TLabel *Label4;
        TGroupBox *GroupBox3;
        TLabel *Label5;
        TLabel *Label6;
        TGroupBox *GroupBox4;
        TLabel *Label7;
        TLabel *Label8;
        TButton *Button1;
        TButton *Button2;
        TButton *Button3;
        TButton *Button4;
        TButton *Button9;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button9Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TQuarterFinal(TComponent* Owner);
        TLabel* labels[8];
};
//---------------------------------------------------------------------------
extern PACKAGE TQuarterFinal *QuarterFinal;
//---------------------------------------------------------------------------
#endif
