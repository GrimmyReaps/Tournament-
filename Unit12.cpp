//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit6.h"
#include "Unit12.h"
#include "Unit21.h"
#include "Unit22.h"
#include "Globals.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TGroupSetter4 *GroupSetter4;
//---------------------------------------------------------------------------
__fastcall TGroupSetter4::TGroupSetter4(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TGroupSetter4::Button1Click(TObject *Sender)
{
        Close();
        Form1->WindowState = wsNormal;
}
//---------------------------------------------------------------------------
void __fastcall TGroupSetter4::Button2Click(TObject *Sender)
{
        String PlayerAmount = GroupSetter4->Edit1->Text;
        char ToCheck[4];
        if(PlayerAmount.Length() > 4){
                GroupSetter4->Label2->Caption = "Proszê o podanie realistycznej liczby zawodników.";
                GroupSetter4->Edit1->Text = "";
                GroupSetter4->Edit1->SetFocus();
        }else if(PlayerAmount.Length() == 0){
                GroupSetter4->Label2->Caption = "Proszê o podanie liczby.";
                GroupSetter4->Edit1->Text = "";
                GroupSetter4->Edit1->SetFocus();
        }else{
                //some Ctrl-c Ctrl-v
                strcpy(ToCheck, PlayerAmount.c_str());
                //some Ctrl-c Ctrl-v
                if(ToCheck[0] == '0'){
                        GroupSetter4->Label2->Caption = "Pierwsza cyfra nie mo¿e byæ zerem.";
                                GroupSetter4->Edit1->Text = "";
                                GroupSetter4->Edit1->SetFocus();
                                return;
                }
                for(int i = 0; i < PlayerAmount.Length(); i++){
                        if(ToCheck[i] < '0' || ToCheck[i] > '9'){
                                GroupSetter4->Label2->Caption = "Proszê o podanie liczby.";
                                GroupSetter4->Edit1->Text = "";
                                GroupSetter4->Edit1->SetFocus();
                                return;
                        }
                }
                if(GroupSetter4->Edit1->Text.ToInt() < 16){
                                GroupSetter4->Label2->Caption = "Proszê o podanie realistycznej liczby zawodników.";
                                GroupSetter4->Edit1->Text = "";
                                GroupSetter4->Edit1->SetFocus();
                                return;
                        }
                GroupSetter4->Close();
                //some Ctrl-c Ctrl-v
                int PlayerCounter = GroupSetter4->Edit1->Text.ToInt();
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
                int e = 0;
                int f = 0;
                int g = 0;
                int h = 0;
                int PlayerEighth;
                bool loopEnder = true;
                while(loopEnder == true){
                        if(PlayerCounter%8 == 0 ){
                                PlayerEighth = PlayerCounter/8;
                                loopEnder = false;
                        }else{
                                PlayerCounter++;
                        }
                }
                //some Ctrl-c Ctrl-v
                for(int i = 0; i<PlayerCounter; i++){
                        r = random(8);
                        if(Players[i] != ""){
                                if(r == 0 && a < PlayerEighth){
                                        GroupA[a] = Players[i];
                                        a++;
                                }else if(r == 1 && b < PlayerEighth){
                                        GroupB[b] = Players[i];
                                        b++;
                                }else if(r == 2 && c < PlayerEighth){
                                        GroupC[c] = Players[i];
                                        c++;
                                }else if(r == 3 && d < PlayerEighth){
                                        GroupD[d] = Players[i];
                                        d++;
                                }else if(r == 4 && e < PlayerEighth){
                                        GroupE[e] = Players[i];
                                        e++;
                                }else if(r == 5 && f < PlayerEighth){
                                        GroupF[f] = Players[i];
                                        f++;
                                }else if(r == 6 && g < PlayerEighth){
                                        GroupG[g] = Players[i];
                                        g++;
                                }else if(r == 7 && h < PlayerEighth){
                                        GroupH[h] = Players[i];
                                        h++;
                                }else if(a < PlayerEighth){
                                        GroupA[a] = Players[i];
                                        a++;
                                }else if(b < PlayerEighth){
                                        GroupB[b] = Players[i];
                                        b++;
                                }else if(c < PlayerEighth){
                                        GroupC[c] = Players[i];
                                        c++;
                                }else if(d < PlayerEighth){
                                        GroupD[d] = Players[i];
                                        d++;
                                }else if(e < PlayerEighth){
                                        GroupE[e] = Players[i];
                                        e++;
                                }else if(f < PlayerEighth){
                                        GroupF[f] = Players[i];
                                        f++;
                                }else if(g < PlayerEighth){
                                        GroupG[g] = Players[i];
                                        g++;
                                }else{
                                        GroupH[h] = Players[i];
                                        h++;
                                }
                        }
                }
                //some Ctrl-c Ctrl-v
                ScoreBoardC->StringGrid1->RowCount = a+1;
                ScoreBoardC->StringGrid1->Cells[0][0] = "Nazwa Zawodnika";
                ScoreBoardC->StringGrid1->Cells[1][0] = "Wynik";
                ScoreBoardC->StringGrid1->ColWidths[0] = 150;
                ScoreBoardC->StringGrid1->ColWidths[1] = 60;
                ScoreBoardC->StringGrid1->RowHeights[0] = 16;
                for(int i = 1; i<=a; i++){
                        ScoreBoardC->StringGrid1->RowHeights[i] = 16;
                        ScoreBoardC->StringGrid1->Cells[0][i] = GroupA[i-1];
                        ScoreBoardC->StringGrid1->Cells[1][i] = "0";
                }
                //some Ctrl-c Ctrl-v
                ScoreBoardC->StringGrid2->RowCount = b+1;
                ScoreBoardC->StringGrid2->Cells[0][0] = "Nazwa Zawodnika";
                ScoreBoardC->StringGrid2->Cells[1][0] = "Wynik";
                ScoreBoardC->StringGrid2->ColWidths[0] = 150;
                ScoreBoardC->StringGrid2->ColWidths[1] = 60;
                ScoreBoardC->StringGrid2->RowHeights[0] = 16;
                for(int i = 1; i<=b; i++){
                        ScoreBoardC->StringGrid2->RowHeights[i] = 16;
                        ScoreBoardC->StringGrid2->Cells[0][i] = GroupB[i-1];
                        ScoreBoardC->StringGrid2->Cells[1][i] = "0";
                }
                //some Ctrl-c Ctrl-v
                ScoreBoardC->StringGrid3->RowCount = c+1;
                ScoreBoardC->StringGrid3->Cells[0][0] = "Nazwa Zawodnika";
                ScoreBoardC->StringGrid3->Cells[1][0] = "Wynik";
                ScoreBoardC->StringGrid3->ColWidths[0] = 150;
                ScoreBoardC->StringGrid3->ColWidths[1] = 60;
                ScoreBoardC->StringGrid3->RowHeights[0] = 16;
                for(int i = 1; i<=c; i++){
                        ScoreBoardC->StringGrid3->RowHeights[i] = 16;
                        ScoreBoardC->StringGrid3->Cells[0][i] = GroupC[i-1];
                        ScoreBoardC->StringGrid3->Cells[1][i] = "0";
                }
                //some Ctrl-c Ctrl-v
                ScoreBoardC->StringGrid4->RowCount = d+1;
                ScoreBoardC->StringGrid4->Cells[0][0] = "Nazwa Zawodnika";
                ScoreBoardC->StringGrid4->Cells[1][0] = "Wynik";
                ScoreBoardC->StringGrid4->ColWidths[0] = 150;
                ScoreBoardC->StringGrid4->ColWidths[1] = 60;
                ScoreBoardC->StringGrid4->RowHeights[0] = 16;
                for(int i = 1; i<=d; i++){
                        ScoreBoardC->StringGrid4->RowHeights[i] = 16;
                        ScoreBoardC->StringGrid4->Cells[0][i] = GroupD[i-1];
                        ScoreBoardC->StringGrid4->Cells[1][i] = "0";
                }
                //some Ctrl-c Ctrl-v but group E
                ScoreBoardC->StringGrid5->RowCount = a+1;
                ScoreBoardC->StringGrid5->Cells[0][0] = "Nazwa Zawodnika";
                ScoreBoardC->StringGrid5->Cells[1][0] = "Wynik";
                ScoreBoardC->StringGrid5->ColWidths[0] = 150;
                ScoreBoardC->StringGrid5->ColWidths[1] = 60;
                ScoreBoardC->StringGrid5->RowHeights[0] = 16;
                for(int i = 1; i<=a; i++){
                        ScoreBoardC->StringGrid5->RowHeights[i] = 16;
                        ScoreBoardC->StringGrid5->Cells[0][i] = GroupE[i-1];
                        ScoreBoardC->StringGrid5->Cells[1][i] = "0";
                }
                //some Ctrl-c Ctrl-v but group F
                ScoreBoardC->StringGrid6->RowCount = b+1;
                ScoreBoardC->StringGrid6->Cells[0][0] = "Nazwa Zawodnika";
                ScoreBoardC->StringGrid6->Cells[1][0] = "Wynik";
                ScoreBoardC->StringGrid6->ColWidths[0] = 150;
                ScoreBoardC->StringGrid6->ColWidths[1] = 60;
                ScoreBoardC->StringGrid6->RowHeights[0] = 16;
                for(int i = 1; i<=b; i++){
                        ScoreBoardC->StringGrid6->RowHeights[i] = 16;
                        ScoreBoardC->StringGrid6->Cells[0][i] = GroupF[i-1];
                        ScoreBoardC->StringGrid6->Cells[1][i] = "0";
                }
                //some Ctrl-c Ctrl-v but group G
                ScoreBoardC->StringGrid7->RowCount = c+1;
                ScoreBoardC->StringGrid7->Cells[0][0] = "Nazwa Zawodnika";
                ScoreBoardC->StringGrid7->Cells[1][0] = "Wynik";
                ScoreBoardC->StringGrid7->ColWidths[0] = 150;
                ScoreBoardC->StringGrid7->ColWidths[1] = 60;
                ScoreBoardC->StringGrid7->RowHeights[0] = 16;
                for(int i = 1; i<=c; i++){
                        ScoreBoardC->StringGrid7->RowHeights[i] = 16;
                        ScoreBoardC->StringGrid7->Cells[0][i] = GroupG[i-1];
                        ScoreBoardC->StringGrid7->Cells[1][i] = "0";
                }
                //some Ctrl-c Ctrl-v but group H
                ScoreBoardC->StringGrid8->RowCount = d+1;
                ScoreBoardC->StringGrid8->Cells[0][0] = "Nazwa Zawodnika";
                ScoreBoardC->StringGrid8->Cells[1][0] = "Wynik";
                ScoreBoardC->StringGrid8->ColWidths[0] = 150;
                ScoreBoardC->StringGrid8->ColWidths[1] = 60;
                ScoreBoardC->StringGrid8->RowHeights[0] = 16;
                for(int i = 1; i<=d; i++){
                        ScoreBoardC->StringGrid8->RowHeights[i] = 16;
                        ScoreBoardC->StringGrid8->Cells[0][i] = GroupH[i-1];
                        ScoreBoardC->StringGrid8->Cells[1][i] = "0";
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
                if(e%2 != 0){
                        GroupE[e] = "bye";
                        e++;
                }
                if(f%2 != 0){
                        GroupF[f] = "bye";
                        f++;
                }
                if(g%2 != 0){
                        GroupG[g] = "bye";
                        g++;
                }
                if(h%2 != 0){
                        GroupH[h] = "bye";
                        h++;
                }
                //some Ctrl-c Ctrl-v
                PlayerAmountA = a;
                PlayerAmountB = b;
                PlayerAmountC = c;
                PlayerAmountD = d;
                PlayerAmountE = e;
                PlayerAmountF = f;
                PlayerAmountG = g;
                PlayerAmountH = h;
                //some Ctrl-c Ctrl-v
                EightGroupTournament->Show();
                EightGroupTournament->Button1->Click();
                EightGroupTournament->Button2->Click();
                EightGroupTournament->Button5->Click();
                EightGroupTournament->Button7->Click();
                EightGroupTournament->Button12->Click();
                EightGroupTournament->Button14->Click();
                EightGroupTournament->Button16->Click();
                EightGroupTournament->Button18->Click();
        }
}
//---------------------------------------------------------------------------

