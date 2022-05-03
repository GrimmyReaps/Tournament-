//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit21.h"
#include "Unit22.h"
#include "Unit27.h"
#include "Globals.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TScoreGetterGroupE8 *ScoreGetterGroupE8;
//---------------------------------------------------------------------------
__fastcall TScoreGetterGroupE8::TScoreGetterGroupE8(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TScoreGetterGroupE8::Button1Click(TObject *Sender)
{
        Edit1->Text = "";
        Edit2->Text = "";
        Label4->Caption = "";
        Close();
        EightGroupTournament->Enabled = true;        
}
//---------------------------------------------------------------------------

void __fastcall TScoreGetterGroupE8::Button2Click(TObject *Sender)
{
        String Score1 = ScoreGetterGroupE8->Edit1->Text;
        String Score2 = ScoreGetterGroupE8->Edit2->Text;
        char ToCheck1[1];
        char ToCheck2[1];

        if(Score1 == "" || Score2 == ""){
                ScoreGetterGroupE8->Label4->Caption = "Proszê wprowadziæ oba wyniki.";
        }else if(Score1.Length() > 1 || Score2.Length() > 1){
                ScoreGetterGroupE8->Label4->Caption = "Wynik ma byæ jednocyfrowy.";
        }else{
                //some Ctrl-c Ctrl-v
                strcpy(ToCheck1, Score1.c_str());
                strcpy(ToCheck2, Score2.c_str());
                if((ToCheck1[0] < '0' || ToCheck1[0] > '9') && (ToCheck2[0] < '0' || ToCheck1[0] > '9')){
                        ScoreGetterGroupE8->Label4->Caption = "Proszê podaæ cyfrê.";
                }else{
                        int Result1 = Score1.ToInt();
                        int Result2 = Score2.ToInt();
                        if(Result1 > Result2){
                                String Winner = ScoreGetterGroupE8->NameLeft->Caption;
                                for(int i = 1; i < ScoreBoardC->StringGrid5->RowCount; i++){
                                        if(CompareStr(ScoreBoardC->StringGrid5->Cells[0][i], Winner) == 0){
                                                ScoreBoardC->StringGrid5->Cells[1][i] = IntToStr(ScoreBoardC->StringGrid5->Cells[1][i].ToInt() + 3);
                                        }
                                }
                                ScoreGetterGroupE8->Edit1->Text = "";
                                ScoreGetterGroupE8->Edit2->Text = "";
                                Close();
                                EightGroupTournament->Enabled = true;
                                EightGroupTournament->GroupEBracket->Items->Delete(LittleHelper);
                                EightGroupTournament->GroupEBracket->ItemIndex = 0;
                        }else if(Result1 < Result2){
                                String Winner = ScoreGetterGroupE8->NameRight->Caption;
                                Winner = Trim(Winner);
                                for(int i = 1; i < ScoreBoardC->StringGrid5->RowCount; i++){
                                        if(CompareStr(ScoreBoardC->StringGrid5->Cells[0][i], Winner) == 0){
                                                ScoreBoardC->StringGrid5->Cells[1][i] = IntToStr(ScoreBoardC->StringGrid5->Cells[1][i].ToInt() + 3);
                                        }
                                }
                                ScoreGetterGroupE8->Edit1->Text = "";
                                ScoreGetterGroupE8->Edit2->Text = "";
                                Close();
                                EightGroupTournament->Enabled = true;
                                EightGroupTournament->GroupEBracket->Items->Delete(LittleHelper);
                                EightGroupTournament->GroupEBracket->ItemIndex = 0;
                        }else{
                                String Winner = ScoreGetterGroupE8->NameLeft->Caption;
                                for(int i = 1; i < ScoreBoardC->StringGrid5->RowCount; i++){
                                        if(CompareStr(ScoreBoardC->StringGrid5->Cells[0][i], Winner) == 0){
                                                ScoreBoardC->StringGrid5->Cells[1][i] = IntToStr(ScoreBoardC->StringGrid5->Cells[1][i].ToInt() + 1);
                                        }
                                }
                                Winner = ScoreGetterGroupE8->NameRight->Caption;
                                Winner = Trim(Winner);
                                for(int i = 1; i < ScoreBoardC->StringGrid5->RowCount; i++){
                                        if(CompareStr(ScoreBoardC->StringGrid5->Cells[0][i], Winner) == 0){
                                                ScoreBoardC->StringGrid5->Cells[1][i] = IntToStr(ScoreBoardC->StringGrid5->Cells[1][i].ToInt() + 1);
                                        }
                                }
                                ScoreGetterGroupE8->Edit1->Text = "";
                                ScoreGetterGroupE8->Edit2->Text = "";
                                ScoreGetterGroupE8->Label4->Caption = "";
                                Close();
                                EightGroupTournament->Enabled = true;
                                EightGroupTournament->GroupEBracket->Items->Delete(LittleHelper);
                                EightGroupTournament->GroupEBracket->ItemIndex = 0;
                        }
                }
        }        
}
//---------------------------------------------------------------------------

