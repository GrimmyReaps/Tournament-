//---------------------------------------------------------------------------

#ifndef Unit14H
#define Unit14H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TFourGroupTournament : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TListBox *GroupABracket;
        TButton *Button1;
        TButton *Button4;
        TLabel *Label2;
        TListBox *GroupBBracket;
        TButton *Button2;
        TButton *Button3;
        TLabel *Label3;
        TListBox *GroupCBracket;
        TButton *Button5;
        TButton *Button6;
        TLabel *Label4;
        TListBox *GroupDBracket;
        TButton *Button7;
        TButton *Button8;
        TButton *Button9;
        TButton *Button10;
        TButton *Button11;
        void __fastcall Button9Click(TObject *Sender);
        void __fastcall Button10Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Button7Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
        void __fastcall Button8Click(TObject *Sender);
        void __fastcall Button11Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TFourGroupTournament(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFourGroupTournament *FourGroupTournament;
//---------------------------------------------------------------------------
#endif
