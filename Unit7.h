//---------------------------------------------------------------------------

#ifndef Unit7H
#define Unit7H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TScoreGetterGroupA2 : public TForm
{
__published:	// IDE-managed Components
        TEdit *Edit1;
        TEdit *Edit2;
        TLabel *NameLeft;
        TLabel *NameRight;
        TLabel *Label3;
        TButton *Button1;
        TButton *Button2;
        TLabel *Label4;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TScoreGetterGroupA2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TScoreGetterGroupA2 *ScoreGetterGroupA2;
//---------------------------------------------------------------------------
#endif
