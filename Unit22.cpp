//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit21.h"
#include "Unit22.h"
#include "Unit23.h"
#include "Unit24.h"
#include "Unit25.h"
#include "Unit26.h"
#include "Unit27.h"
#include "Unit28.h"
#include "Unit29.h"
#include "Unit30.h"
#include "Unit31.h"
#include "Globals.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TEightGroupTournament *EightGroupTournament;
//---------------------------------------------------------------------------
String EndBracketPhaseA = "";
String EndBracketPhaseB = "";
String EndBracketPhaseC = "";
String EndBracketPhaseD = "";
String EndBracketPhaseE = "";
String EndBracketPhaseF = "";
String EndBracketPhaseG = "";
String EndBracketPhaseH = "";
//---------------------------------------------------------------------------
__fastcall TEightGroupTournament::TEightGroupTournament(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TEightGroupTournament::Button9Click(TObject *Sender)
{
        Close();
        Form1->WindowState = wsNormal;
}
//---------------------------------------------------------------------------
void __fastcall TEightGroupTournament::Button10Click(TObject *Sender)
{
        //some Ctrl-c Ctrl-v
        String placeholder;
        bool Swap = true;
        while(Swap == true){
                Swap = false;
                for(int i = 1; i < ScoreBoardC->StringGrid1->RowCount-1; i++){
                        if(ScoreBoardC->StringGrid1->Cells[1][i].ToInt() < ScoreBoardC->StringGrid1->Cells[1][i+1].ToInt()){
                                placeholder = ScoreBoardC->StringGrid1->Cells[1][i];
                                ScoreBoardC->StringGrid1->Cells[1][i] = ScoreBoardC->StringGrid1->Cells[1][i+1];
                                ScoreBoardC->StringGrid1->Cells[1][i+1] = placeholder;
                                placeholder = ScoreBoardC->StringGrid1->Cells[0][i];
                                ScoreBoardC->StringGrid1->Cells[0][i] = ScoreBoardC->StringGrid1->Cells[0][i+1];
                                ScoreBoardC->StringGrid1->Cells[0][i+1] = placeholder;
                                Swap = true;
                        }
                }
        }
        Swap = true;
        while(Swap == true){
                Swap = false;
                for(int i = 1; i < ScoreBoardC->StringGrid2->RowCount-1; i++){
                        if(ScoreBoardC->StringGrid2->Cells[1][i].ToInt() < ScoreBoardC->StringGrid2->Cells[1][i+1].ToInt()){
                                placeholder = ScoreBoardC->StringGrid2->Cells[1][i];
                                ScoreBoardC->StringGrid2->Cells[1][i] = ScoreBoardC->StringGrid2->Cells[1][i+1];
                                ScoreBoardC->StringGrid2->Cells[1][i+1] = placeholder;
                                placeholder = ScoreBoardC->StringGrid2->Cells[0][i];
                                ScoreBoardC->StringGrid2->Cells[0][i] = ScoreBoardC->StringGrid2->Cells[0][i+1];
                                ScoreBoardC->StringGrid2->Cells[0][i+1] = placeholder;
                                Swap = true;
                        }
                }
        }
        Swap = true;
        while(Swap == true){
                Swap = false;
                for(int i = 1; i < ScoreBoardC->StringGrid3->RowCount-1; i++){
                        if(ScoreBoardC->StringGrid3->Cells[1][i].ToInt() < ScoreBoardC->StringGrid3->Cells[1][i+1].ToInt()){
                                placeholder = ScoreBoardC->StringGrid3->Cells[1][i];
                                ScoreBoardC->StringGrid3->Cells[1][i] = ScoreBoardC->StringGrid3->Cells[1][i+1];
                                ScoreBoardC->StringGrid3->Cells[1][i+1] = placeholder;
                                placeholder = ScoreBoardC->StringGrid3->Cells[0][i];
                                ScoreBoardC->StringGrid3->Cells[0][i] = ScoreBoardC->StringGrid3->Cells[0][i+1];
                                ScoreBoardC->StringGrid3->Cells[0][i+1] = placeholder;
                                Swap = true;
                        }
                }
        }
        Swap = true;
        while(Swap == true){
                Swap = false;
                for(int i = 1; i < ScoreBoardC->StringGrid4->RowCount-1; i++){
                        if(ScoreBoardC->StringGrid4->Cells[1][i].ToInt() < ScoreBoardC->StringGrid4->Cells[1][i+1].ToInt()){
                                placeholder = ScoreBoardC->StringGrid4->Cells[1][i];
                                ScoreBoardC->StringGrid4->Cells[1][i] = ScoreBoardC->StringGrid4->Cells[1][i+1];
                                ScoreBoardC->StringGrid4->Cells[1][i+1] = placeholder;
                                placeholder = ScoreBoardC->StringGrid4->Cells[0][i];
                                ScoreBoardC->StringGrid4->Cells[0][i] = ScoreBoardC->StringGrid4->Cells[0][i+1];
                                ScoreBoardC->StringGrid4->Cells[0][i+1] = placeholder;
                                Swap = true;
                        }
                }
        }
        Swap = true;
        while(Swap == true){
                Swap = false;
                for(int i = 1; i < ScoreBoardC->StringGrid5->RowCount-1; i++){
                        if(ScoreBoardC->StringGrid5->Cells[1][i].ToInt() < ScoreBoardC->StringGrid5->Cells[1][i+1].ToInt()){
                                placeholder = ScoreBoardC->StringGrid5->Cells[1][i];
                                ScoreBoardC->StringGrid5->Cells[1][i] = ScoreBoardC->StringGrid5->Cells[1][i+1];
                                ScoreBoardC->StringGrid5->Cells[1][i+1] = placeholder;
                                placeholder = ScoreBoardC->StringGrid5->Cells[0][i];
                                ScoreBoardC->StringGrid5->Cells[0][i] = ScoreBoardC->StringGrid5->Cells[0][i+1];
                                ScoreBoardC->StringGrid5->Cells[0][i+1] = placeholder;
                                Swap = true;
                        }
                }
        }
        Swap = true;
        while(Swap == true){
                Swap = false;
                for(int i = 1; i < ScoreBoardC->StringGrid6->RowCount-1; i++){
                        if(ScoreBoardC->StringGrid6->Cells[1][i].ToInt() < ScoreBoardC->StringGrid6->Cells[1][i+1].ToInt()){
                                placeholder = ScoreBoardC->StringGrid6->Cells[1][i];
                                ScoreBoardC->StringGrid6->Cells[1][i] = ScoreBoardC->StringGrid6->Cells[1][i+1];
                                ScoreBoardC->StringGrid6->Cells[1][i+1] = placeholder;
                                placeholder = ScoreBoardC->StringGrid6->Cells[0][i];
                                ScoreBoardC->StringGrid6->Cells[0][i] = ScoreBoardC->StringGrid6->Cells[0][i+1];
                                ScoreBoardC->StringGrid6->Cells[0][i+1] = placeholder;
                                Swap = true;
                        }
                }
        }
        Swap = true;
        while(Swap == true){
                Swap = false;
                for(int i = 1; i < ScoreBoardC->StringGrid7->RowCount-1; i++){
                        if(ScoreBoardC->StringGrid7->Cells[1][i].ToInt() < ScoreBoardC->StringGrid7->Cells[1][i+1].ToInt()){
                                placeholder = ScoreBoardC->StringGrid7->Cells[1][i];
                                ScoreBoardC->StringGrid7->Cells[1][i] = ScoreBoardC->StringGrid7->Cells[1][i+1];
                                ScoreBoardC->StringGrid7->Cells[1][i+1] = placeholder;
                                placeholder = ScoreBoardC->StringGrid7->Cells[0][i];
                                ScoreBoardC->StringGrid7->Cells[0][i] = ScoreBoardC->StringGrid7->Cells[0][i+1];
                                ScoreBoardC->StringGrid7->Cells[0][i+1] = placeholder;
                                Swap = true;
                        }
                }
        }
        Swap = true;
        while(Swap == true){
                Swap = false;
                for(int i = 1; i < ScoreBoardC->StringGrid8->RowCount-1; i++){
                        if(ScoreBoardC->StringGrid8->Cells[1][i].ToInt() < ScoreBoardC->StringGrid8->Cells[1][i+1].ToInt()){
                                placeholder = ScoreBoardC->StringGrid8->Cells[1][i];
                                ScoreBoardC->StringGrid8->Cells[1][i] = ScoreBoardC->StringGrid8->Cells[1][i+1];
                                ScoreBoardC->StringGrid8->Cells[1][i+1] = placeholder;
                                placeholder = ScoreBoardC->StringGrid8->Cells[0][i];
                                ScoreBoardC->StringGrid8->Cells[0][i] = ScoreBoardC->StringGrid8->Cells[0][i+1];
                                ScoreBoardC->StringGrid8->Cells[0][i+1] = placeholder;
                                Swap = true;
                        }
                }
        }
        //Pokazanie tablicy wyników w trybie modalnym
        ScoreBoardC->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TEightGroupTournament::Button4Click(TObject *Sender)
{
        //Orygina³ w Unit5
        int idx = GroupABracket->ItemIndex;
        if( idx == -1 )
                return;

        //Orygina³ w Unit5
        LittleHelper = idx;

        //Orygina³ w Unit5
        int VSPosition = AnsiPos(" VS ", GroupABracket->Items->Strings[idx]);
        ScoreGetterGroupA8->NameLeft->Caption = GroupABracket->Items->Strings[idx].SubString(1, VSPosition-1);
        ScoreGetterGroupA8->NameRight->Caption = GroupABracket->Items->Strings[idx].SubString(VSPosition+4, GroupABracket->Items->Strings[idx].Length()-VSPosition+4);

        //Orygina³ w Unit5
        if(CompareStr(ScoreGetterGroupA8->NameLeft->Caption, "bye") == 0){
                ScoreGetterGroupA8->Edit1->Text = "0";
                ScoreGetterGroupA8->Edit2->Text = "1";
                ScoreGetterGroupA8->Button2->Click();
                ScoreGetterGroupA8->Edit1->Text = "";
                ScoreGetterGroupA8->Edit2->Text = "";
        }else if(CompareStr(ScoreGetterGroupA8->NameRight->Caption, "bye") == 0){
                ScoreGetterGroupA8->Edit1->Text = "1";
                ScoreGetterGroupA8->Edit2->Text = "0";
                ScoreGetterGroupA8->Button2->Click();
                ScoreGetterGroupA8->Edit1->Text = "";
                ScoreGetterGroupA8->Edit2->Text = "";
        }else{
                //Utworzenie okna modalnego bez u¿ywania ShowModal
                EightGroupTournament->Enabled = false;
                ScoreGetterGroupA8->Show();
        }
}
//---------------------------------------------------------------------------

void __fastcall TEightGroupTournament::Button3Click(TObject *Sender)
{
//Orygina³ w Unit5
        int idx = GroupBBracket->ItemIndex;
        if( idx == -1 )
                return;

        //Orygina³ w Unit5
        LittleHelper = idx;

        //Orygina³ w Unit5
        int VSPosition = AnsiPos(" VS ", GroupBBracket->Items->Strings[idx]);
        ScoreGetterGroupB8->NameLeft->Caption = GroupBBracket->Items->Strings[idx].SubString(1, VSPosition-1);
        ScoreGetterGroupB8->NameRight->Caption = GroupBBracket->Items->Strings[idx].SubString(VSPosition+4, GroupBBracket->Items->Strings[idx].Length()-VSPosition+4);

        //Orygina³ w Unit5
        if(CompareStr(ScoreGetterGroupB8->NameLeft->Caption, "bye") == 0){
                ScoreGetterGroupB8->Edit1->Text = "0";
                ScoreGetterGroupB8->Edit2->Text = "1";
                ScoreGetterGroupB8->Button2->Click();
                ScoreGetterGroupB8->Edit1->Text = "";
                ScoreGetterGroupB8->Edit2->Text = "";
        }else if(CompareStr(ScoreGetterGroupB8->NameRight->Caption, "bye") == 0){
                ScoreGetterGroupB8->Edit1->Text = "1";
                ScoreGetterGroupB8->Edit2->Text = "0";
                ScoreGetterGroupB8->Button2->Click();
                ScoreGetterGroupB8->Edit1->Text = "";
                ScoreGetterGroupB8->Edit2->Text = "";
        }else{
                //Utworzenie okna modalnego bez u¿ywania ShowModal
                EightGroupTournament->Enabled = false;
                ScoreGetterGroupB8->Show();
        }
}
//---------------------------------------------------------------------------

void __fastcall TEightGroupTournament::Button6Click(TObject *Sender)
{
        //Orygina³ w Unit5
        int idx = GroupCBracket->ItemIndex;
        if( idx == -1 )
                return;

        //Orygina³ w Unit5
        LittleHelper = idx;

        //Orygina³ w Unit5
        int VSPosition = AnsiPos(" VS ", GroupCBracket->Items->Strings[idx]);
        ScoreGetterGroupC8->NameLeft->Caption = GroupCBracket->Items->Strings[idx].SubString(1, VSPosition-1);
        ScoreGetterGroupC8->NameRight->Caption = GroupCBracket->Items->Strings[idx].SubString(VSPosition+4, GroupCBracket->Items->Strings[idx].Length()-VSPosition+4);

        //Orygina³ w Unit5
        if(CompareStr(ScoreGetterGroupC8->NameLeft->Caption, "bye") == 0){
                ScoreGetterGroupC8->Edit1->Text = "0";
                ScoreGetterGroupC8->Edit2->Text = "1";
                ScoreGetterGroupC8->Button2->Click();
                ScoreGetterGroupC8->Edit1->Text = "";
                ScoreGetterGroupC8->Edit2->Text = "";
        }else if(CompareStr(ScoreGetterGroupC8->NameRight->Caption, "bye") == 0){
                ScoreGetterGroupC8->Edit1->Text = "1";
                ScoreGetterGroupC8->Edit2->Text = "0";
                ScoreGetterGroupC8->Button2->Click();
                ScoreGetterGroupC8->Edit1->Text = "";
                ScoreGetterGroupC8->Edit2->Text = "";
        }else{
                //Utworzenie okna modalnego bez u¿ywania ShowModal
                EightGroupTournament->Enabled = false;
                ScoreGetterGroupC8->Show();
        }
}
//---------------------------------------------------------------------------

void __fastcall TEightGroupTournament::Button8Click(TObject *Sender)
{
        //Orygina³ w Unit5
        int idx = GroupDBracket->ItemIndex;
        if( idx == -1 )
                return;

        //Orygina³ w Unit5
        LittleHelper = idx;

        //Orygina³ w Unit5
        int VSPosition = AnsiPos(" VS ", GroupDBracket->Items->Strings[idx]);
        ScoreGetterGroupD8->NameLeft->Caption = GroupDBracket->Items->Strings[idx].SubString(1, VSPosition-1);
        ScoreGetterGroupD8->NameRight->Caption = GroupDBracket->Items->Strings[idx].SubString(VSPosition+4, GroupDBracket->Items->Strings[idx].Length()-VSPosition+4);

        //Orygina³ w Unit5
        if(CompareStr(ScoreGetterGroupD8->NameLeft->Caption, "bye") == 0){
                ScoreGetterGroupD8->Edit1->Text = "0";
                ScoreGetterGroupD8->Edit2->Text = "1";
                ScoreGetterGroupD8->Button2->Click();
                ScoreGetterGroupD8->Edit1->Text = "";
                ScoreGetterGroupD8->Edit2->Text = "";
        }else if(CompareStr(ScoreGetterGroupD8->NameRight->Caption, "bye") == 0){
                ScoreGetterGroupD8->Edit1->Text = "1";
                ScoreGetterGroupD8->Edit2->Text = "0";
                ScoreGetterGroupD8->Button2->Click();
                ScoreGetterGroupD8->Edit1->Text = "";
                ScoreGetterGroupD8->Edit2->Text = "";
        }else{
                //Utworzenie okna modalnego bez u¿ywania ShowModal
                EightGroupTournament->Enabled = false;
                ScoreGetterGroupD8->Show();
        }
}
//---------------------------------------------------------------------------

void __fastcall TEightGroupTournament::Button13Click(TObject *Sender)
{
        //Orygina³ w Unit5
        int idx = GroupEBracket->ItemIndex;
        if( idx == -1 )
                return;

        //Orygina³ w Unit5
        LittleHelper = idx;

        //Orygina³ w Unit5
        int VSPosition = AnsiPos(" VS ", GroupEBracket->Items->Strings[idx]);
        ScoreGetterGroupE8->NameLeft->Caption = GroupEBracket->Items->Strings[idx].SubString(1, VSPosition-1);
        ScoreGetterGroupE8->NameRight->Caption = GroupEBracket->Items->Strings[idx].SubString(VSPosition+4, GroupEBracket->Items->Strings[idx].Length()-VSPosition+4);

        //Orygina³ w Unit5
        if(CompareStr(ScoreGetterGroupE8->NameLeft->Caption, "bye") == 0){
                ScoreGetterGroupE8->Edit1->Text = "0";
                ScoreGetterGroupE8->Edit2->Text = "1";
                ScoreGetterGroupE8->Button2->Click();
                ScoreGetterGroupE8->Edit1->Text = "";
                ScoreGetterGroupE8->Edit2->Text = "";
        }else if(CompareStr(ScoreGetterGroupE8->NameRight->Caption, "bye") == 0){
                ScoreGetterGroupE8->Edit1->Text = "1";
                ScoreGetterGroupE8->Edit2->Text = "0";
                ScoreGetterGroupE8->Button2->Click();
                ScoreGetterGroupE8->Edit1->Text = "";
                ScoreGetterGroupE8->Edit2->Text = "";
        }else{
                //Utworzenie okna modalnego bez u¿ywania ShowModal
                EightGroupTournament->Enabled = false;
                ScoreGetterGroupE8->Show();
        }
}
//---------------------------------------------------------------------------

void __fastcall TEightGroupTournament::Button15Click(TObject *Sender)
{
        //Orygina³ w Unit5
        int idx = GroupFBracket->ItemIndex;
        if( idx == -1 )
                return;

        //Orygina³ w Unit5
        LittleHelper = idx;

        //Orygina³ w Unit5
        int VSPosition = AnsiPos(" VS ", GroupFBracket->Items->Strings[idx]);
        ScoreGetterGroupF8->NameLeft->Caption = GroupFBracket->Items->Strings[idx].SubString(1, VSPosition-1);
        ScoreGetterGroupF8->NameRight->Caption = GroupFBracket->Items->Strings[idx].SubString(VSPosition+4, GroupFBracket->Items->Strings[idx].Length()-VSPosition+4);

        //Orygina³ w Unit5
        if(CompareStr(ScoreGetterGroupF8->NameLeft->Caption, "bye") == 0){
                ScoreGetterGroupF8->Edit1->Text = "0";
                ScoreGetterGroupF8->Edit2->Text = "1";
                ScoreGetterGroupF8->Button2->Click();
                ScoreGetterGroupF8->Edit1->Text = "";
                ScoreGetterGroupF8->Edit2->Text = "";
        }else if(CompareStr(ScoreGetterGroupF8->NameRight->Caption, "bye") == 0){
                ScoreGetterGroupF8->Edit1->Text = "1";
                ScoreGetterGroupF8->Edit2->Text = "0";
                ScoreGetterGroupF8->Button2->Click();
                ScoreGetterGroupF8->Edit1->Text = "";
                ScoreGetterGroupF8->Edit2->Text = "";
        }else{
                //Utworzenie okna modalnego bez u¿ywania ShowModal
                EightGroupTournament->Enabled = false;
                ScoreGetterGroupF8->Show();
        }
}
//---------------------------------------------------------------------------

void __fastcall TEightGroupTournament::Button17Click(TObject *Sender)
{
        //Orygina³ w Unit5
        int idx = GroupGBracket->ItemIndex;
        if( idx == -1 )
                return;

        //Orygina³ w Unit5
        LittleHelper = idx;

        //Orygina³ w Unit5
        int VSPosition = AnsiPos(" VS ", GroupGBracket->Items->Strings[idx]);
        ScoreGetterGroupG8->NameLeft->Caption = GroupGBracket->Items->Strings[idx].SubString(1, VSPosition-1);
        ScoreGetterGroupG8->NameRight->Caption = GroupGBracket->Items->Strings[idx].SubString(VSPosition+4, GroupGBracket->Items->Strings[idx].Length()-VSPosition+4);

        //Orygina³ w Unit5
        if(CompareStr(ScoreGetterGroupG8->NameLeft->Caption, "bye") == 0){
                ScoreGetterGroupG8->Edit1->Text = "0";
                ScoreGetterGroupG8->Edit2->Text = "1";
                ScoreGetterGroupG8->Button2->Click();
                ScoreGetterGroupG8->Edit1->Text = "";
                ScoreGetterGroupG8->Edit2->Text = "";
        }else if(CompareStr(ScoreGetterGroupG8->NameRight->Caption, "bye") == 0){
                ScoreGetterGroupG8->Edit1->Text = "1";
                ScoreGetterGroupG8->Edit2->Text = "0";
                ScoreGetterGroupG8->Button2->Click();
                ScoreGetterGroupG8->Edit1->Text = "";
                ScoreGetterGroupG8->Edit2->Text = "";
        }else{
                //Utworzenie okna modalnego bez u¿ywania ShowModal
                EightGroupTournament->Enabled = false;
                ScoreGetterGroupG8->Show();
        }
}
//---------------------------------------------------------------------------

void __fastcall TEightGroupTournament::Button19Click(TObject *Sender)
{
        //Orygina³ w Unit5
        int idx = GroupHBracket->ItemIndex;
        if( idx == -1 )
                return;

        //Orygina³ w Unit5
        LittleHelper = idx;

        //Orygina³ w Unit5
        int VSPosition = AnsiPos(" VS ", GroupHBracket->Items->Strings[idx]);
        ScoreGetterGroupH8->NameLeft->Caption = GroupHBracket->Items->Strings[idx].SubString(1, VSPosition-1);
        ScoreGetterGroupH8->NameRight->Caption = GroupHBracket->Items->Strings[idx].SubString(VSPosition+4, GroupHBracket->Items->Strings[idx].Length()-VSPosition+4);

        //Orygina³ w Unit5
        if(CompareStr(ScoreGetterGroupH8->NameLeft->Caption, "bye") == 0){
                ScoreGetterGroupH8->Edit1->Text = "0";
                ScoreGetterGroupH8->Edit2->Text = "1";
                ScoreGetterGroupH8->Button2->Click();
                ScoreGetterGroupH8->Edit1->Text = "";
                ScoreGetterGroupH8->Edit2->Text = "";
        }else if(CompareStr(ScoreGetterGroupH8->NameRight->Caption, "bye") == 0){
                ScoreGetterGroupH8->Edit1->Text = "1";
                ScoreGetterGroupH8->Edit2->Text = "0";
                ScoreGetterGroupH8->Button2->Click();
                ScoreGetterGroupH8->Edit1->Text = "";
                ScoreGetterGroupH8->Edit2->Text = "";
        }else{
                //Utworzenie okna modalnego bez u¿ywania ShowModal
                EightGroupTournament->Enabled = false;
                ScoreGetterGroupH8->Show();
        }
}
//---------------------------------------------------------------------------

void __fastcall TEightGroupTournament::Button1Click(TObject *Sender)
{
        if(GroupABracket->ItemIndex != -1){
                ShowMessage("Nie zosta³y rozegrane jeszcze wszystkie mecze!");
                return;
        }

        //Nadanie warunku koñca turnieju
        if(EndBracketPhaseA == ""){
                EndBracketPhaseA = GroupA[1];
        }
        //Iloœæ meczy w danej kolejce
        int LoopCounter = (PlayerAmountA)/2;
        int CountDown = PlayerAmountA-1;
        GroupABracket->Clear();
        for(int i = 0; i<LoopCounter; i++){
                int idx = GroupABracket->Items->Add(AnsiString(GroupA[i] + " VS " + GroupA[CountDown]));
                GroupABracket->ItemIndex = idx;
                CountDown--;
        }
        //Przycisk siê zablokuje po wykonaniu wszystkich kolejek
        String placeholder = GroupA[1];
        for(int i = 1; i<(PlayerAmountA-1); i++){
                GroupA[i] = GroupA[i+1];
        }
        GroupA[PlayerAmountA-1] = placeholder;
        if(CompareStr(EndBracketPhaseA, GroupA[1]) == 0){
                Button1->Enabled = false;
        }
        //Przycisk koñca turnieju poka¿e i odblokuje siê je¿eli wszystkie przyciski s¹ zablokowane
        if(((Button2->Enabled == false && Button1->Enabled == false) && (Button12->Enabled == false && Button14->Enabled == false)) && ((Button16->Enabled == false && Button18->Enabled == false) && (Button5->Enabled == false && Button7->Enabled == false))){
                Button11->Visible = true;
                Button11->Enabled = true;
        }
}
//---------------------------------------------------------------------------

void __fastcall TEightGroupTournament::Button2Click(TObject *Sender)
{
        if(GroupBBracket->ItemIndex != -1){
                ShowMessage("Nie zosta³y rozegrane jeszcze wszystkie mecze!");
                return;
        }

        //Nadanie warunku koñca turnieju
        if(EndBracketPhaseB == ""){
                EndBracketPhaseB = GroupB[1];
        }
        //Iloœæ meczy w danej kolejce
        int LoopCounter = (PlayerAmountB)/2;
        int CountDown = PlayerAmountB-1;
        GroupBBracket->Clear();
        for(int i = 0; i<LoopCounter; i++){
                int idx = GroupBBracket->Items->Add(AnsiString(GroupB[i] + " VS " + GroupB[CountDown]));
                GroupBBracket->ItemIndex = idx;
                CountDown--;
        }
        //Przycisk siê zablokuje po wykonaniu wszystkich kolejek
        String placeholder = GroupB[1];
        for(int i = 1; i<(PlayerAmountB-1); i++){
                GroupB[i] = GroupB[i+1];
        }
        GroupB[PlayerAmountB-1] = placeholder;
        if(CompareStr(EndBracketPhaseB, GroupB[1]) == 0){
                Button2->Enabled = false;
        }
        //Przycisk koñca turnieju poka¿e i odblokuje siê je¿eli wszystkie przyciski s¹ zablokowane
        if(((Button2->Enabled == false && Button1->Enabled == false) && (Button12->Enabled == false && Button14->Enabled == false)) && ((Button16->Enabled == false && Button18->Enabled == false) && (Button5->Enabled == false && Button7->Enabled == false))){
                Button11->Visible = true;
                Button11->Enabled = true;
        }
}
//---------------------------------------------------------------------------

void __fastcall TEightGroupTournament::Button5Click(TObject *Sender)
{
        if(GroupCBracket->ItemIndex != -1){
                ShowMessage("Nie zosta³y rozegrane jeszcze wszystkie mecze!");
                return;
        }

        //Nadanie warunku koñca turnieju
        if(EndBracketPhaseC == ""){
                EndBracketPhaseC = GroupC[1];
        }
        //Iloœæ meczy w danej kolejce
        int LoopCounter = (PlayerAmountC)/2;
        int CountDown = PlayerAmountC-1;
        GroupCBracket->Clear();
        for(int i = 0; i<LoopCounter; i++){
                int idx = GroupCBracket->Items->Add(AnsiString(GroupC[i] + " VS " + GroupC[CountDown]));
                GroupCBracket->ItemIndex = idx;
                CountDown--;
        }
        //Przycisk siê zablokuje po wykonaniu wszystkich kolejek
        String placeholder = GroupC[1];
        for(int i = 1; i<(PlayerAmountC-1); i++){
                GroupC[i] = GroupC[i+1];
        }      
        GroupC[PlayerAmountC-1] = placeholder;
        if(CompareStr(EndBracketPhaseC, GroupC[1]) == 0){
                Button5->Enabled = false;
        }
        //Przycisk koñca turnieju poka¿e i odblokuje siê je¿eli wszystkie przyciski s¹ zablokowane
        if(((Button2->Enabled == false && Button1->Enabled == false) && (Button12->Enabled == false && Button14->Enabled == false)) && ((Button16->Enabled == false && Button18->Enabled == false) && (Button5->Enabled == false && Button7->Enabled == false))){
                Button11->Visible = true;
                Button11->Enabled = true;
        }
}
//---------------------------------------------------------------------------

void __fastcall TEightGroupTournament::Button7Click(TObject *Sender)
{
        if(GroupDBracket->ItemIndex != -1){
                ShowMessage("Nie zosta³y rozegrane jeszcze wszystkie mecze!");
                return;
        }

        //Nadanie warunku koñca turnieju
        if(EndBracketPhaseD == ""){
                EndBracketPhaseD = GroupD[1];
        }
        //Iloœæ meczy w danej kolejce
        int LoopCounter = (PlayerAmountD)/2;
        int CountDown = PlayerAmountD-1;
        GroupDBracket->Clear();
        for(int i = 0; i<LoopCounter; i++){
                int idx = GroupDBracket->Items->Add(AnsiString(GroupD[i] + " VS " + GroupD[CountDown]));
                GroupDBracket->ItemIndex = idx;
                CountDown--;
        }
        //Przycisk siê zablokuje po wykonaniu wszystkich kolejek
        String placeholder = GroupD[1];
        for(int i = 1; i<(PlayerAmountD-1); i++){
                GroupD[i] = GroupD[i+1];
        }
        GroupD[PlayerAmountD-1] = placeholder;
        if(CompareStr(EndBracketPhaseD, GroupD[1]) == 0){
                Button7->Enabled = false;
        }
        //Przycisk koñca turnieju poka¿e i odblokuje siê je¿eli wszystkie przyciski s¹ zablokowane
        if(((Button2->Enabled == false && Button1->Enabled == false) && (Button12->Enabled == false && Button14->Enabled == false)) && ((Button16->Enabled == false && Button18->Enabled == false) && (Button5->Enabled == false && Button7->Enabled == false))){
                Button11->Visible = true;
                Button11->Enabled = true;
        }
}
//---------------------------------------------------------------------------

void __fastcall TEightGroupTournament::Button12Click(TObject *Sender)
{
        if(GroupEBracket->ItemIndex != -1){
                ShowMessage("Nie zosta³y rozegrane jeszcze wszystkie mecze!");
                return;
        }

        //Nadanie warunku koñca turnieju
        if(EndBracketPhaseE == ""){
                EndBracketPhaseE = GroupE[1];
        }
        //Iloœæ meczy w danej kolejce
        int LoopCounter = (PlayerAmountE)/2;
        int CountDown = PlayerAmountE-1;
        GroupEBracket->Clear();
        for(int i = 0; i<LoopCounter; i++){
                int idx = GroupEBracket->Items->Add(AnsiString(GroupE[i] + " VS " + GroupE[CountDown]));
                GroupEBracket->ItemIndex = idx;
                CountDown--;
        }
        //Przycisk siê zablokuje po wykonaniu wszystkich kolejek
        String placeholder = GroupE[1];
        for(int i = 1; i<(PlayerAmountE-1); i++){
                GroupE[i] = GroupE[i+1];
        }
        GroupE[PlayerAmountE-1] = placeholder;
        if(CompareStr(EndBracketPhaseE, GroupE[1]) == 0){
                Button12->Enabled = false;
        }
        //Przycisk koñca turnieju poka¿e i odblokuje siê je¿eli wszystkie przyciski s¹ zablokowane
        if(((Button2->Enabled == false && Button1->Enabled == false) && (Button12->Enabled == false && Button14->Enabled == false)) && ((Button16->Enabled == false && Button18->Enabled == false) && (Button5->Enabled == false && Button7->Enabled == false))){
                Button11->Visible = true;
                Button11->Enabled = true;
        }
}
//---------------------------------------------------------------------------

void __fastcall TEightGroupTournament::Button14Click(TObject *Sender)
{
        if(GroupFBracket->ItemIndex != -1){
                ShowMessage("Nie zosta³y rozegrane jeszcze wszystkie mecze!");
                return;
        }

        //Nadanie warunku koñca turnieju
        if(EndBracketPhaseF == ""){
                EndBracketPhaseF = GroupF[1];
        }
        //Iloœæ meczy w danej kolejce
        int LoopCounter = (PlayerAmountF)/2;
        int CountDown = PlayerAmountF-1;
        GroupFBracket->Clear();
        for(int i = 0; i<LoopCounter; i++){
                int idx = GroupFBracket->Items->Add(AnsiString(GroupF[i] + " VS " + GroupF[CountDown]));
                GroupFBracket->ItemIndex = idx;
                CountDown--;
        }
        //Przycisk siê zablokuje po wykonaniu wszystkich kolejek
        String placeholder = GroupF[1];
        for(int i = 1; i<(PlayerAmountF-1); i++){
                GroupF[i] = GroupF[i+1];
        }
        GroupF[PlayerAmountF-1] = placeholder;
        if(CompareStr(EndBracketPhaseF, GroupF[1]) == 0){
                Button14->Enabled = false;
        }
        //Przycisk koñca turnieju poka¿e i odblokuje siê je¿eli wszystkie przyciski s¹ zablokowane
        if(((Button2->Enabled == false && Button1->Enabled == false) && (Button12->Enabled == false && Button14->Enabled == false)) && ((Button16->Enabled == false && Button18->Enabled == false) && (Button5->Enabled == false && Button7->Enabled == false))){
                Button11->Visible = true;
                Button11->Enabled = true;
        }
}
//---------------------------------------------------------------------------

void __fastcall TEightGroupTournament::Button16Click(TObject *Sender)
{
        if(GroupGBracket->ItemIndex != -1){
                ShowMessage("Nie zosta³y rozegrane jeszcze wszystkie mecze!");
                return;
        }

        //Nadanie warunku koñca turnieju
        if(EndBracketPhaseG == ""){
                EndBracketPhaseG = GroupG[1];
        }
        //Iloœæ meczy w danej kolejce
        int LoopCounter = (PlayerAmountG)/2;
        int CountDown = PlayerAmountG-1;
        GroupGBracket->Clear();
        for(int i = 0; i<LoopCounter; i++){
                int idx = GroupGBracket->Items->Add(AnsiString(GroupG[i] + " VS " + GroupG[CountDown]));
                GroupGBracket->ItemIndex = idx;
                CountDown--;
        }
        //Przycisk siê zablokuje po wykonaniu wszystkich kolejek
        String placeholder = GroupG[1];
        for(int i = 1; i<(PlayerAmountG-1); i++){
                GroupG[i] = GroupG[i+1];
        }
        GroupG[PlayerAmountG-1] = placeholder;
        if(CompareStr(EndBracketPhaseG, GroupG[1]) == 0){
                Button16->Enabled = false;
        }
        //Przycisk koñca turnieju poka¿e i odblokuje siê je¿eli wszystkie przyciski s¹ zablokowane
        if(((Button2->Enabled == false && Button1->Enabled == false) && (Button12->Enabled == false && Button14->Enabled == false)) && ((Button16->Enabled == false && Button18->Enabled == false) && (Button5->Enabled == false && Button7->Enabled == false))){
                Button11->Visible = true;
                Button11->Enabled = true;
        }
}
//---------------------------------------------------------------------------

void __fastcall TEightGroupTournament::Button18Click(TObject *Sender)
{
        if(GroupHBracket->ItemIndex != -1){
                ShowMessage("Nie zosta³y rozegrane jeszcze wszystkie mecze!");
                return;
        }

        //Nadanie warunku koñca turnieju
        if(EndBracketPhaseH == ""){
                EndBracketPhaseH = GroupH[1];
        }
        //Iloœæ meczy w danej kolejce
        int LoopCounter = (PlayerAmountH)/2;
        int CountDown = PlayerAmountH-1;
        GroupHBracket->Clear();
        for(int i = 0; i<LoopCounter; i++){
                int idx = GroupHBracket->Items->Add(AnsiString(GroupH[i] + " VS " + GroupH[CountDown]));
                GroupHBracket->ItemIndex = idx;
                CountDown--;
        }
        //Przycisk siê zablokuje po wykonaniu wszystkich kolejek
        String placeholder = GroupH[1];
        for(int i = 1; i<(PlayerAmountH-1); i++){
                GroupH[i] = GroupH[i+1];
        }
        GroupH[PlayerAmountH-1] = placeholder;
        if(CompareStr(EndBracketPhaseH, GroupH[1]) == 0){
                Button18->Enabled = false;
        }
        //Przycisk koñca turnieju poka¿e i odblokuje siê je¿eli wszystkie przyciski s¹ zablokowane
        if(((Button2->Enabled == false && Button1->Enabled == false) && (Button12->Enabled == false && Button14->Enabled == false)) && ((Button16->Enabled == false && Button18->Enabled == false) && (Button5->Enabled == false && Button7->Enabled == false))){
                Button11->Visible = true;
                Button11->Enabled = true;
        }
}
//---------------------------------------------------------------------------

void __fastcall TEightGroupTournament::Button11Click(TObject *Sender)
{
        //Sortowanie Tablicy wzglêdem wyniku
        //Bydymy typowaæ wygranych
        String placeholder;
        bool Swap = true;
        while(Swap == true){
                Swap = false;
                for(int i = 1; i < ScoreBoardC->StringGrid1->RowCount-1; i++){
                        if(ScoreBoardC->StringGrid1->Cells[1][i].ToInt() < ScoreBoardC->StringGrid1->Cells[1][i+1].ToInt()){
                                placeholder = ScoreBoardC->StringGrid1->Cells[1][i];
                                ScoreBoardC->StringGrid1->Cells[1][i] = ScoreBoardC->StringGrid1->Cells[1][i+1];
                                ScoreBoardC->StringGrid1->Cells[1][i+1] = placeholder;
                                placeholder = ScoreBoardC->StringGrid1->Cells[0][i];
                                ScoreBoardC->StringGrid1->Cells[0][i] = ScoreBoardC->StringGrid1->Cells[0][i+1];
                                ScoreBoardC->StringGrid1->Cells[0][i+1] = placeholder;
                                Swap = true;
                        }
                }
        }
        Swap = true;
        while(Swap == true){
                Swap = false;
                for(int i = 1; i < ScoreBoardC->StringGrid2->RowCount-1; i++){
                        if(ScoreBoardC->StringGrid2->Cells[1][i].ToInt() < ScoreBoardC->StringGrid2->Cells[1][i+1].ToInt()){
                                placeholder = ScoreBoardC->StringGrid2->Cells[1][i];
                                ScoreBoardC->StringGrid2->Cells[1][i] = ScoreBoardC->StringGrid2->Cells[1][i+1];
                                ScoreBoardC->StringGrid2->Cells[1][i+1] = placeholder;
                                placeholder = ScoreBoardC->StringGrid2->Cells[0][i];
                                ScoreBoardC->StringGrid2->Cells[0][i] = ScoreBoardC->StringGrid2->Cells[0][i+1];
                                ScoreBoardC->StringGrid2->Cells[0][i+1] = placeholder;
                                Swap = true;
                        }
                }
        }
        Swap = true;
        while(Swap == true){
                Swap = false;
                for(int i = 1; i < ScoreBoardC->StringGrid3->RowCount-1; i++){
                        if(ScoreBoardC->StringGrid3->Cells[1][i].ToInt() < ScoreBoardC->StringGrid3->Cells[1][i+1].ToInt()){
                                placeholder = ScoreBoardC->StringGrid3->Cells[1][i];
                                ScoreBoardC->StringGrid3->Cells[1][i] = ScoreBoardC->StringGrid3->Cells[1][i+1];
                                ScoreBoardC->StringGrid3->Cells[1][i+1] = placeholder;
                                placeholder = ScoreBoardC->StringGrid3->Cells[0][i];
                                ScoreBoardC->StringGrid3->Cells[0][i] = ScoreBoardC->StringGrid3->Cells[0][i+1];
                                ScoreBoardC->StringGrid3->Cells[0][i+1] = placeholder;
                                Swap = true;
                        }
                }
        }
        Swap = true;
        while(Swap == true){
                Swap = false;
                for(int i = 1; i < ScoreBoardC->StringGrid4->RowCount-1; i++){
                        if(ScoreBoardC->StringGrid4->Cells[1][i].ToInt() < ScoreBoardC->StringGrid4->Cells[1][i+1].ToInt()){
                                placeholder = ScoreBoardC->StringGrid4->Cells[1][i];
                                ScoreBoardC->StringGrid4->Cells[1][i] = ScoreBoardC->StringGrid4->Cells[1][i+1];
                                ScoreBoardC->StringGrid4->Cells[1][i+1] = placeholder;
                                placeholder = ScoreBoardC->StringGrid4->Cells[0][i];
                                ScoreBoardC->StringGrid4->Cells[0][i] = ScoreBoardC->StringGrid4->Cells[0][i+1];
                                ScoreBoardC->StringGrid4->Cells[0][i+1] = placeholder;
                                Swap = true;
                        }
                }
        }
        Swap = true;
        while(Swap == true){
                Swap = false;
                for(int i = 1; i < ScoreBoardC->StringGrid5->RowCount-1; i++){
                        if(ScoreBoardC->StringGrid5->Cells[1][i].ToInt() < ScoreBoardC->StringGrid5->Cells[1][i+1].ToInt()){
                                placeholder = ScoreBoardC->StringGrid5->Cells[1][i];
                                ScoreBoardC->StringGrid5->Cells[1][i] = ScoreBoardC->StringGrid5->Cells[1][i+1];
                                ScoreBoardC->StringGrid5->Cells[1][i+1] = placeholder;
                                placeholder = ScoreBoardC->StringGrid5->Cells[0][i];
                                ScoreBoardC->StringGrid5->Cells[0][i] = ScoreBoardC->StringGrid5->Cells[0][i+1];
                                ScoreBoardC->StringGrid5->Cells[0][i+1] = placeholder;
                                Swap = true;
                        }
                }
        }
        Swap = true;
        while(Swap == true){
                Swap = false;
                for(int i = 1; i < ScoreBoardC->StringGrid6->RowCount-1; i++){
                        if(ScoreBoardC->StringGrid6->Cells[1][i].ToInt() < ScoreBoardC->StringGrid6->Cells[1][i+1].ToInt()){
                                placeholder = ScoreBoardC->StringGrid6->Cells[1][i];
                                ScoreBoardC->StringGrid6->Cells[1][i] = ScoreBoardC->StringGrid6->Cells[1][i+1];
                                ScoreBoardC->StringGrid6->Cells[1][i+1] = placeholder;
                                placeholder = ScoreBoardC->StringGrid6->Cells[0][i];
                                ScoreBoardC->StringGrid6->Cells[0][i] = ScoreBoardC->StringGrid6->Cells[0][i+1];
                                ScoreBoardC->StringGrid6->Cells[0][i+1] = placeholder;
                                Swap = true;
                        }
                }
        }
        Swap = true;
        while(Swap == true){
                Swap = false;
                for(int i = 1; i < ScoreBoardC->StringGrid7->RowCount-1; i++){
                        if(ScoreBoardC->StringGrid7->Cells[1][i].ToInt() < ScoreBoardC->StringGrid7->Cells[1][i+1].ToInt()){
                                placeholder = ScoreBoardC->StringGrid7->Cells[1][i];
                                ScoreBoardC->StringGrid7->Cells[1][i] = ScoreBoardC->StringGrid7->Cells[1][i+1];
                                ScoreBoardC->StringGrid7->Cells[1][i+1] = placeholder;
                                placeholder = ScoreBoardC->StringGrid7->Cells[0][i];
                                ScoreBoardC->StringGrid7->Cells[0][i] = ScoreBoardC->StringGrid7->Cells[0][i+1];
                                ScoreBoardC->StringGrid7->Cells[0][i+1] = placeholder;
                                Swap = true;
                        }
                }
        }
        Swap = true;
        while(Swap == true){
                Swap = false;
                for(int i = 1; i < ScoreBoardC->StringGrid8->RowCount-1; i++){
                        if(ScoreBoardC->StringGrid8->Cells[1][i].ToInt() < ScoreBoardC->StringGrid8->Cells[1][i+1].ToInt()){
                                placeholder = ScoreBoardC->StringGrid8->Cells[1][i];
                                ScoreBoardC->StringGrid8->Cells[1][i] = ScoreBoardC->StringGrid8->Cells[1][i+1];
                                ScoreBoardC->StringGrid8->Cells[1][i+1] = placeholder;
                                placeholder = ScoreBoardC->StringGrid8->Cells[0][i];
                                ScoreBoardC->StringGrid8->Cells[0][i] = ScoreBoardC->StringGrid8->Cells[0][i+1];
                                ScoreBoardC->StringGrid8->Cells[0][i+1] = placeholder;
                                Swap = true;
                        }
                }
        }
        //Grupa A
        if(ScoreBoardC->StringGrid1->RowCount < 6){
                FinalResults8->Label6->Visible = false;
                FinalResults8->Label7->Visible = false;
                FinalResults8->Label3->Caption = FinalResults8->Label3->Caption + ScoreBoardC->StringGrid1->Cells[0][1] + " Wynik: " + ScoreBoardC->StringGrid1->Cells[1][1];
                FinalResults8->Label4->Caption = FinalResults8->Label4->Caption + ScoreBoardC->StringGrid1->Cells[0][2] + " Wynik: " + ScoreBoardC->StringGrid1->Cells[1][2];

        }else{
                FinalResults8->Label3->Caption = FinalResults8->Label3->Caption + ScoreBoardC->StringGrid1->Cells[0][1] + " Wynik: " + ScoreBoardC->StringGrid1->Cells[1][1];
                FinalResults8->Label4->Caption = FinalResults8->Label4->Caption + ScoreBoardC->StringGrid1->Cells[0][2] + " Wynik: " + ScoreBoardC->StringGrid1->Cells[1][2];
                FinalResults8->Label6->Caption = FinalResults8->Label6->Caption + ScoreBoardC->StringGrid1->Cells[0][3] + " Wynik: " + ScoreBoardC->StringGrid1->Cells[1][3];
                FinalResults8->Label7->Caption = FinalResults8->Label7->Caption + ScoreBoardC->StringGrid1->Cells[0][4] + " Wynik: " + ScoreBoardC->StringGrid1->Cells[1][4];
        }
        //Grupa B
        if(ScoreBoardC->StringGrid2->RowCount < 6){
                FinalResults8->Label10->Visible = false;
                FinalResults8->Label11->Visible = false;
                FinalResults8->Label8->Caption = FinalResults8->Label8->Caption + ScoreBoardC->StringGrid2->Cells[0][1] + " Wynik: " + ScoreBoardC->StringGrid2->Cells[1][1];
                FinalResults8->Label9->Caption = FinalResults8->Label9->Caption + ScoreBoardC->StringGrid2->Cells[0][2] + " Wynik: " + ScoreBoardC->StringGrid2->Cells[1][2];

        }else{
                FinalResults8->Label8->Caption = FinalResults8->Label8->Caption + ScoreBoardC->StringGrid2->Cells[0][1] + " Wynik: " + ScoreBoardC->StringGrid2->Cells[1][1];
                FinalResults8->Label9->Caption = FinalResults8->Label9->Caption + ScoreBoardC->StringGrid2->Cells[0][2] + " Wynik: " + ScoreBoardC->StringGrid2->Cells[1][2];
                FinalResults8->Label10->Caption = FinalResults8->Label10->Caption + ScoreBoardC->StringGrid2->Cells[0][3] + " Wynik: " + ScoreBoardC->StringGrid2->Cells[1][3];
                FinalResults8->Label11->Caption = FinalResults8->Label11->Caption + ScoreBoardC->StringGrid2->Cells[0][4] + " Wynik: " + ScoreBoardC->StringGrid2->Cells[1][4];
        }
        //Grupa C
        if(ScoreBoardC->StringGrid3->RowCount < 6){
                FinalResults8->Label16->Visible = false;
                FinalResults8->Label17->Visible = false;
                FinalResults8->Label13->Caption = FinalResults8->Label13->Caption + ScoreBoardC->StringGrid3->Cells[0][1] + " Wynik: " + ScoreBoardC->StringGrid3->Cells[1][1];
                FinalResults8->Label15->Caption = FinalResults8->Label15->Caption + ScoreBoardC->StringGrid3->Cells[0][2] + " Wynik: " + ScoreBoardC->StringGrid3->Cells[1][2];

        }else{
                FinalResults8->Label13->Caption = FinalResults8->Label13->Caption + ScoreBoardC->StringGrid3->Cells[0][1] + " Wynik: " + ScoreBoardC->StringGrid3->Cells[1][1];
                FinalResults8->Label15->Caption = FinalResults8->Label15->Caption + ScoreBoardC->StringGrid3->Cells[0][2] + " Wynik: " + ScoreBoardC->StringGrid3->Cells[1][2];
                FinalResults8->Label16->Caption = FinalResults8->Label16->Caption + ScoreBoardC->StringGrid3->Cells[0][3] + " Wynik: " + ScoreBoardC->StringGrid3->Cells[1][3];
                FinalResults8->Label17->Caption = FinalResults8->Label17->Caption + ScoreBoardC->StringGrid3->Cells[0][4] + " Wynik: " + ScoreBoardC->StringGrid3->Cells[1][4];
        }
        //Grupa D
        if(ScoreBoardC->StringGrid4->RowCount < 6){
                FinalResults8->Label20->Visible = false;
                FinalResults8->Label21->Visible = false;
                FinalResults8->Label18->Caption = FinalResults8->Label18->Caption + ScoreBoardC->StringGrid4->Cells[0][1] + " Wynik: " + ScoreBoardC->StringGrid4->Cells[1][1];
                FinalResults8->Label19->Caption = FinalResults8->Label19->Caption + ScoreBoardC->StringGrid4->Cells[0][2] + " Wynik: " + ScoreBoardC->StringGrid4->Cells[1][2];

        }else{
                FinalResults8->Label18->Caption = FinalResults8->Label18->Caption + ScoreBoardC->StringGrid4->Cells[0][1] + " Wynik: " + ScoreBoardC->StringGrid4->Cells[1][1];
                FinalResults8->Label19->Caption = FinalResults8->Label19->Caption + ScoreBoardC->StringGrid4->Cells[0][2] + " Wynik: " + ScoreBoardC->StringGrid4->Cells[1][2];
                FinalResults8->Label20->Caption = FinalResults8->Label20->Caption + ScoreBoardC->StringGrid4->Cells[0][3] + " Wynik: " + ScoreBoardC->StringGrid4->Cells[1][3];
                FinalResults8->Label21->Caption = FinalResults8->Label21->Caption + ScoreBoardC->StringGrid4->Cells[0][4] + " Wynik: " + ScoreBoardC->StringGrid4->Cells[1][4];
        }
        //Grupa E
        if(ScoreBoardC->StringGrid5->RowCount < 6){
                FinalResults8->Label26->Visible = false;
                FinalResults8->Label27->Visible = false;
                FinalResults8->Label23->Caption = FinalResults8->Label23->Caption + ScoreBoardC->StringGrid5->Cells[0][1] + " Wynik: " + ScoreBoardC->StringGrid5->Cells[1][1];
                FinalResults8->Label25->Caption = FinalResults8->Label25->Caption + ScoreBoardC->StringGrid5->Cells[0][2] + " Wynik: " + ScoreBoardC->StringGrid5->Cells[1][2];

        }else{
                FinalResults8->Label23->Caption = FinalResults8->Label23->Caption + ScoreBoardC->StringGrid5->Cells[0][1] + " Wynik: " + ScoreBoardC->StringGrid5->Cells[1][1];
                FinalResults8->Label25->Caption = FinalResults8->Label25->Caption + ScoreBoardC->StringGrid5->Cells[0][2] + " Wynik: " + ScoreBoardC->StringGrid5->Cells[1][2];
                FinalResults8->Label26->Caption = FinalResults8->Label26->Caption + ScoreBoardC->StringGrid5->Cells[0][3] + " Wynik: " + ScoreBoardC->StringGrid5->Cells[1][3];
                FinalResults8->Label27->Caption = FinalResults8->Label27->Caption + ScoreBoardC->StringGrid5->Cells[0][4] + " Wynik: " + ScoreBoardC->StringGrid5->Cells[1][4];
        }
        //Grupa F
        if(ScoreBoardC->StringGrid6->RowCount < 6){
                FinalResults8->Label30->Visible = false;
                FinalResults8->Label31->Visible = false;
                FinalResults8->Label28->Caption = FinalResults8->Label28->Caption + ScoreBoardC->StringGrid6->Cells[0][1] + " Wynik: " + ScoreBoardC->StringGrid6->Cells[1][1];
                FinalResults8->Label29->Caption = FinalResults8->Label29->Caption + ScoreBoardC->StringGrid6->Cells[0][2] + " Wynik: " + ScoreBoardC->StringGrid6->Cells[1][2];

        }else{
                FinalResults8->Label28->Caption = FinalResults8->Label28->Caption + ScoreBoardC->StringGrid6->Cells[0][1] + " Wynik: " + ScoreBoardC->StringGrid6->Cells[1][1];
                FinalResults8->Label29->Caption = FinalResults8->Label29->Caption + ScoreBoardC->StringGrid6->Cells[0][2] + " Wynik: " + ScoreBoardC->StringGrid6->Cells[1][2];
                FinalResults8->Label30->Caption = FinalResults8->Label30->Caption + ScoreBoardC->StringGrid6->Cells[0][3] + " Wynik: " + ScoreBoardC->StringGrid6->Cells[1][3];
                FinalResults8->Label31->Caption = FinalResults8->Label31->Caption + ScoreBoardC->StringGrid6->Cells[0][4] + " Wynik: " + ScoreBoardC->StringGrid6->Cells[1][4];
        }
        //Grupa G
        if(ScoreBoardC->StringGrid7->RowCount < 6){
                FinalResults8->Label36->Visible = false;
                FinalResults8->Label37->Visible = false;
                FinalResults8->Label33->Caption = FinalResults8->Label33->Caption + ScoreBoardC->StringGrid7->Cells[0][1] + " Wynik: " + ScoreBoardC->StringGrid7->Cells[1][1];
                FinalResults8->Label35->Caption = FinalResults8->Label35->Caption + ScoreBoardC->StringGrid7->Cells[0][2] + " Wynik: " + ScoreBoardC->StringGrid7->Cells[1][2];

        }else{
                FinalResults8->Label33->Caption = FinalResults8->Label33->Caption + ScoreBoardC->StringGrid7->Cells[0][1] + " Wynik: " + ScoreBoardC->StringGrid7->Cells[1][1];
                FinalResults8->Label35->Caption = FinalResults8->Label35->Caption + ScoreBoardC->StringGrid7->Cells[0][2] + " Wynik: " + ScoreBoardC->StringGrid7->Cells[1][2];
                FinalResults8->Label36->Caption = FinalResults8->Label36->Caption + ScoreBoardC->StringGrid7->Cells[0][3] + " Wynik: " + ScoreBoardC->StringGrid7->Cells[1][3];
                FinalResults8->Label37->Caption = FinalResults8->Label37->Caption + ScoreBoardC->StringGrid7->Cells[0][4] + " Wynik: " + ScoreBoardC->StringGrid7->Cells[1][4];
        }
        //Grupa H
        if(ScoreBoardC->StringGrid4->RowCount < 6){
                FinalResults8->Label40->Visible = false;
                FinalResults8->Label41->Visible = false;
                FinalResults8->Label38->Caption = FinalResults8->Label38->Caption + ScoreBoardC->StringGrid8->Cells[0][1] + " Wynik: " + ScoreBoardC->StringGrid8->Cells[1][1];
                FinalResults8->Label39->Caption = FinalResults8->Label39->Caption + ScoreBoardC->StringGrid8->Cells[0][2] + " Wynik: " + ScoreBoardC->StringGrid8->Cells[1][2];

        }else{
                FinalResults8->Label38->Caption = FinalResults8->Label38->Caption + ScoreBoardC->StringGrid8->Cells[0][1] + " Wynik: " + ScoreBoardC->StringGrid8->Cells[1][1];
                FinalResults8->Label39->Caption = FinalResults8->Label39->Caption + ScoreBoardC->StringGrid8->Cells[0][2] + " Wynik: " + ScoreBoardC->StringGrid8->Cells[1][2];
                FinalResults8->Label40->Caption = FinalResults8->Label40->Caption + ScoreBoardC->StringGrid8->Cells[0][3] + " Wynik: " + ScoreBoardC->StringGrid8->Cells[1][3];
                FinalResults8->Label41->Caption = FinalResults8->Label41->Caption + ScoreBoardC->StringGrid8->Cells[0][4] + " Wynik: " + ScoreBoardC->StringGrid8->Cells[1][4];
        }
        //Pokazanie zwyciêzców
        FinalResults8->Show();
        EightGroupTournament->Close();
}
//---------------------------------------------------------------------------

