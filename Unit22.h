//---------------------------------------------------------------------------

#ifndef Unit22H
#define Unit22H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TEightGroupTournament : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TListBox *GroupABracket;
        TButton *Button1;
        TButton *Button4;
        TListBox *GroupBBracket;
        TButton *Button2;
        TButton *Button3;
        TListBox *GroupCBracket;
        TButton *Button5;
        TButton *Button6;
        TListBox *GroupDBracket;
        TButton *Button7;
        TButton *Button8;
        TButton *Button9;
        TButton *Button10;
        TButton *Button11;
        TLabel *Label5;
        TLabel *Label6;
        TListBox *GroupEBracket;
        TButton *Button12;
        TButton *Button13;
        TListBox *GroupFBracket;
        TButton *Button14;
        TButton *Button15;
        TLabel *Label7;
        TLabel *Label8;
        TListBox *GroupGBracket;
        TButton *Button16;
        TButton *Button17;
        TListBox *GroupHBracket;
        TButton *Button18;
        TButton *Button19;
        void __fastcall Button9Click(TObject *Sender);
        void __fastcall Button10Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
        void __fastcall Button8Click(TObject *Sender);
        void __fastcall Button13Click(TObject *Sender);
        void __fastcall Button15Click(TObject *Sender);
        void __fastcall Button17Click(TObject *Sender);
        void __fastcall Button19Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Button7Click(TObject *Sender);
        void __fastcall Button12Click(TObject *Sender);
        void __fastcall Button14Click(TObject *Sender);
        void __fastcall Button16Click(TObject *Sender);
        void __fastcall Button18Click(TObject *Sender);
        void __fastcall Button11Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TEightGroupTournament(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TEightGroupTournament *EightGroupTournament;
//---------------------------------------------------------------------------
#endif
