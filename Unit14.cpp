//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit14.h"
#include "Unit15.h"
#include "Unit16.h"
#include "Unit17.h"
#include "Unit18.h"
#include "Unit19.h"
#include "Unit20.h"
#include "Globals.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFourGroupTournament *FourGroupTournament;
//---------------------------------------------------------------------------
String EndBracketPhaseA = "";
String EndBracketPhaseB = "";
String EndBracketPhaseC = "";
String EndBracketPhaseD = "";
//---------------------------------------------------------------------------
__fastcall TFourGroupTournament::TFourGroupTournament(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFourGroupTournament::Button9Click(TObject *Sender)
{
        Close();
        Form1->WindowState = wsNormal;
}
//---------------------------------------------------------------------------
void __fastcall TFourGroupTournament::Button10Click(TObject *Sender)
{
        //some Ctrl-c Ctrl-v
        String placeholder;
        bool Swap = true;
        while(Swap == true){
                Swap = false;
                for(int i = 1; i < ScoreBoardB->StringGrid1->RowCount-1; i++){
                        if(ScoreBoardB->StringGrid1->Cells[1][i].ToInt() < ScoreBoardB->StringGrid1->Cells[1][i+1].ToInt()){
                                placeholder = ScoreBoardB->StringGrid1->Cells[1][i];
                                ScoreBoardB->StringGrid1->Cells[1][i] = ScoreBoardB->StringGrid1->Cells[1][i+1];
                                ScoreBoardB->StringGrid1->Cells[1][i+1] = placeholder;
                                placeholder = ScoreBoardB->StringGrid1->Cells[0][i];
                                ScoreBoardB->StringGrid1->Cells[0][i] = ScoreBoardB->StringGrid1->Cells[0][i+1];
                                ScoreBoardB->StringGrid1->Cells[0][i+1] = placeholder;
                                Swap = true;
                        }
                }
        }
        Swap = true;
        while(Swap == true){
                Swap = false;
                for(int i = 1; i < ScoreBoardB->StringGrid2->RowCount-1; i++){
                        if(ScoreBoardB->StringGrid2->Cells[1][i].ToInt() < ScoreBoardB->StringGrid2->Cells[1][i+1].ToInt()){
                                placeholder = ScoreBoardB->StringGrid2->Cells[1][i];
                                ScoreBoardB->StringGrid2->Cells[1][i] = ScoreBoardB->StringGrid2->Cells[1][i+1];
                                ScoreBoardB->StringGrid2->Cells[1][i+1] = placeholder;
                                placeholder = ScoreBoardB->StringGrid2->Cells[0][i];
                                ScoreBoardB->StringGrid2->Cells[0][i] = ScoreBoardB->StringGrid2->Cells[0][i+1];
                                ScoreBoardB->StringGrid2->Cells[0][i+1] = placeholder;
                                Swap = true;
                        }
                }
        }
        Swap = true;
        while(Swap == true){
                Swap = false;
                for(int i = 1; i < ScoreBoardB->StringGrid3->RowCount-1; i++){
                        if(ScoreBoardB->StringGrid3->Cells[1][i].ToInt() < ScoreBoardB->StringGrid3->Cells[1][i+1].ToInt()){
                                placeholder = ScoreBoardB->StringGrid3->Cells[1][i];
                                ScoreBoardB->StringGrid3->Cells[1][i] = ScoreBoardB->StringGrid3->Cells[1][i+1];
                                ScoreBoardB->StringGrid3->Cells[1][i+1] = placeholder;
                                placeholder = ScoreBoardB->StringGrid3->Cells[0][i];
                                ScoreBoardB->StringGrid3->Cells[0][i] = ScoreBoardB->StringGrid3->Cells[0][i+1];
                                ScoreBoardB->StringGrid3->Cells[0][i+1] = placeholder;
                                Swap = true;
                        }
                }
        }
        Swap = true;
        while(Swap == true){
                Swap = false;
                for(int i = 1; i < ScoreBoardB->StringGrid4->RowCount-1; i++){
                        if(ScoreBoardB->StringGrid4->Cells[1][i].ToInt() < ScoreBoardB->StringGrid4->Cells[1][i+1].ToInt()){
                                placeholder = ScoreBoardB->StringGrid4->Cells[1][i];
                                ScoreBoardB->StringGrid4->Cells[1][i] = ScoreBoardB->StringGrid4->Cells[1][i+1];
                                ScoreBoardB->StringGrid4->Cells[1][i+1] = placeholder;
                                placeholder = ScoreBoardB->StringGrid4->Cells[0][i];
                                ScoreBoardB->StringGrid4->Cells[0][i] = ScoreBoardB->StringGrid4->Cells[0][i+1];
                                ScoreBoardB->StringGrid4->Cells[0][i+1] = placeholder;
                                Swap = true;
                        }
                }
        }
        //some Ctrl-c Ctrl-v
        ScoreBoardB->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TFourGroupTournament::Button1Click(TObject *Sender)
{
        if(GroupABracket->ItemIndex != -1){
                ShowMessage("Nie zosta造 rozegrane jeszcze wszystkie mecze!");
                return;
        }

        //some Ctrl-c Ctrl-v
        if(EndBracketPhaseA == ""){
                EndBracketPhaseA = GroupA[1];
        }
        //some Ctrl-c Ctrl-v
        int LoopCounter = (PlayerAmountA)/2;
        int CountDown = PlayerAmountA-1;
        GroupABracket->Clear();
        for(int i = 0; i<LoopCounter; i++){
                int idx = GroupABracket->Items->Add(AnsiString(GroupA[i] + " VS " + GroupA[CountDown]));
                GroupABracket->ItemIndex = idx;
                CountDown--;
        }
        //some Ctrl-c Ctrl-v
        String placeholder = GroupA[1];
        for(int i = 1; i<(PlayerAmountA-1); i++){
                GroupA[i] = GroupA[i+1];
        }
        GroupA[PlayerAmountA-1] = placeholder;
        if(CompareStr(EndBracketPhaseA, GroupA[1]) == 0){
                Button1->Enabled = false;
        }
        //some Ctrl-c Ctrl-v
        if((Button2->Enabled == false && Button1->Enabled == false) && (Button5->Enabled == false && Button7->Enabled == false)){
                Button11->Visible = true;
                Button11->Enabled = true;
        }
}
//---------------------------------------------------------------------------
void __fastcall TFourGroupTournament::Button2Click(TObject *Sender)
{
        if(GroupBBracket->ItemIndex != -1){
                ShowMessage("Nie zosta造 rozegrane jeszcze wszystkie mecze!");
                return;
        }

        //some Ctrl-c Ctrl-v
        if(EndBracketPhaseB == ""){
                EndBracketPhaseB = GroupB[1];
        }
        //some Ctrl-c Ctrl-v
        int LoopCounter = (PlayerAmountB)/2;
        int CountDown = PlayerAmountB-1;
        GroupBBracket->Clear();
        for(int i = 0; i<LoopCounter; i++){
                int idx = GroupBBracket->Items->Add(AnsiString(GroupB[i] + " VS " + GroupB[CountDown]));
                GroupBBracket->ItemIndex = idx;
                CountDown--;
        }
        //some Ctrl-c Ctrl-v
        String placeholder = GroupB[1];
        for(int i = 1; i<(PlayerAmountB-1); i++){
                GroupB[i] = GroupB[i+1];
        }
        GroupB[PlayerAmountB-1] = placeholder;
        if(CompareStr(EndBracketPhaseB, GroupB[1]) == 0){
                Button2->Enabled = false;
        }
        //some Ctrl-c Ctrl-v
        if((Button2->Enabled == false && Button1->Enabled == false) && (Button5->Enabled == false && Button7->Enabled == false)){
                Button11->Visible = true;
                Button11->Enabled = true;
        }
}
//---------------------------------------------------------------------------
void __fastcall TFourGroupTournament::Button5Click(TObject *Sender)
{
        if(GroupCBracket->ItemIndex != -1){
                ShowMessage("Nie zosta造 rozegrane jeszcze wszystkie mecze!");
                return;
        }

        //some Ctrl-c Ctrl-v
        if(EndBracketPhaseC == ""){
                EndBracketPhaseC = GroupC[1];
        }
        //some Ctrl-c Ctrl-v
        int LoopCounter = (PlayerAmountC)/2;
        int CountDown = PlayerAmountC-1;
        GroupCBracket->Clear();
        for(int i = 0; i<LoopCounter; i++){
                int idx = GroupCBracket->Items->Add(AnsiString(GroupC[i] + " VS " + GroupC[CountDown]));
                GroupCBracket->ItemIndex = idx;
                CountDown--;
        }
        //some Ctrl-c Ctrl-v
        String placeholder = GroupC[1];
        for(int i = 1; i<(PlayerAmountC-1); i++){
                GroupC[i] = GroupC[i+1];
        }
        GroupC[PlayerAmountC-1] = placeholder;
        if(CompareStr(EndBracketPhaseC, GroupC[1]) == 0){
                Button5->Enabled = false;
        }
        //some Ctrl-c Ctrl-v
        if((Button2->Enabled == false && Button1->Enabled == false) && (Button5->Enabled == false && Button7->Enabled == false)){
                Button11->Visible = true;
                Button11->Enabled = true;
        }
}
//---------------------------------------------------------------------------
void __fastcall TFourGroupTournament::Button7Click(TObject *Sender)
{
        if(GroupDBracket->ItemIndex != -1){
                ShowMessage("Nie zosta造 rozegrane jeszcze wszystkie mecze!");
                return;
        }

        //some Ctrl-c Ctrl-v
        if(EndBracketPhaseD == ""){
                EndBracketPhaseD = GroupD[1];
        }
        //some Ctrl-c Ctrl-v
        int LoopCounter = (PlayerAmountD)/2;
        int CountDown = PlayerAmountD-1;
        GroupDBracket->Clear();
        for(int i = 0; i<LoopCounter; i++){
                int idx = GroupDBracket->Items->Add(AnsiString(GroupD[i] + " VS " + GroupD[CountDown]));
                GroupDBracket->ItemIndex = idx;
                CountDown--;
        }
        //some Ctrl-c Ctrl-v
        String placeholder = GroupD[1];
        for(int i = 1; i<(PlayerAmountD-1); i++){
                GroupD[i] = GroupD[i+1];
        }
        GroupD[PlayerAmountD-1] = placeholder;
        if(CompareStr(EndBracketPhaseD, GroupD[1]) == 0){
                Button7->Enabled = false;
        }
        //some Ctrl-c Ctrl-v
        if((Button2->Enabled == false && Button1->Enabled == false) && (Button5->Enabled == false && Button7->Enabled == false)){
                Button11->Visible = true;
                Button11->Enabled = true;
        }
}
//---------------------------------------------------------------------------
void __fastcall TFourGroupTournament::Button4Click(TObject *Sender)
{
        //some Ctrl-c Ctrl-v
        int idx = GroupABracket->ItemIndex;
        if( idx == -1 )
                return;

        //some Ctrl-c Ctrl-v
        LittleHelper = idx;

        //some Ctrl-c Ctrl-v
        int VSPosition = AnsiPos(" VS ", GroupABracket->Items->Strings[idx]);
        ScoreGetterGroupA4->NameLeft->Caption = GroupABracket->Items->Strings[idx].SubString(1, VSPosition-1);
        ScoreGetterGroupA4->NameRight->Caption = GroupABracket->Items->Strings[idx].SubString(VSPosition+4, GroupABracket->Items->Strings[idx].Length()-VSPosition+4);

        //some Ctrl-c Ctrl-v
        if(CompareStr(ScoreGetterGroupA4->NameLeft->Caption, "bye") == 0){
                ScoreGetterGroupA4->Edit1->Text = "0";
                ScoreGetterGroupA4->Edit2->Text = "1";
                ScoreGetterGroupA4->Button2->Click();
                ScoreGetterGroupA4->Edit1->Text = "";
                ScoreGetterGroupA4->Edit2->Text = "";
        }else if(CompareStr(ScoreGetterGroupA4->NameRight->Caption, "bye") == 0){
                ScoreGetterGroupA4->Edit1->Text = "1";
                ScoreGetterGroupA4->Edit2->Text = "0";
                ScoreGetterGroupA4->Button2->Click();
                ScoreGetterGroupA4->Edit1->Text = "";
                ScoreGetterGroupA4->Edit2->Text = "";
        }else{
                //some Ctrl-c Ctrl-v
                FourGroupTournament->Enabled = false;
                ScoreGetterGroupA4->Show();
        }
}
//---------------------------------------------------------------------------
void __fastcall TFourGroupTournament::Button3Click(TObject *Sender)
{
        //some Ctrl-c Ctrl-v
        int idx = GroupBBracket->ItemIndex;
        if( idx == -1 )
                return;

        //some Ctrl-c Ctrl-v
        LittleHelper = idx;

        //some Ctrl-c Ctrl-v
        int VSPosition = AnsiPos(" VS ", GroupBBracket->Items->Strings[idx]);
        ScoreGetterGroupB4->NameLeft->Caption = GroupBBracket->Items->Strings[idx].SubString(1, VSPosition-1);
        ScoreGetterGroupB4->NameRight->Caption = GroupBBracket->Items->Strings[idx].SubString(VSPosition+4, GroupBBracket->Items->Strings[idx].Length()-VSPosition+4);

        //some Ctrl-c Ctrl-v
        if(CompareStr(ScoreGetterGroupB4->NameLeft->Caption, "bye") == 0){
                ScoreGetterGroupB4->Edit1->Text = "0";
                ScoreGetterGroupB4->Edit2->Text = "1";
                ScoreGetterGroupB4->Button2->Click();
                ScoreGetterGroupB4->Edit1->Text = "";
                ScoreGetterGroupB4->Edit2->Text = "";
        }else if(CompareStr(ScoreGetterGroupB4->NameRight->Caption, "bye") == 0){
                ScoreGetterGroupB4->Edit1->Text = "1";
                ScoreGetterGroupB4->Edit2->Text = "0";
                ScoreGetterGroupB4->Button2->Click();
                ScoreGetterGroupB4->Edit1->Text = "";
                ScoreGetterGroupB4->Edit2->Text = "";
        }else{
                //some Ctrl-c Ctrl-v
                FourGroupTournament->Enabled = false;
                ScoreGetterGroupB4->Show();
        }
}
//---------------------------------------------------------------------------
void __fastcall TFourGroupTournament::Button6Click(TObject *Sender)
{
        //some Ctrl-c Ctrl-v
        int idx = GroupCBracket->ItemIndex;
        if( idx == -1 )
                return;

        //some Ctrl-c Ctrl-v
        LittleHelper = idx;

        //some Ctrl-c Ctrl-v
        int VSPosition = AnsiPos(" VS ", GroupCBracket->Items->Strings[idx]);
        ScoreGetterGroupC4->NameLeft->Caption = GroupCBracket->Items->Strings[idx].SubString(1, VSPosition-1);
        ScoreGetterGroupC4->NameRight->Caption = GroupCBracket->Items->Strings[idx].SubString(VSPosition+4, GroupCBracket->Items->Strings[idx].Length()-VSPosition+4);

        //some Ctrl-c Ctrl-v
        if(CompareStr(ScoreGetterGroupC4->NameLeft->Caption, "bye") == 0){
                ScoreGetterGroupC4->Edit1->Text = "0";
                ScoreGetterGroupC4->Edit2->Text = "1";
                ScoreGetterGroupC4->Button2->Click();
                ScoreGetterGroupC4->Edit1->Text = "";
                ScoreGetterGroupC4->Edit2->Text = "";
        }else if(CompareStr(ScoreGetterGroupC4->NameRight->Caption, "bye") == 0){
                ScoreGetterGroupC4->Edit1->Text = "1";
                ScoreGetterGroupC4->Edit2->Text = "0";
                ScoreGetterGroupC4->Button2->Click();
                ScoreGetterGroupC4->Edit1->Text = "";
                ScoreGetterGroupC4->Edit2->Text = "";
        }else{
                //some Ctrl-c Ctrl-v
                FourGroupTournament->Enabled = false;
                ScoreGetterGroupC4->Show();
        }
}
//---------------------------------------------------------------------------
void __fastcall TFourGroupTournament::Button8Click(TObject *Sender)
{
        //some Ctrl-c Ctrl-v
        int idx = GroupDBracket->ItemIndex;
        if( idx == -1 )
                return;

        //some Ctrl-c Ctrl-v
        LittleHelper = idx;

        //some Ctrl-c Ctrl-v
        int VSPosition = AnsiPos(" VS ", GroupDBracket->Items->Strings[idx]);
        ScoreGetterGroupD4->NameLeft->Caption = GroupDBracket->Items->Strings[idx].SubString(1, VSPosition-1);
        ScoreGetterGroupD4->NameRight->Caption = GroupDBracket->Items->Strings[idx].SubString(VSPosition+4, GroupDBracket->Items->Strings[idx].Length()-VSPosition+4);

        //some Ctrl-c Ctrl-v
        if(CompareStr(ScoreGetterGroupD4->NameLeft->Caption, "bye") == 0){
                ScoreGetterGroupD4->Edit1->Text = "0";
                ScoreGetterGroupD4->Edit2->Text = "1";
                ScoreGetterGroupD4->Button2->Click();
                ScoreGetterGroupD4->Edit1->Text = "";
                ScoreGetterGroupD4->Edit2->Text = "";
        }else if(CompareStr(ScoreGetterGroupD4->NameRight->Caption, "bye") == 0){
                ScoreGetterGroupD4->Edit1->Text = "1";
                ScoreGetterGroupD4->Edit2->Text = "0";
                ScoreGetterGroupD4->Button2->Click();
                ScoreGetterGroupD4->Edit1->Text = "";
                ScoreGetterGroupD4->Edit2->Text = "";
        }else{
                //some Ctrl-c Ctrl-v
                FourGroupTournament->Enabled = false;
                ScoreGetterGroupD4->Show();
        }
}
//---------------------------------------------------------------------------
void __fastcall TFourGroupTournament::Button11Click(TObject *Sender)
{
        //some Ctrl-c Ctrl-v
        String placeholder;
        bool Swap = true;
        while(Swap == true){
                Swap = false;
                for(int i = 1; i < ScoreBoardB->StringGrid1->RowCount-1; i++){
                        if(ScoreBoardB->StringGrid1->Cells[1][i].ToInt() < ScoreBoardB->StringGrid1->Cells[1][i+1].ToInt()){
                                placeholder = ScoreBoardB->StringGrid1->Cells[1][i];
                                ScoreBoardB->StringGrid1->Cells[1][i] = ScoreBoardB->StringGrid1->Cells[1][i+1];
                                ScoreBoardB->StringGrid1->Cells[1][i+1] = placeholder;
                                placeholder = ScoreBoardB->StringGrid1->Cells[0][i];
                                ScoreBoardB->StringGrid1->Cells[0][i] = ScoreBoardB->StringGrid1->Cells[0][i+1];
                                ScoreBoardB->StringGrid1->Cells[0][i+1] = placeholder;
                                Swap = true;
                        }
                }
        }
        Swap = true;
        while(Swap == true){
                Swap = false;
                for(int i = 1; i < ScoreBoardB->StringGrid2->RowCount-1; i++){
                        if(ScoreBoardB->StringGrid2->Cells[1][i].ToInt() < ScoreBoardB->StringGrid2->Cells[1][i+1].ToInt()){
                                placeholder = ScoreBoardB->StringGrid2->Cells[1][i];
                                ScoreBoardB->StringGrid2->Cells[1][i] = ScoreBoardB->StringGrid2->Cells[1][i+1];
                                ScoreBoardB->StringGrid2->Cells[1][i+1] = placeholder;
                                placeholder = ScoreBoardB->StringGrid2->Cells[0][i];
                                ScoreBoardB->StringGrid2->Cells[0][i] = ScoreBoardB->StringGrid2->Cells[0][i+1];
                                ScoreBoardB->StringGrid2->Cells[0][i+1] = placeholder;
                                Swap = true;
                        }
                }
        }
        Swap = true;
        while(Swap == true){
                Swap = false;
                for(int i = 1; i < ScoreBoardB->StringGrid3->RowCount-1; i++){
                        if(ScoreBoardB->StringGrid3->Cells[1][i].ToInt() < ScoreBoardB->StringGrid3->Cells[1][i+1].ToInt()){
                                placeholder = ScoreBoardB->StringGrid3->Cells[1][i];
                                ScoreBoardB->StringGrid3->Cells[1][i] = ScoreBoardB->StringGrid3->Cells[1][i+1];
                                ScoreBoardB->StringGrid3->Cells[1][i+1] = placeholder;
                                placeholder = ScoreBoardB->StringGrid3->Cells[0][i];
                                ScoreBoardB->StringGrid3->Cells[0][i] = ScoreBoardB->StringGrid3->Cells[0][i+1];
                                ScoreBoardB->StringGrid3->Cells[0][i+1] = placeholder;
                                Swap = true;
                        }
                }
        }
        Swap = true;
        while(Swap == true){
                Swap = false;
                for(int i = 1; i < ScoreBoardB->StringGrid4->RowCount-1; i++){
                        if(ScoreBoardB->StringGrid4->Cells[1][i].ToInt() < ScoreBoardB->StringGrid4->Cells[1][i+1].ToInt()){
                                placeholder = ScoreBoardB->StringGrid4->Cells[1][i];
                                ScoreBoardB->StringGrid4->Cells[1][i] = ScoreBoardB->StringGrid4->Cells[1][i+1];
                                ScoreBoardB->StringGrid4->Cells[1][i+1] = placeholder;
                                placeholder = ScoreBoardB->StringGrid4->Cells[0][i];
                                ScoreBoardB->StringGrid4->Cells[0][i] = ScoreBoardB->StringGrid4->Cells[0][i+1];
                                ScoreBoardB->StringGrid4->Cells[0][i+1] = placeholder;
                                Swap = true;
                        }
                }
        }

        //some Ctrl-c Ctrl-v
        //Group A
        if(ScoreBoardB->StringGrid1->RowCount < 6){
                FinalResults4->Label6->Visible = false;
                FinalResults4->Label7->Visible = false;
                FinalResults4->Label3->Caption = FinalResults4->Label3->Caption + ScoreBoardB->StringGrid1->Cells[0][1] + " Wynik: " + ScoreBoardB->StringGrid1->Cells[1][1];
                FinalResults4->Label4->Caption = FinalResults4->Label4->Caption + ScoreBoardB->StringGrid1->Cells[0][2] + " Wynik: " + ScoreBoardB->StringGrid1->Cells[1][2];

        }else{
                FinalResults4->Label3->Caption = FinalResults4->Label3->Caption + ScoreBoardB->StringGrid1->Cells[0][1] + " Wynik: " + ScoreBoardB->StringGrid1->Cells[1][1];
                FinalResults4->Label4->Caption = FinalResults4->Label4->Caption + ScoreBoardB->StringGrid1->Cells[0][2] + " Wynik: " + ScoreBoardB->StringGrid1->Cells[1][2];
                FinalResults4->Label6->Caption = FinalResults4->Label6->Caption + ScoreBoardB->StringGrid1->Cells[0][3] + " Wynik: " + ScoreBoardB->StringGrid1->Cells[1][3];
                FinalResults4->Label7->Caption = FinalResults4->Label7->Caption + ScoreBoardB->StringGrid1->Cells[0][4] + " Wynik: " + ScoreBoardB->StringGrid1->Cells[1][4];
        }
        //Group B
        if(ScoreBoardB->StringGrid2->RowCount < 6){
                FinalResults4->Label10->Visible = false;
                FinalResults4->Label11->Visible = false;
                FinalResults4->Label8->Caption = FinalResults4->Label8->Caption + ScoreBoardB->StringGrid2->Cells[0][1] + " Wynik: " + ScoreBoardB->StringGrid2->Cells[1][1];
                FinalResults4->Label9->Caption = FinalResults4->Label9->Caption + ScoreBoardB->StringGrid2->Cells[0][2] + " Wynik: " + ScoreBoardB->StringGrid2->Cells[1][2];

        }else{
                FinalResults4->Label8->Caption = FinalResults4->Label8->Caption + ScoreBoardB->StringGrid2->Cells[0][1] + " Wynik: " + ScoreBoardB->StringGrid2->Cells[1][1];
                FinalResults4->Label9->Caption = FinalResults4->Label9->Caption + ScoreBoardB->StringGrid2->Cells[0][2] + " Wynik: " + ScoreBoardB->StringGrid2->Cells[1][2];
                FinalResults4->Label10->Caption = FinalResults4->Label10->Caption + ScoreBoardB->StringGrid2->Cells[0][3] + " Wynik: " + ScoreBoardB->StringGrid2->Cells[1][3];
                FinalResults4->Label11->Caption = FinalResults4->Label11->Caption + ScoreBoardB->StringGrid2->Cells[0][4] + " Wynik: " + ScoreBoardB->StringGrid2->Cells[1][4];
        }
        //Group C
        if(ScoreBoardB->StringGrid3->RowCount < 6){
                FinalResults4->Label16->Visible = false;
                FinalResults4->Label17->Visible = false;
                FinalResults4->Label13->Caption = FinalResults4->Label13->Caption + ScoreBoardB->StringGrid3->Cells[0][1] + " Wynik: " + ScoreBoardB->StringGrid3->Cells[1][1];
                FinalResults4->Label15->Caption = FinalResults4->Label15->Caption + ScoreBoardB->StringGrid3->Cells[0][2] + " Wynik: " + ScoreBoardB->StringGrid3->Cells[1][2];

        }else{
                FinalResults4->Label13->Caption = FinalResults4->Label13->Caption + ScoreBoardB->StringGrid3->Cells[0][1] + " Wynik: " + ScoreBoardB->StringGrid3->Cells[1][1];
                FinalResults4->Label15->Caption = FinalResults4->Label15->Caption + ScoreBoardB->StringGrid3->Cells[0][2] + " Wynik: " + ScoreBoardB->StringGrid3->Cells[1][2];
                FinalResults4->Label16->Caption = FinalResults4->Label16->Caption + ScoreBoardB->StringGrid3->Cells[0][3] + " Wynik: " + ScoreBoardB->StringGrid3->Cells[1][3];
                FinalResults4->Label17->Caption = FinalResults4->Label17->Caption + ScoreBoardB->StringGrid3->Cells[0][4] + " Wynik: " + ScoreBoardB->StringGrid3->Cells[1][4];
        }
        //Group D
        if(ScoreBoardB->StringGrid4->RowCount < 6){
                FinalResults4->Label20->Visible = false;
                FinalResults4->Label21->Visible = false;
                FinalResults4->Label18->Caption = FinalResults4->Label18->Caption + ScoreBoardB->StringGrid4->Cells[0][1] + " Wynik: " + ScoreBoardB->StringGrid4->Cells[1][1];
                FinalResults4->Label19->Caption = FinalResults4->Label19->Caption + ScoreBoardB->StringGrid4->Cells[0][2] + " Wynik: " + ScoreBoardB->StringGrid4->Cells[1][2];

        }else{
                FinalResults4->Label18->Caption = FinalResults4->Label18->Caption + ScoreBoardB->StringGrid4->Cells[0][1] + " Wynik: " + ScoreBoardB->StringGrid4->Cells[1][1];
                FinalResults4->Label19->Caption = FinalResults4->Label19->Caption + ScoreBoardB->StringGrid4->Cells[0][2] + " Wynik: " + ScoreBoardB->StringGrid4->Cells[1][2];
                FinalResults4->Label20->Caption = FinalResults4->Label20->Caption + ScoreBoardB->StringGrid4->Cells[0][3] + " Wynik: " + ScoreBoardB->StringGrid4->Cells[1][3];
                FinalResults4->Label21->Caption = FinalResults4->Label21->Caption + ScoreBoardB->StringGrid4->Cells[0][4] + " Wynik: " + ScoreBoardB->StringGrid4->Cells[1][4];
        }
        //some Ctrl-c Ctrl-v
        FinalResults4->Show();
        FourGroupTournament->Close();
}
//---------------------------------------------------------------------------
