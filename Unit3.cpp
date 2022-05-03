//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
#include "Unit6.h"
#include "Unit5.h"
#include "Globals.h"
#include "Unit7.h"
#include "Unit8.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TGroupSetter2 *GroupSetter2;
//---------------------------------------------------------------------------
__fastcall TGroupSetter2::TGroupSetter2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TGroupSetter2::Button1Click(TObject *Sender)
{
        Close();
        Form1->WindowState = wsNormal;
}
//---------------------------------------------------------------------------




void __fastcall TGroupSetter2::Button2Click(TObject *Sender)
{
        String PlayerAmount = GroupSetter2->Edit1->Text;
        char ToCheck[4];
        if(PlayerAmount.Length() > 4){
                GroupSetter2->Label2->Caption = "Proszê o podanie realistycznej liczby zawodników.";
                GroupSetter2->Edit1->Text = "";
                GroupSetter2->Edit1->SetFocus();
        }else if(PlayerAmount.Length() == 0){
                GroupSetter2->Label2->Caption = "Proszê o podanie liczby.";
                GroupSetter2->Edit1->Text = "";
                GroupSetter2->Edit1->SetFocus();
        }else{
                //Change String to a char array
                strcpy(ToCheck, PlayerAmount.c_str());
                //We check if they input correct data
                //Also we make sure they can't input more than 9999 players
                if(ToCheck[0] == '0'){
                        GroupSetter2->Label2->Caption = "Pierwsza cyfra nie mo¿e byæ zerem.";
                                GroupSetter2->Edit1->Text = "";
                                GroupSetter2->Edit1->SetFocus();
                                return;
                }
                for(int i = 0; i < PlayerAmount.Length(); i++){
                        if(ToCheck[i] < '0' || ToCheck[i] > '9'){
                                GroupSetter2->Label2->Caption = "Proszê o podanie liczby.";
                                GroupSetter2->Edit1->Text = "";
                                GroupSetter2->Edit1->SetFocus();
                                return;
                        }else if(PlayerAmount.Length() == 1 && ToCheck[i] < '4'){
                                GroupSetter2->Label2->Caption = "Proszê o podanie realistycznej liczby zawodników.";
                                GroupSetter2->Edit1->Text = "";
                                GroupSetter2->Edit1->SetFocus();
                                return;
                        }
                }
                GroupSetter2->Close();

                //We insert players into the system
                int PlayerCounter = GroupSetter2->Edit1->Text.ToInt();
                String Players[9999];
                for(int i = 0; i<PlayerCounter; i++){
                        NameInput->Edit1->Text = "";
                        NameInput->Label1->Caption = "WprowadŸ zawodnika nr " + IntToStr(i + 1);
                        if(NameInput->ShowModal() == mrOk){
                                Players[i] = NameInput->Edit1->Text;
                                Players[i] = Trim(Players[i]);
                        }
                }
                //Things needed to make groups
                Randomize();
                int r;
                int j = 0;
                int k = 0;
                int PlayerHalf;
                if(PlayerCounter%2 !=0){
                        PlayerHalf = (PlayerCounter + 1)/2;
                }else{
                        PlayerHalf = PlayerCounter/2;
                }
                //Where grouping happens
                for(int i = 0; i<PlayerCounter; i++){
                        r = random(2);
                        if(r == 0 && j < PlayerHalf){
                                GroupA[j] = Players[i];
                                j++;
                        }else if(k < PlayerHalf){
                                GroupB[k] = Players[i];
                                k++;
                        }else{
                                GroupA[j] = Players[i];
                                j++;
                        }
                }
                //Scoreboard init for grup A
                ScoreBoardA->StringGrid1->RowCount = j+1;
                ScoreBoardA->StringGrid1->Cells[0][0] = "Nazwa Zawodnika";
                ScoreBoardA->StringGrid1->Cells[1][0] = "Wynik";
                ScoreBoardA->StringGrid1->ColWidths[0] = 150;
                ScoreBoardA->StringGrid1->ColWidths[1] = 60;
                ScoreBoardA->StringGrid1->RowHeights[0] = 16;
                for(int i = 1; i<=j; i++){
                        ScoreBoardA->StringGrid1->RowHeights[i] = 16;
                        ScoreBoardA->StringGrid1->Cells[0][i] = GroupA[i-1];
                        ScoreBoardA->StringGrid1->Cells[1][i] = "0";
                }
                //Scoreboard init for grup B
                ScoreBoardA->StringGrid2->RowCount = k+1;
                ScoreBoardA->StringGrid2->Cells[0][0] = "Nazwa Zawodnika";
                ScoreBoardA->StringGrid2->Cells[1][0] = "Wynik";
                ScoreBoardA->StringGrid2->ColWidths[0] = 150;
                ScoreBoardA->StringGrid2->ColWidths[1] = 60;
                ScoreBoardA->StringGrid2->RowHeights[0] = 16;
                for(int i = 1; i<=k; i++){
                        ScoreBoardA->StringGrid2->RowHeights[i] = 16;
                        ScoreBoardA->StringGrid2->Cells[0][i] = GroupB[i-1];
                        ScoreBoardA->StringGrid2->Cells[1][i] = "0";
                }
                //We need even number of players in a group
                if(k%2 != 0){
                        GroupB[k] = "bye";
                        k++;
                }
                if(j%2 != 0){
                        GroupA[j] = "bye";
                        j++;
                }
                //Those are always even!!!!!!!!!!!!
                PlayerAmountB = k;
                PlayerAmountA = j;
                //We call for a window that shows the tournament
                TwoGroupTournament->Show();
                TwoGroupTournament->Button1->Click();
                TwoGroupTournament->Button2->Click();
        }
}
//----------------------------------------------------------------
