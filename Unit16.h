//---------------------------------------------------------------------------

#ifndef Unit16H
#define Unit16H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TScoreGetterGroupA4 : public TForm
{
__published:	// IDE-managed Components
        TLabel *NameLeft;
        TLabel *NameRight;
        TLabel *Label3;
        TLabel *Label4;
        TEdit *Edit1;
        TEdit *Edit2;
        TButton *Button1;
        TButton *Button2;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TScoreGetterGroupA4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TScoreGetterGroupA4 *ScoreGetterGroupA4;
//---------------------------------------------------------------------------
#endif
