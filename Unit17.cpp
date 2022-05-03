//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit14.h"
#include "Unit15.h"
#include "Unit17.h"
#include "Globals.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TScoreGetterGroupB4 *ScoreGetterGroupB4;
//---------------------------------------------------------------------------
__fastcall TScoreGetterGroupB4::TScoreGetterGroupB4(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TScoreGetterGroupB4::Button1Click(TObject *Sender)
{
        ScoreGetterGroupB4->Edit1->Text = "";
        ScoreGetterGroupB4->Edit2->Text = "";
        ScoreGetterGroupB4->Label4->Caption = "";
        Close();
        FourGroupTournament->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TScoreGetterGroupB4::Button2Click(TObject *Sender)
{
        String Score1 = ScoreGetterGroupB4->Edit1->Text;
        String Score2 = ScoreGetterGroupB4->Edit2->Text;
        char ToCheck1[1];
        char ToCheck2[1];

        if(Score1 == "" || Score2 == ""){
                ScoreGetterGroupB4->Label4->Caption = "Proszê wprowadziæ oba wyniki.";
        }else if(Score1.Length() > 1 || Score2.Length() > 1){
                ScoreGetterGroupB4->Label4->Caption = "Wynik ma byæ jednocyfrowy.";
        }else{
                //some Ctrl-c Ctrl-v
                strcpy(ToCheck1, Score1.c_str());
                strcpy(ToCheck2, Score2.c_str());
                if((ToCheck1[0] < '0' || ToCheck1[0] > '9') && (ToCheck2[0] < '0' || ToCheck1[0] > '9')){
                        ScoreGetterGroupB4->Label4->Caption = "Proszê podaæ cyfrê.";
                }else{
                        int Result1 = Score1.ToInt();
                        int Result2 = Score2.ToInt();
                        if(Result1 > Result2){
                                String Winner = ScoreGetterGroupB4->NameLeft->Caption;
                                for(int i = 1; i < ScoreBoardB->StringGrid2->RowCount; i++){
                                        if(CompareStr(ScoreBoardB->StringGrid2->Cells[0][i], Winner) == 0){
                                                ScoreBoardB->StringGrid2->Cells[1][i] = IntToStr(ScoreBoardB->StringGrid2->Cells[1][i].ToInt() + 3);
                                        }
                                }
                                ScoreGetterGroupB4->Edit1->Text = "";
                                ScoreGetterGroupB4->Edit2->Text = "";
                                Close();
                                FourGroupTournament->Enabled = true;
                                FourGroupTournament->GroupBBracket->Items->Delete(LittleHelper);
                                FourGroupTournament->GroupBBracket->ItemIndex = 0;
                        }else if(Result1 < Result2){
                                String Winner = ScoreGetterGroupB4->NameRight->Caption;
                                Winner = Trim(Winner);
                                for(int i = 1; i < ScoreBoardB->StringGrid2->RowCount; i++){
                                        if(CompareStr(ScoreBoardB->StringGrid2->Cells[0][i], Winner) == 0){
                                                ScoreBoardB->StringGrid2->Cells[1][i] = IntToStr(ScoreBoardB->StringGrid2->Cells[1][i].ToInt() + 3);
                                        }
                                }
                                ScoreGetterGroupB4->Edit1->Text = "";
                                ScoreGetterGroupB4->Edit2->Text = "";
                                Close();
                                FourGroupTournament->Enabled = true;
                                FourGroupTournament->GroupBBracket->Items->Delete(LittleHelper);
                                FourGroupTournament->GroupBBracket->ItemIndex = 0;
                        }else{
                                String Winner = ScoreGetterGroupB4->NameLeft->Caption;
                                for(int i = 1; i < ScoreBoardB->StringGrid2->RowCount; i++){
                                        if(CompareStr(ScoreBoardB->StringGrid2->Cells[0][i], Winner) == 0){
                                                ScoreBoardB->StringGrid2->Cells[1][i] = IntToStr(ScoreBoardB->StringGrid2->Cells[1][i].ToInt() + 1);
                                        }
                                }
                                Winner = ScoreGetterGroupB4->NameRight->Caption;
                                Winner = Trim(Winner);
                                for(int i = 1; i < ScoreBoardB->StringGrid2->RowCount; i++){
                                        if(CompareStr(ScoreBoardB->StringGrid2->Cells[0][i], Winner) == 0){
                                                ScoreBoardB->StringGrid2->Cells[1][i] = IntToStr(ScoreBoardB->StringGrid2->Cells[1][i].ToInt() + 1);
                                        }
                                }
                                ScoreGetterGroupB4->Edit1->Text = "";
                                ScoreGetterGroupB4->Edit2->Text = "";
                                ScoreGetterGroupB4->Label4->Caption = "";
                                Close();
                                FourGroupTournament->Enabled = true;
                                FourGroupTournament->GroupBBracket->Items->Delete(LittleHelper);
                                FourGroupTournament->GroupBBracket->ItemIndex = 0;
                        }
                }
        }
}
//---------------------------------------------------------------------------
