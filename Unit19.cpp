//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit14.h"
#include "Unit15.h"
#include "Unit19.h"
#include "Globals.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TScoreGetterGroupD4 *ScoreGetterGroupD4;
//---------------------------------------------------------------------------
__fastcall TScoreGetterGroupD4::TScoreGetterGroupD4(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TScoreGetterGroupD4::Button1Click(TObject *Sender)
{
        ScoreGetterGroupD4->Edit1->Text = "";
        ScoreGetterGroupD4->Edit2->Text = "";
        ScoreGetterGroupD4->Label4->Caption = "";
        Close();
        FourGroupTournament->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TScoreGetterGroupD4::Button2Click(TObject *Sender)
{
        String Score1 = ScoreGetterGroupD4->Edit1->Text;
        String Score2 = ScoreGetterGroupD4->Edit2->Text;
        char ToCheck1[1];
        char ToCheck2[1];

        if(Score1 == "" || Score2 == ""){
                ScoreGetterGroupD4->Label4->Caption = "Proszê wprowadziæ oba wyniki.";
        }else if(Score1.Length() > 1 || Score2.Length() > 1){
                ScoreGetterGroupD4->Label4->Caption = "Wynik ma byæ jednocyfrowy.";
        }else{
                //some Ctrl-c Ctrl-v
                strcpy(ToCheck1, Score1.c_str());
                strcpy(ToCheck2, Score2.c_str());
                if((ToCheck1[0] < '0' || ToCheck1[0] > '9') && (ToCheck2[0] < '0' || ToCheck1[0] > '9')){
                        ScoreGetterGroupD4->Label4->Caption = "Proszê podaæ cyfrê.";
                }else{
                        int Result1 = Score1.ToInt();
                        int Result2 = Score2.ToInt();
                        if(Result1 > Result2){
                                String Winner = ScoreGetterGroupD4->NameLeft->Caption;
                                for(int i = 1; i < ScoreBoardB->StringGrid4->RowCount; i++){
                                        if(CompareStr(ScoreBoardB->StringGrid4->Cells[0][i], Winner) == 0){
                                                ScoreBoardB->StringGrid4->Cells[1][i] = IntToStr(ScoreBoardB->StringGrid4->Cells[1][i].ToInt() + 3);
                                        }
                                }
                                ScoreGetterGroupD4->Edit1->Text = "";
                                ScoreGetterGroupD4->Edit2->Text = "";
                                Close();
                                FourGroupTournament->Enabled = true;
                                FourGroupTournament->GroupDBracket->Items->Delete(LittleHelper);
                                FourGroupTournament->GroupDBracket->ItemIndex = 0;
                        }else if(Result1 < Result2){
                                String Winner = ScoreGetterGroupD4->NameRight->Caption;
                                Winner = Trim(Winner);
                                for(int i = 1; i < ScoreBoardB->StringGrid4->RowCount; i++){
                                        if(CompareStr(ScoreBoardB->StringGrid4->Cells[0][i], Winner) == 0){
                                                ScoreBoardB->StringGrid4->Cells[1][i] = IntToStr(ScoreBoardB->StringGrid4->Cells[1][i].ToInt() + 3);
                                        }
                                }
                                ScoreGetterGroupD4->Edit1->Text = "";
                                ScoreGetterGroupD4->Edit2->Text = "";
                                Close();
                                FourGroupTournament->Enabled = true;
                                FourGroupTournament->GroupDBracket->Items->Delete(LittleHelper);
                                FourGroupTournament->GroupDBracket->ItemIndex = 0;
                        }else{
                                String Winner = ScoreGetterGroupD4->NameLeft->Caption;
                                for(int i = 1; i < ScoreBoardB->StringGrid4->RowCount; i++){
                                        if(CompareStr(ScoreBoardB->StringGrid4->Cells[0][i], Winner) == 0){
                                                ScoreBoardB->StringGrid4->Cells[1][i] = IntToStr(ScoreBoardB->StringGrid4->Cells[1][i].ToInt() + 1);
                                        }
                                }
                                Winner = ScoreGetterGroupD4->NameRight->Caption;
                                Winner = Trim(Winner);
                                for(int i = 1; i < ScoreBoardB->StringGrid4->RowCount; i++){
                                        if(CompareStr(ScoreBoardB->StringGrid4->Cells[0][i], Winner) == 0){
                                                ScoreBoardB->StringGrid4->Cells[1][i] = IntToStr(ScoreBoardB->StringGrid4->Cells[1][i].ToInt() + 1);
                                        }
                                }
                                ScoreGetterGroupD4->Edit1->Text = "";
                                ScoreGetterGroupD4->Edit2->Text = "";
                                ScoreGetterGroupD4->Label4->Caption = "";
                                Close();
                                FourGroupTournament->Enabled = true;
                                FourGroupTournament->GroupDBracket->Items->Delete(LittleHelper);
                                FourGroupTournament->GroupDBracket->ItemIndex = 0;
                        }
                }
        }
}
//---------------------------------------------------------------------------
