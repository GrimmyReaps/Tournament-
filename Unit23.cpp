//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit21.h"
#include "Unit22.h"
#include "Unit23.h"
#include "Globals.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TScoreGetterGroupA8 *ScoreGetterGroupA8;
//---------------------------------------------------------------------------
__fastcall TScoreGetterGroupA8::TScoreGetterGroupA8(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TScoreGetterGroupA8::Button1Click(TObject *Sender)
{
        Edit1->Text = "";
        Edit2->Text = "";
        Label4->Caption = "";
        Close();
        EightGroupTournament->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TScoreGetterGroupA8::Button2Click(TObject *Sender)
{
        String Score1 = ScoreGetterGroupA8->Edit1->Text;
        String Score2 = ScoreGetterGroupA8->Edit2->Text;
        char ToCheck1[1];
        char ToCheck2[1];

        if(Score1 == "" || Score2 == ""){
                ScoreGetterGroupA8->Label4->Caption = "Proszê wprowadziæ oba wyniki.";
        }else if(Score1.Length() > 1 || Score2.Length() > 1){
                ScoreGetterGroupA8->Label4->Caption = "Wynik ma byæ jednocyfrowy.";
        }else{
                //some Ctrl-c Ctrl-v
                strcpy(ToCheck1, Score1.c_str());
                strcpy(ToCheck2, Score2.c_str());
                if((ToCheck1[0] < '0' || ToCheck1[0] > '9') && (ToCheck2[0] < '0' || ToCheck1[0] > '9')){
                        ScoreGetterGroupA8->Label4->Caption = "Proszê podaæ cyfrê.";
                }else{
                        int Result1 = Score1.ToInt();
                        int Result2 = Score2.ToInt();
                        if(Result1 > Result2){
                                String Winner = ScoreGetterGroupA8->NameLeft->Caption;
                                for(int i = 1; i < ScoreBoardC->StringGrid1->RowCount; i++){
                                        if(CompareStr(ScoreBoardC->StringGrid1->Cells[0][i], Winner) == 0){
                                                ScoreBoardC->StringGrid1->Cells[1][i] = IntToStr(ScoreBoardC->StringGrid1->Cells[1][i].ToInt() + 3);
                                        }
                                }
                                ScoreGetterGroupA8->Edit1->Text = "";
                                ScoreGetterGroupA8->Edit2->Text = "";
                                Close();
                                EightGroupTournament->Enabled = true;
                                EightGroupTournament->GroupABracket->Items->Delete(LittleHelper);
                                EightGroupTournament->GroupABracket->ItemIndex = 0;
                        }else if(Result1 < Result2){
                                String Winner = ScoreGetterGroupA8->NameRight->Caption;
                                Winner = Trim(Winner);
                                for(int i = 1; i < ScoreBoardC->StringGrid1->RowCount; i++){
                                        if(CompareStr(ScoreBoardC->StringGrid1->Cells[0][i], Winner) == 0){
                                                ScoreBoardC->StringGrid1->Cells[1][i] = IntToStr(ScoreBoardC->StringGrid1->Cells[1][i].ToInt() + 3);
                                        }
                                }
                                ScoreGetterGroupA8->Edit1->Text = "";
                                ScoreGetterGroupA8->Edit2->Text = "";
                                Close();
                                EightGroupTournament->Enabled = true;
                                EightGroupTournament->GroupABracket->Items->Delete(LittleHelper);
                                EightGroupTournament->GroupABracket->ItemIndex = 0;
                        }else{
                                String Winner = ScoreGetterGroupA8->NameLeft->Caption;
                                for(int i = 1; i < ScoreBoardC->StringGrid1->RowCount; i++){
                                        if(CompareStr(ScoreBoardC->StringGrid1->Cells[0][i], Winner) == 0){
                                                ScoreBoardC->StringGrid1->Cells[1][i] = IntToStr(ScoreBoardC->StringGrid1->Cells[1][i].ToInt() + 1);
                                        }
                                }
                                Winner = ScoreGetterGroupA8->NameRight->Caption;
                                Winner = Trim(Winner);
                                for(int i = 1; i < ScoreBoardC->StringGrid1->RowCount; i++){
                                        if(CompareStr(ScoreBoardC->StringGrid1->Cells[0][i], Winner) == 0){
                                                ScoreBoardC->StringGrid1->Cells[1][i] = IntToStr(ScoreBoardC->StringGrid1->Cells[1][i].ToInt() + 1);
                                        }
                                }
                                ScoreGetterGroupA8->Edit1->Text = "";
                                ScoreGetterGroupA8->Edit2->Text = "";
                                ScoreGetterGroupA8->Label4->Caption = "";
                                Close();
                                EightGroupTournament->Enabled = true;
                                EightGroupTournament->GroupABracket->Items->Delete(LittleHelper);
                                EightGroupTournament->GroupABracket->ItemIndex = 0;
                        }
                }
        }
}
//---------------------------------------------------------------------------

