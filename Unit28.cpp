//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit21.h"
#include "Unit22.h"
#include "Unit28.h"
#include "Globals.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TScoreGetterGroupF8 *ScoreGetterGroupF8;
//---------------------------------------------------------------------------
__fastcall TScoreGetterGroupF8::TScoreGetterGroupF8(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TScoreGetterGroupF8::Button1Click(TObject *Sender)
{
        Edit1->Text = "";
        Edit2->Text = "";
        Label4->Caption = "";
        Close();
        EightGroupTournament->Enabled = true;        
}
//---------------------------------------------------------------------------

void __fastcall TScoreGetterGroupF8::Button2Click(TObject *Sender)
{
        String Score1 = ScoreGetterGroupF8->Edit1->Text;
        String Score2 = ScoreGetterGroupF8->Edit2->Text;
        char ToCheck1[1];
        char ToCheck2[1];

        if(Score1 == "" || Score2 == ""){
                ScoreGetterGroupF8->Label4->Caption = "Proszê wprowadziæ oba wyniki.";
        }else if(Score1.Length() > 1 || Score2.Length() > 1){
                ScoreGetterGroupF8->Label4->Caption = "Wynik ma byæ jednocyfrowy.";
        }else{
                //some Ctrl-c Ctrl-v
                strcpy(ToCheck1, Score1.c_str());
                strcpy(ToCheck2, Score2.c_str());
                if((ToCheck1[0] < '0' || ToCheck1[0] > '9') && (ToCheck2[0] < '0' || ToCheck1[0] > '9')){
                        ScoreGetterGroupF8->Label4->Caption = "Proszê podaæ cyfrê.";
                }else{
                        int Result1 = Score1.ToInt();
                        int Result2 = Score2.ToInt();
                        if(Result1 > Result2){
                                String Winner = ScoreGetterGroupF8->NameLeft->Caption;
                                for(int i = 1; i < ScoreBoardC->StringGrid6->RowCount; i++){
                                        if(CompareStr(ScoreBoardC->StringGrid6->Cells[0][i], Winner) == 0){
                                                ScoreBoardC->StringGrid6->Cells[1][i] = IntToStr(ScoreBoardC->StringGrid6->Cells[1][i].ToInt() + 3);
                                        }
                                }
                                ScoreGetterGroupF8->Edit1->Text = "";
                                ScoreGetterGroupF8->Edit2->Text = "";
                                Close();
                                EightGroupTournament->Enabled = true;
                                EightGroupTournament->GroupFBracket->Items->Delete(LittleHelper);
                                EightGroupTournament->GroupFBracket->ItemIndex = 0;
                        }else if(Result1 < Result2){
                                String Winner = ScoreGetterGroupF8->NameRight->Caption;
                                Winner = Trim(Winner);
                                for(int i = 1; i < ScoreBoardC->StringGrid6->RowCount; i++){
                                        if(CompareStr(ScoreBoardC->StringGrid6->Cells[0][i], Winner) == 0){
                                                ScoreBoardC->StringGrid6->Cells[1][i] = IntToStr(ScoreBoardC->StringGrid6->Cells[1][i].ToInt() + 3);
                                        }
                                }
                                ScoreGetterGroupF8->Edit1->Text = "";
                                ScoreGetterGroupF8->Edit2->Text = "";
                                Close();
                                EightGroupTournament->Enabled = true;
                                EightGroupTournament->GroupFBracket->Items->Delete(LittleHelper);
                                EightGroupTournament->GroupFBracket->ItemIndex = 0;
                        }else{
                                String Winner = ScoreGetterGroupF8->NameLeft->Caption;
                                for(int i = 1; i < ScoreBoardC->StringGrid6->RowCount; i++){
                                        if(CompareStr(ScoreBoardC->StringGrid6->Cells[0][i], Winner) == 0){
                                                ScoreBoardC->StringGrid6->Cells[1][i] = IntToStr(ScoreBoardC->StringGrid6->Cells[1][i].ToInt() + 1);
                                        }
                                }
                                Winner = ScoreGetterGroupF8->NameRight->Caption;
                                Winner = Trim(Winner);
                                for(int i = 1; i < ScoreBoardC->StringGrid6->RowCount; i++){
                                        if(CompareStr(ScoreBoardC->StringGrid6->Cells[0][i], Winner) == 0){
                                                ScoreBoardC->StringGrid6->Cells[1][i] = IntToStr(ScoreBoardC->StringGrid6->Cells[1][i].ToInt() + 1);
                                        }
                                }
                                ScoreGetterGroupF8->Edit1->Text = "";
                                ScoreGetterGroupF8->Edit2->Text = "";
                                ScoreGetterGroupF8->Label4->Caption = "";
                                Close();
                                EightGroupTournament->Enabled = true;
                                EightGroupTournament->GroupFBracket->Items->Delete(LittleHelper);
                                EightGroupTournament->GroupFBracket->ItemIndex = 0;
                        }
                }
        }
}
//---------------------------------------------------------------------------

