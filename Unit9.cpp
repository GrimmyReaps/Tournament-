//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
#include "Unit8.h"
#include "Unit9.h"
#include "Globals.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TScoreGetterGroupB2 *ScoreGetterGroupB2;
//---------------------------------------------------------------------------
__fastcall TScoreGetterGroupB2::TScoreGetterGroupB2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TScoreGetterGroupB2::Button1Click(TObject *Sender)
{
        ScoreGetterGroupB2->Edit1->Text = "";
        ScoreGetterGroupB2->Edit2->Text = "";
        ScoreGetterGroupB2->Label4->Caption = "";
        Close();
        TwoGroupTournament->Enabled = true;        
}
//---------------------------------------------------------------------------
//This fucnction takes the score and adds points to the winner
void __fastcall TScoreGetterGroupB2::Button2Click(TObject *Sender)
{
String Score1 = ScoreGetterGroupB2->Edit1->Text;
        String Score2 = ScoreGetterGroupB2->Edit2->Text;
        char ToCheck1[1];
        char ToCheck2[1];

        if(Score1 == "" || Score2 == ""){
                ScoreGetterGroupB2->Label4->Caption = "Proszê wprowadziæ oba wyniki.";
        }else if(Score1.Length() > 1 || Score2.Length() > 1){
                ScoreGetterGroupB2->Label4->Caption = "Wynik ma byæ jednocyfrowy.";
        }else{
                //Zmiana String na tablicê charów dla sprawdzenia poprawnoœci wprowadzonych danych
                strcpy(ToCheck1, Score1.c_str());
                strcpy(ToCheck2, Score2.c_str());
                if((ToCheck1[0] < '0' || ToCheck1[0] > '9') && (ToCheck2[0] < '0' || ToCheck1[0] > '9')){
                        ScoreGetterGroupB2->Label4->Caption = "Proszê podaæ cyfrê.";
                }else{
                        int Result1 = Score1.ToInt();
                        int Result2 = Score2.ToInt();
                        if(Result1 > Result2){
                                String Winner = ScoreGetterGroupB2->NameLeft->Caption;
                                for(int i = 1; i < ScoreBoardA->StringGrid2->RowCount; i++){
                                        if(CompareStr(ScoreBoardA->StringGrid2->Cells[0][i], Winner) == 0){
                                                ScoreBoardA->StringGrid2->Cells[1][i] = IntToStr(ScoreBoardA->StringGrid2->Cells[1][i].ToInt() + 3);
                                        }
                                }
                                ScoreGetterGroupB2->Edit1->Text = "";
                                ScoreGetterGroupB2->Edit2->Text = "";
                                Close();
                                TwoGroupTournament->Enabled = true;
                                TwoGroupTournament->GroupBBracket->Items->Delete(LittleHelper);
                                TwoGroupTournament->GroupBBracket->ItemIndex = 0;
                        }else if(Result1 < Result2){
                                String Winner = ScoreGetterGroupB2->NameRight->Caption;
                                Winner = Trim(Winner);
                                for(int i = 1; i < ScoreBoardA->StringGrid2->RowCount; i++){
                                        if(CompareStr(ScoreBoardA->StringGrid2->Cells[0][i], Winner) == 0){
                                                ScoreBoardA->StringGrid2->Cells[1][i] = IntToStr(ScoreBoardA->StringGrid2->Cells[1][i].ToInt() + 3);
                                        }
                                }
                                ScoreGetterGroupB2->Edit1->Text = "";
                                ScoreGetterGroupB2->Edit2->Text = "";
                                Close();
                                TwoGroupTournament->Enabled = true;
                                TwoGroupTournament->GroupBBracket->Items->Delete(LittleHelper);
                                TwoGroupTournament->GroupBBracket->ItemIndex = 0;
                        }else{
                                String Winner = ScoreGetterGroupB2->NameLeft->Caption;
                                for(int i = 1; i < ScoreBoardA->StringGrid2->RowCount; i++){
                                        if(CompareStr(ScoreBoardA->StringGrid2->Cells[0][i], Winner) == 0){
                                                ScoreBoardA->StringGrid2->Cells[1][i] = IntToStr(ScoreBoardA->StringGrid2->Cells[1][i].ToInt() + 1);
                                        }
                                }
                                Winner = ScoreGetterGroupB2->NameRight->Caption;
                                Winner = Trim(Winner);
                                for(int i = 1; i < ScoreBoardA->StringGrid2->RowCount; i++){
                                        if(CompareStr(ScoreBoardA->StringGrid2->Cells[0][i], Winner) == 0){
                                                ScoreBoardA->StringGrid2->Cells[1][i] = IntToStr(ScoreBoardA->StringGrid2->Cells[1][i].ToInt() + 1);
                                        }
                                }
                                ScoreGetterGroupB2->Edit1->Text = "";
                                ScoreGetterGroupB2->Edit2->Text = "";
                                ScoreGetterGroupB2->Label4->Caption = "";
                                Close();
                                TwoGroupTournament->Enabled = true;
                                TwoGroupTournament->GroupBBracket->Items->Delete(LittleHelper);
                                TwoGroupTournament->GroupBBracket->ItemIndex = 0;
                        }
                }
        }
}
//---------------------------------------------------------------------------
