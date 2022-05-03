//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit5.h"
#include "Unit7.h"
#include "Unit8.h"
#include "Unit9.h"
#include "Unit10.h"
#include "Globals.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
//---------------------------------------------------------------------------
TTwoGroupTournament *TwoGroupTournament;
String EndBracketPhaseA = "";
String EndBracketPhaseB = "";
//---------------------------------------------------------------------------
__fastcall TTwoGroupTournament::TTwoGroupTournament(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TTwoGroupTournament::Button1Click(TObject *Sender)
{
        if(GroupABracket->ItemIndex != -1){
                ShowMessage("Nie zosta³y rozegrane jeszcze wszystkie mecze!");
                return;
        }

        //This checks for the group phase to end
        if(EndBracketPhaseA == ""){
                EndBracketPhaseA = GroupA[1];
        }
        //The number of matches in a round
        int LoopCounter = (PlayerAmountA)/2;
        int CountDown = PlayerAmountA-1;
        GroupABracket->Clear();
        for(int i = 0; i<LoopCounter; i++){
                int idx = GroupABracket->Items->Add(AnsiString(GroupA[i] + " VS " + GroupA[CountDown]));
                GroupABracket->ItemIndex = idx;
                CountDown--;
        }
        //This will block the button after all rounds finish
        String placeholder = GroupA[1];
        for(int i = 1; i<(PlayerAmountA-1); i++){
                GroupA[i] = GroupA[i+1];
        }
        GroupA[PlayerAmountA-1] = placeholder;
        if(CompareStr(EndBracketPhaseA, GroupA[1]) == 0){
                Button1->Enabled = false;
        }
        //This button will unlock if next round buttons are locked
        if(Button2->Enabled == false && Button1->Enabled == false){
                Button7->Visible = true;
                Button7->Enabled = true;
        }
}
//---------------------------------------------------------------------------

void __fastcall TTwoGroupTournament::Button2Click(TObject *Sender)
{
        if(GroupBBracket->ItemIndex != -1){
                ShowMessage("Nie zosta³y rozegrane jeszcze wszystkie mecze!");
                return;
        }

        //This checks for the group phase to end
        if(EndBracketPhaseB == ""){
                EndBracketPhaseB = GroupB[1];
        }
        //The number of matches in a round
        int LoopCounter = (PlayerAmountB)/2;
        int CountDown = PlayerAmountB-1;
        GroupBBracket->Clear();
        for(int i = 0; i<LoopCounter; i++){
                int idx = GroupBBracket->Items->Add(AnsiString(GroupB[i] + " VS " + GroupB[CountDown]));
                GroupBBracket->ItemIndex = idx;
                CountDown--;
        }
        //This will block the button after all rounds finish
        String placeholder = GroupB[1];
        for(int i = 1; i<(PlayerAmountB-1); i++){
                GroupB[i] = GroupB[i+1];
        }
        GroupB[PlayerAmountB-1] = placeholder;
        if(CompareStr(EndBracketPhaseB, GroupB[1]) == 0){
                Button2->Enabled = false;
        }
		//This button will unlock if next round buttons are locked
        if(Button1->Enabled == false && Button2->Enabled == false){
                Button7->Visible = true;
                Button7->Enabled = true;
        }
}
//---------------------------------------------------------------------------

void __fastcall TTwoGroupTournament::Button3Click(TObject *Sender)
{
        EndBracketPhaseA = "";
        Button1->Enabled = true;
        EndBracketPhaseB = "";
        Button2->Enabled = true;
        GroupABracket->Clear();
        GroupBBracket->Clear();
        Close();
        Form1->WindowState = wsNormal;
}
//---------------------------------------------------------------------------


void __fastcall TTwoGroupTournament::Button4Click(TObject *Sender)
{
        //We check which match is hovered
        int idx = GroupABracket->ItemIndex;
        if( idx == -1 )
                return;

        //It's a secret tool that will help us later        
        LittleHelper = idx;

        //We take players' names from ListBox
        int VSPosition = AnsiPos(" VS ", GroupABracket->Items->Strings[idx]);
        ScoreGetterGroupA2->NameLeft->Caption = GroupABracket->Items->Strings[idx].SubString(0, VSPosition-1);
        ScoreGetterGroupA2->NameRight->Caption = GroupABracket->Items->Strings[idx].SubString(VSPosition+4, GroupABracket->Items->Strings[idx].Length()-VSPosition+4);

        //Automating bye scoring
        if(CompareStr(ScoreGetterGroupA2->NameLeft->Caption, "bye") == 0){
                ScoreGetterGroupA2->Edit1->Text = "0";
                ScoreGetterGroupA2->Edit2->Text = "1";
                ScoreGetterGroupA2->Button2->Click();
                ScoreGetterGroupA2->Edit1->Text = "";
                ScoreGetterGroupA2->Edit2->Text = "";
        }else if(CompareStr(ScoreGetterGroupA2->NameRight->Caption, "bye") == 0){
                ScoreGetterGroupA2->Edit1->Text = "1";
                ScoreGetterGroupA2->Edit2->Text = "0";
                ScoreGetterGroupA2->Button2->Click();
                ScoreGetterGroupA2->Edit1->Text = "";
                ScoreGetterGroupA2->Edit2->Text = "";
        }else{
                //We show that window and block current
                TwoGroupTournament->Enabled = false;
                ScoreGetterGroupA2->Show();
        }
}
//---------------------------------------------------------------------------

void __fastcall TTwoGroupTournament::Button6Click(TObject *Sender)
{
        //Bubble Sort by points
        String placeholder;
        bool Swap = true;
        while(Swap == true){
                Swap = false;
                for(int i = 1; i < ScoreBoardA->StringGrid1->RowCount-1; i++){
                        if(ScoreBoardA->StringGrid1->Cells[1][i].ToInt() < ScoreBoardA->StringGrid1->Cells[1][i+1].ToInt()){
                                placeholder = ScoreBoardA->StringGrid1->Cells[1][i];
                                ScoreBoardA->StringGrid1->Cells[1][i] = ScoreBoardA->StringGrid1->Cells[1][i+1];
                                ScoreBoardA->StringGrid1->Cells[1][i+1] = placeholder;
                                placeholder = ScoreBoardA->StringGrid1->Cells[0][i];
                                ScoreBoardA->StringGrid1->Cells[0][i] = ScoreBoardA->StringGrid1->Cells[0][i+1];
                                ScoreBoardA->StringGrid1->Cells[0][i+1] = placeholder;
                                Swap = true;
                        }
                }
        }
        Swap = true;
        while(Swap == true){
                Swap = false;
                for(int i = 1; i < ScoreBoardA->StringGrid2->RowCount-1; i++){
                        if(ScoreBoardA->StringGrid2->Cells[1][i].ToInt() < ScoreBoardA->StringGrid2->Cells[1][i+1].ToInt()){
                                placeholder = ScoreBoardA->StringGrid2->Cells[1][i];
                                ScoreBoardA->StringGrid2->Cells[1][i] = ScoreBoardA->StringGrid2->Cells[1][i+1];
                                ScoreBoardA->StringGrid2->Cells[1][i+1] = placeholder;
                                placeholder = ScoreBoardA->StringGrid2->Cells[0][i];
                                ScoreBoardA->StringGrid2->Cells[0][i] = ScoreBoardA->StringGrid2->Cells[0][i+1];
                                ScoreBoardA->StringGrid2->Cells[0][i+1] = placeholder;
                                Swap = true;
                        }
                }
        }
    
        ScoreBoardA->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TTwoGroupTournament::Button5Click(TObject *Sender)
{
        //It's the same as TTwoGroupTournament::Button4Click
        int idx = GroupBBracket->ItemIndex;
        if( idx == -1 )
                return;

        LittleHelper = idx;

        int VSPosition = AnsiPos(" VS ", GroupBBracket->Items->Strings[idx]);
        ScoreGetterGroupB2->NameLeft->Caption = GroupBBracket->Items->Strings[idx].SubString(0, VSPosition-1);
        ScoreGetterGroupB2->NameRight->Caption = GroupBBracket->Items->Strings[idx].SubString(VSPosition+4, GroupBBracket->Items->Strings[idx].Length()-VSPosition+4);

        if(CompareStr(ScoreGetterGroupB2->NameLeft->Caption, "bye") == 0){
                ScoreGetterGroupB2->Edit1->Text = "0";
                ScoreGetterGroupB2->Edit2->Text = "1";
                ScoreGetterGroupB2->Button2->Click();
                ScoreGetterGroupB2->Edit1->Text = "";
                ScoreGetterGroupB2->Edit2->Text = "";
        }else if(CompareStr(ScoreGetterGroupB2->NameRight->Caption, "bye") == 0){
                ScoreGetterGroupB2->Edit1->Text = "1";
                ScoreGetterGroupB2->Edit2->Text = "0";
                ScoreGetterGroupB2->Button2->Click();
                ScoreGetterGroupB2->Edit1->Text = "";
                ScoreGetterGroupB2->Edit2->Text = "";
        }else{
                TwoGroupTournament->Enabled = false;
                ScoreGetterGroupB2->Show();
        }
}
//---------------------------------------------------------------------------

void __fastcall TTwoGroupTournament::Button7Click(TObject *Sender)
{
        //We sort it again since we take winners from here
        String placeholder;
        bool Swap = true;
        while(Swap == true){
                Swap = false;
                for(int i = 1; i < ScoreBoardA->StringGrid1->RowCount-1; i++){
                        if(ScoreBoardA->StringGrid1->Cells[1][i].ToInt() < ScoreBoardA->StringGrid1->Cells[1][i+1].ToInt()){
                                placeholder = ScoreBoardA->StringGrid1->Cells[1][i];
                                ScoreBoardA->StringGrid1->Cells[1][i] = ScoreBoardA->StringGrid1->Cells[1][i+1];
                                ScoreBoardA->StringGrid1->Cells[1][i+1] = placeholder;
                                placeholder = ScoreBoardA->StringGrid1->Cells[0][i];
                                ScoreBoardA->StringGrid1->Cells[0][i] = ScoreBoardA->StringGrid1->Cells[0][i+1];
                                ScoreBoardA->StringGrid1->Cells[0][i+1] = placeholder;
                                Swap = true;
                        }
                }
        }
        Swap = true;
        while(Swap == true){
                Swap = false;
                for(int i = 1; i < ScoreBoardA->StringGrid2->RowCount-1; i++){
                        if(ScoreBoardA->StringGrid2->Cells[1][i].ToInt() < ScoreBoardA->StringGrid2->Cells[1][i+1].ToInt()){
                                placeholder = ScoreBoardA->StringGrid2->Cells[1][i];
                                ScoreBoardA->StringGrid2->Cells[1][i] = ScoreBoardA->StringGrid2->Cells[1][i+1];
                                ScoreBoardA->StringGrid2->Cells[1][i+1] = placeholder;
                                placeholder = ScoreBoardA->StringGrid2->Cells[0][i];
                                ScoreBoardA->StringGrid2->Cells[0][i] = ScoreBoardA->StringGrid2->Cells[0][i+1];
                                ScoreBoardA->StringGrid2->Cells[0][i+1] = placeholder;
                                Swap = true;
                        }
                }
        }

        //We check for winners
        if(ScoreBoardA->StringGrid1->RowCount < 6){
                FinalResults2->Label6->Visible = false;
                FinalResults2->Label7->Visible = false;
                FinalResults2->Label3->Caption = FinalResults2->Label3->Caption + ScoreBoardA->StringGrid1->Cells[0][1] + " Wynik: " + ScoreBoardA->StringGrid1->Cells[1][1];
                FinalResults2->Label4->Caption = FinalResults2->Label4->Caption + ScoreBoardA->StringGrid1->Cells[0][2] + " Wynik: " + ScoreBoardA->StringGrid1->Cells[1][2];

        }else{
                FinalResults2->Label3->Caption = FinalResults2->Label3->Caption + ScoreBoardA->StringGrid1->Cells[0][1] + " Wynik: " + ScoreBoardA->StringGrid1->Cells[1][1];
                FinalResults2->Label4->Caption = FinalResults2->Label4->Caption + ScoreBoardA->StringGrid1->Cells[0][2] + " Wynik: " + ScoreBoardA->StringGrid1->Cells[1][2];
                FinalResults2->Label6->Caption = FinalResults2->Label6->Caption + ScoreBoardA->StringGrid1->Cells[0][3] + " Wynik: " + ScoreBoardA->StringGrid1->Cells[1][3];
                FinalResults2->Label7->Caption = FinalResults2->Label7->Caption + ScoreBoardA->StringGrid1->Cells[0][4] + " Wynik: " + ScoreBoardA->StringGrid1->Cells[1][4];
        }
        if(ScoreBoardA->StringGrid2->RowCount < 6){
                FinalResults2->Label10->Visible = false;
                FinalResults2->Label11->Visible = false;
                FinalResults2->Label8->Caption = FinalResults2->Label8->Caption + ScoreBoardA->StringGrid2->Cells[0][1] + " Wynik: " + ScoreBoardA->StringGrid2->Cells[1][1];
                FinalResults2->Label9->Caption = FinalResults2->Label9->Caption + ScoreBoardA->StringGrid2->Cells[0][2] + " Wynik: " + ScoreBoardA->StringGrid2->Cells[1][2];

        }else{
                FinalResults2->Label8->Caption = FinalResults2->Label8->Caption + ScoreBoardA->StringGrid2->Cells[0][1] + " Wynik: " + ScoreBoardA->StringGrid2->Cells[1][1];
                FinalResults2->Label9->Caption = FinalResults2->Label9->Caption + ScoreBoardA->StringGrid2->Cells[0][2] + " Wynik: " + ScoreBoardA->StringGrid2->Cells[1][2];
                FinalResults2->Label10->Caption = FinalResults2->Label10->Caption + ScoreBoardA->StringGrid2->Cells[0][3] + " Wynik: " + ScoreBoardA->StringGrid2->Cells[1][3];
                FinalResults2->Label11->Caption = FinalResults2->Label11->Caption + ScoreBoardA->StringGrid2->Cells[0][4] + " Wynik: " + ScoreBoardA->StringGrid2->Cells[1][4];
        }
        //We show the winners
        FinalResults2->Show();
        TwoGroupTournament->Close();
}
//---------------------------------------------------------------------------

