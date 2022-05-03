//---------------------------------------------------------------------------

#ifndef Unit32H
#define Unit32H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class Tsixeenth : public TForm
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
        TGroupBox *GroupBox5;
        TLabel *Label9;
        TLabel *Label10;
        TGroupBox *GroupBox6;
        TLabel *Label11;
        TLabel *Label12;
        TGroupBox *GroupBox7;
        TLabel *Label13;
        TLabel *Label14;
        TGroupBox *GroupBox8;
        TLabel *Label15;
        TLabel *Label16;
        TButton *Button1;
        TButton *Button2;
        TButton *Button3;
        TButton *Button4;
        TButton *Button5;
        TButton *Button6;
        TButton *Button7;
        TButton *Button8;
        TButton *Button9;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
        void __fastcall Button7Click(TObject *Sender);
        void __fastcall Button8Click(TObject *Sender);
        void __fastcall Button9Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tsixeenth(TComponent* Owner);
        TLabel* labels[16];
};
//---------------------------------------------------------------------------
extern PACKAGE Tsixeenth *sixeenth;
//---------------------------------------------------------------------------
#endif
