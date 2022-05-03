//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit21.h"
#include "Unit22.h"
#include "Unit26.h"
#include "Globals.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TScoreGetterGroupD8 *ScoreGetterGroupD8;
//---------------------------------------------------------------------------
__fastcall TScoreGetterGroupD8::TScoreGetterGroupD8(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TScoreGetterGroupD8::Button1Click(TObject *Sender)
{
        Edit1->Text = "";
        Edit2->Text = "";
        Label4->Caption = "";
        Close();
        EightGroupTournament->Enabled = true;        
}
//---------------------------------------------------------------------------

void __fastcall TScoreGetterGroupD8::Button2Click(TObject *Sender)
{
        String Score1 = ScoreGetterGroupD8->Edit1->Text;
        String Score2 = ScoreGetterGroupD8->Edit2->Text;
        char ToCheck1[1];
        char ToCheck2[1];

        if(Score1 == "" || Score2 == ""){
                ScoreGetterGroupD8->Label4->Caption = "Proszê wprowadziæ oba wyniki.";
        }else if(Score1.Length() > 1 || Score2.Length() > 1){
                ScoreGetterGroupD8->Label4->Caption = "Wynik ma byæ jednocyfrowy.";
        }else{
                //some Ctrl-c Ctrl-v
                strcpy(ToCheck1, Score1.c_str());
                strcpy(ToCheck2, Score2.c_str());
                if((ToCheck1[0] < '0' || ToCheck1[0] > '9') && (ToCheck2[0] < '0' || ToCheck1[0] > '9')){
                        ScoreGetterGroupD8->Label4->Caption = "Proszê podaæ cyfrê.";
                }else{
                        int Result1 = Score1.ToInt();
                        int Result2 = Score2.ToInt();
                        if(Result1 > Result2){
                                String Winner = ScoreGetterGroupD8->NameLeft->Caption;
                                for(int i = 1; i < ScoreBoardC->StringGrid4->RowCount; i++){
                                        if(CompareStr(ScoreBoardC->StringGrid4->Cells[0][i], Winner) == 0){
                                                ScoreBoardC->StringGrid4->Cells[1][i] = IntToStr(ScoreBoardC->StringGrid4->Cells[1][i].ToInt() + 3);
                                        }
                                }
                                ScoreGetterGroupD8->Edit1->Text = "";
                                ScoreGetterGroupD8->Edit2->Text = "";
                                Close();
                                EightGroupTournament->Enabled = true;
                                EightGroupTournament->GroupDBracket->Items->Delete(LittleHelper);
                                EightGroupTournament->GroupDBracket->ItemIndex = 0;
                        }else if(Result1 < Result2){
                                String Winner = ScoreGetterGroupD8->NameRight->Caption;
                                Winner = Trim(Winner);
                                for(int i = 1; i < ScoreBoardC->StringGrid4->RowCount; i++){
                                        if(CompareStr(ScoreBoardC->StringGrid4->Cells[0][i], Winner) == 0){
                                                ScoreBoardC->StringGrid4->Cells[1][i] = IntToStr(ScoreBoardC->StringGrid4->Cells[1][i].ToInt() + 3);
                                        }
                                }
                                ScoreGetterGroupD8->Edit1->Text = "";
                                ScoreGetterGroupD8->Edit2->Text = "";
                                Close();
                                EightGroupTournament->Enabled = true;
                                EightGroupTournament->GroupDBracket->Items->Delete(LittleHelper);
                                EightGroupTournament->GroupDBracket->ItemIndex = 0;
                        }else{
                                String Winner = ScoreGetterGroupD8->NameLeft->Caption;
                                for(int i = 1; i < ScoreBoardC->StringGrid4->RowCount; i++){
                                        if(CompareStr(ScoreBoardC->StringGrid4->Cells[0][i], Winner) == 0){
                                                ScoreBoardC->StringGrid4->Cells[1][i] = IntToStr(ScoreBoardC->StringGrid4->Cells[1][i].ToInt() + 1);
                                        }
                                }
                                Winner = ScoreGetterGroupD8->NameRight->Caption;
                                Winner = Trim(Winner);
                                for(int i = 1; i < ScoreBoardC->StringGrid4->RowCount; i++){
                                        if(CompareStr(ScoreBoardC->StringGrid4->Cells[0][i], Winner) == 0){
                                                ScoreBoardC->StringGrid4->Cells[1][i] = IntToStr(ScoreBoardC->StringGrid4->Cells[1][i].ToInt() + 1);
                                        }
                                }
                                ScoreGetterGroupD8->Edit1->Text = "";
                                ScoreGetterGroupD8->Edit2->Text = "";
                                ScoreGetterGroupD8->Label4->Caption = "";
                                Close();
                                EightGroupTournament->Enabled = true;
                                EightGroupTournament->GroupDBracket->Items->Delete(LittleHelper);
                                EightGroupTournament->GroupDBracket->ItemIndex = 0;
                        }
                }
        }        
}
//---------------------------------------------------------------------------

