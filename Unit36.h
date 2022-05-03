//---------------------------------------------------------------------------

#ifndef Unit36H
#define Unit36H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TWinner : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TLabel *Label2;
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
        __fastcall TWinner(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TWinner *Winner;
//---------------------------------------------------------------------------
#endif
