//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit6.h"
#include "Unit11.h"
#include "Unit14.h"
#include "Unit15.h"
#include "Globals.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TGroupSetter3 *GroupSetter3;
//---------------------------------------------------------------------------
__fastcall TGroupSetter3::TGroupSetter3(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TGroupSetter3::Button1Click(TObject *Sender)
{
        Close();
        Form1->WindowState = wsNormal;        
}
//---------------------------------------------------------------------------
void __fastcall TGroupSetter3::Button2Click(TObject *Sender)
{
        String PlayerAmount = GroupSetter3->Edit1->Text;
        char ToCheck[4];
        if(PlayerAmount.Length() > 4){
                GroupSetter3->Label2->Caption = "Proszê o podanie realistycznej liczby zawodników.";
                GroupSetter3->Edit1->Text = "";
                GroupSetter3->Edit1->SetFocus();
        }else if(PlayerAmount.Length() == 0){
                GroupSetter3->Label2->Caption = "Proszê o podanie liczby.";
                GroupSetter3->Edit1->Text = "";
                GroupSetter3->Edit1->SetFocus();
        }else{
                //some Ctrl-c Ctrl-v
                strcpy(ToCheck, PlayerAmount.c_str());
                //some Ctrl-c Ctrl-v
                if(ToCheck[0] == '0'){
                        GroupSetter3->Label2->Caption = "Pierwsza cyfra nie mo¿e byæ zerem.";
                                GroupSetter3->Edit1->Text = "";
                                GroupSetter3->Edit1->SetFocus();
                                return;
                }
                for(int i = 0; i < PlayerAmount.Length(); i++){
                        if(ToCheck[i] < '0' || ToCheck[i] > '9'){
                                GroupSetter3->Label2->Caption = "Proszê o podanie liczby.";
                                GroupSetter3->Edit1->Text = "";
                                GroupSetter3->Edit1->SetFocus();
                                return;
                        }else if(PlayerAmount.Length() == 1 && ToCheck[i] < '8'){
                                GroupSetter3->Label2->Caption = "Proszê o podanie realistycznej liczby zawodników.";
                                GroupSetter3->Edit1->Text = "";
                                GroupSetter3->Edit1->SetFocus();
                                return;
                        }
                }
                GroupSetter3->Close();

                //some Ctrl-c Ctrl-v
                int PlayerCounter = GroupSetter3->Edit1->Text.ToInt();
                String Players[9999];
                for(int i = 0; i<PlayerCounter; i++){
                        NameInput->Edit1->Text = "";
                        NameInput->Label1->Caption = "WprowadŸ zawodnika nr " + IntToStr(i + 1);
                        if(NameInput->ShowModal() == mrOk){
                                Players[i] = NameInput->Edit1->Text;
                                Players[i] = Trim(Players[i]);
                        }
                }
                //some Ctrl-c Ctrl-v
                Randomize();
                int r;
                int a = 0;
                int b = 0;
                int c = 0;
                int d = 0;     
                int PlayerQuarter;
                bool loopEnder = true;
                while(loopEnder == true){
                        if(PlayerCounter%4 == 0 ){
                                PlayerQuarter = PlayerCounter/4;
                                loopEnder = false;
                        }else{
                                PlayerCounter++;
                        }
                }
                //You can do a pointer array in here but at this point I don't wanna change it
                for(int i = 0; i<PlayerCounter; i++){
                        r = random(4);
                        if(Players[i] != ""){
                                if(r == 0 && a < PlayerQuarter){
                                        GroupA[a] = Players[i];
                                        a++;
                                }else if(r == 1 && b < PlayerQuarter){
                                        GroupB[b] = Players[i];
                                        b++;
                                }else if(r == 2 && c < PlayerQuarter){
                                        GroupC[c] = Players[i];
                                        c++;
                                }else if(r == 3 && d < PlayerQuarter){
                                        GroupD[d] = Players[i];
                                        d++;
                                }else if(a < PlayerQuarter){
                                        GroupA[a] = Players[i];
                                        a++;
                                }else if(b < PlayerQuarter){
                                        GroupB[b] = Players[i];
                                        b++;
                                }else if(c < PlayerQuarter){
                                        GroupC[c] = Players[i];
                                        c++;
                                }else{
                                        GroupD[d] = Players[i];
                                        d++;
                                }
                        }
                }
                //some Ctrl-c Ctrl-v
                ScoreBoardB->StringGrid1->RowCount = a+1;
                ScoreBoardB->StringGrid1->Cells[0][0] = "Nazwa Zawodnika";
                ScoreBoardB->StringGrid1->Cells[1][0] = "Wynik";
                ScoreBoardB->StringGrid1->ColWidths[0] = 150;
                ScoreBoardB->StringGrid1->ColWidths[1] = 60;
                ScoreBoardB->StringGrid1->RowHeights[0] = 16;
                for(int i = 1; i<=a; i++){
                        ScoreBoardB->StringGrid1->RowHeights[i] = 16;
                        ScoreBoardB->StringGrid1->Cells[0][i] = GroupA[i-1];
                        ScoreBoardB->StringGrid1->Cells[1][i] = "0";
                }
                //some Ctrl-c Ctrl-v
                ScoreBoardB->StringGrid2->RowCount = b+1;
                ScoreBoardB->StringGrid2->Cells[0][0] = "Nazwa Zawodnika";
                ScoreBoardB->StringGrid2->Cells[1][0] = "Wynik";
                ScoreBoardB->StringGrid2->ColWidths[0] = 150;
                ScoreBoardB->StringGrid2->ColWidths[1] = 60;
                ScoreBoardB->StringGrid2->RowHeights[0] = 16;
                for(int i = 1; i<=b; i++){
                        ScoreBoardB->StringGrid2->RowHeights[i] = 16;
                        ScoreBoardB->StringGrid2->Cells[0][i] = GroupB[i-1];
                        ScoreBoardB->StringGrid2->Cells[1][i] = "0";
                }
                //some Ctrl-c Ctrl-v but group C
                ScoreBoardB->StringGrid3->RowCount = c+1;
                ScoreBoardB->StringGrid3->Cells[0][0] = "Nazwa Zawodnika";
                ScoreBoardB->StringGrid3->Cells[1][0] = "Wynik";
                ScoreBoardB->StringGrid3->ColWidths[0] = 150;
                ScoreBoardB->StringGrid3->ColWidths[1] = 60;
                ScoreBoardB->StringGrid3->RowHeights[0] = 16;
                for(int i = 1; i<=c; i++){
                        ScoreBoardB->StringGrid3->RowHeights[i] = 16;
                        ScoreBoardB->StringGrid3->Cells[0][i] = GroupC[i-1];
                        ScoreBoardB->StringGrid3->Cells[1][i] = "0";
                }
                //some Ctrl-c Ctrl-v but group D
                ScoreBoardB->StringGrid4->RowCount = d+1;
                ScoreBoardB->StringGrid4->Cells[0][0] = "Nazwa Zawodnika";
                ScoreBoardB->StringGrid4->Cells[1][0] = "Wynik";
                ScoreBoardB->StringGrid4->ColWidths[0] = 150;
                ScoreBoardB->StringGrid4->ColWidths[1] = 60;
                ScoreBoardB->StringGrid4->RowHeights[0] = 16;
                for(int i = 1; i<=d; i++){
                        ScoreBoardB->StringGrid4->RowHeights[i] = 16;
                        ScoreBoardB->StringGrid4->Cells[0][i] = GroupD[i-1];
                        ScoreBoardB->StringGrid4->Cells[1][i] = "0";
                }
                //some Ctrl-c Ctrl-v
                if(a%2 != 0){
                        GroupA[a] = "bye";
                        a++;
                }
                if(b%2 != 0){
                        GroupB[b] = "bye";
                        b++;
                }
                if(c%2 != 0){
                        GroupC[c] = "bye";
                        c++;
                }
                if(d%2 != 0){
                        GroupD[d] = "bye";
                        d++;
                }
                //some Ctrl-c Ctrl-v
                PlayerAmountA = a;
                PlayerAmountB = b;
                PlayerAmountC = c;
                PlayerAmountD = d;
                //some Ctrl-c Ctrl-v
                FourGroupTournament->Show();
                FourGroupTournament->Button1->Click();
                FourGroupTournament->Button2->Click();
                FourGroupTournament->Button5->Click();
                FourGroupTournament->Button7->Click();
        }
}
//---------------------------------------------------------------------------
