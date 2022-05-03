//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TTwoGroupTournament : public TForm
{
__published:	// IDE-managed Components
        TListBox *GroupABracket;
        TListBox *GroupBBracket;
        TButton *Button1;
        TLabel *Label1;
        TLabel *Label2;
        TButton *Button2;
        TButton *Button3;
        TButton *Button4;
        TButton *Button5;
        TButton *Button6;
        TButton *Button7;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Button7Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TTwoGroupTournament(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TTwoGroupTournament *TwoGroupTournament;
//---------------------------------------------------------------------------
#endif
