//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit6.h"
#include "Unit13.h"
#include "Unit32.h"
#include "Unit33.h"
#include "Unit34.h"
#include "Unit35.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TTrophyPhaseSetter *TrophyPhaseSetter;
//---------------------------------------------------------------------------
__fastcall TTrophyPhaseSetter::TTrophyPhaseSetter(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TTrophyPhaseSetter::Button2Click(TObject *Sender)
{
        Close();
        Form1->WindowState = wsNormal;
}
//---------------------------------------------------------------------------
void __fastcall TTrophyPhaseSetter::Button1Click(TObject *Sender)
{
	String PlayerAmount = TrophyPhaseSetter->Edit1->Text;
	char ToCheck[2];
	if(PlayerAmount.Length() > 2)
	{
		TrophyPhaseSetter->Label2->Caption = "Maksymalna liczba zawodników to 16";
		TrophyPhaseSetter->Edit1->Text = "";
		TrophyPhaseSetter->Edit1->SetFocus();
	}
	else if(PlayerAmount.Length() == 0)
	{
		TrophyPhaseSetter->Label2->Caption = "Proszê o podanie liczby.";
		TrophyPhaseSetter->Edit1->Text = "";
		TrophyPhaseSetter->Edit1->SetFocus();              
	}
	else
	{
		//some Ctrl-c Ctrl-v
		strcpy(ToCheck, PlayerAmount.c_str());
		//some Ctrl-c Ctrl-v but max player amount is 16
		if(ToCheck[0] == '0')
		{
			TrophyPhaseSetter->Label2->Caption = "Pierwsza cyfra nie mo¿e byæ zerem.";
			TrophyPhaseSetter->Edit1->Text = "";
			TrophyPhaseSetter->Edit1->SetFocus();
			return;
		}
		for(int i = 0; i < PlayerAmount.Length(); i++)
		{
			if(ToCheck[i] < '0' || ToCheck[i] > '9')
			{
				TrophyPhaseSetter->Label2->Caption = "Proszê o podanie liczby.";
				TrophyPhaseSetter->Edit1->Text = "";
				TrophyPhaseSetter->Edit1->SetFocus();
				return;
			}
			else if
			(
				TrophyPhaseSetter->Edit1->Text.ToInt() > 16){
				TrophyPhaseSetter->Label2->Caption = "Maksymalna liczna zawodników to 16.";
				TrophyPhaseSetter->Edit1->Text = "";
				TrophyPhaseSetter->Edit1->SetFocus();
				return;
			}
		}
		TrophyPhaseSetter->Close();
		//some Ctrl-c Ctrl-v
		int PlayerCounter = TrophyPhaseSetter->Edit1->Text.ToInt();
		String Players[16];
		for(int i = 0; i<PlayerCounter; i++)
		{
			NameInput->Edit1->Text = "";
			NameInput->Label1->Caption = "WprowadŸ zawodnika nr " + IntToStr(i + 1);
			if(NameInput->ShowModal() == mrOk)
			{
					Players[i] = NameInput->Edit1->Text;
					Players[i] = Trim(Players[i]);
			}
		}
		//We make duels here
        //We fill up the pointer array 
        //For 1/16
        sixeenth->labels[0] = sixeenth->Label1;
        sixeenth->labels[1] = sixeenth->Label2;
        sixeenth->labels[2] = sixeenth->Label3;
        sixeenth->labels[3] = sixeenth->Label4;
        sixeenth->labels[4] = sixeenth->Label5;
        sixeenth->labels[5] = sixeenth->Label6;
        sixeenth->labels[6] = sixeenth->Label7;
        sixeenth->labels[7] = sixeenth->Label8;
        sixeenth->labels[8] = sixeenth->Label9;
        sixeenth->labels[9] = sixeenth->Label10;
        sixeenth->labels[10] = sixeenth->Label11;
        sixeenth->labels[11] = sixeenth->Label12;
        sixeenth->labels[12] = sixeenth->Label13;
        sixeenth->labels[13] = sixeenth->Label14;
        sixeenth->labels[14] = sixeenth->Label15;
        sixeenth->labels[15] = sixeenth->Label16;
        //For Quarters
        QuarterFinal->labels[0] = QuarterFinal->Label1;
        QuarterFinal->labels[1] = QuarterFinal->Label2;
        QuarterFinal->labels[2] = QuarterFinal->Label3;
        QuarterFinal->labels[3] = QuarterFinal->Label4;
        QuarterFinal->labels[4] = QuarterFinal->Label5;
        QuarterFinal->labels[5] = QuarterFinal->Label6;
        QuarterFinal->labels[6] = QuarterFinal->Label7;
        QuarterFinal->labels[7] = QuarterFinal->Label8;
        //For Semis
        SemiFinal->labels[0] = SemiFinal->Label1;
        SemiFinal->labels[1] = SemiFinal->Label2;
        SemiFinal->labels[2] = SemiFinal->Label3;
        SemiFinal->labels[3] = SemiFinal->Label4;
		Randomize();
		int r;
		//This is Final
		if(PlayerCounter < 3){
			Final->Label1->Caption = Players[0];
			Final->Label2->Caption = Players[1];
			Final->Show();
			Close();
		}else if(PlayerCounter < 5){
			//This is Semi Final
			for(int i = 0; i < 4; i++)
			{
				r = random(4);
                                for(int j = 0; j<4; j++){
                                        if(r == j && CompareStr(SemiFinal->labels[j]->Caption, "") == 0){
                                                SemiFinal->labels[j]->Caption = Players[i];
                                                Players[i] = "";
                                                break;
                                        }
                                }
			}
                        for(int i = 0; i < 4; i++)
			{
                                for(int j = 0; j<4; j++){
                                        if(CompareStr(SemiFinal->labels[j]->Caption, "") == 0){
                                                SemiFinal->labels[j]->Caption = Players[i];
                                                Players[i] = "";
                                                break;
                                        }
                                }
                        }
			SemiFinal->Show();
			Close();
		}else if(PlayerCounter < 9){
						//This is Quarter Final
                        for(int i = 0; i<8; i++){
                                r = random(8);
                                for(int j = 0; j<8; j++){
                                        if(r == j && CompareStr(QuarterFinal->labels[j]->Caption, "") == 0){
                                                QuarterFinal->labels[j]->Caption = Players[i];
                                                Players[i] = "";
                                                break;
                                        }
                                }
                        }
                        for(int i = 0; i < 8; i++)
			{
                                for(int j = 0; j<8; j++){
                                        if(CompareStr(QuarterFinal->labels[j]->Caption, "") == 0){
                                                QuarterFinal->labels[j]->Caption = Players[i];
                                                Players[i] = "";
                                                break;
                                        }
                                }
			}
			QuarterFinal->Show();
			Close();
		}else{
						//This is for 1/16
                        for(int i = 0; i<16; i++){
                                r = random(16);
                                for(int j = 0; j<16; j++){
                                        if(r == j && CompareStr(sixeenth->labels[j]->Caption, "") == 0){
                                                sixeenth->labels[j]->Caption = Players[i];
                                                Players[i] = "";
                                                break;
                                        }
                                }
                        }
                        for(int i = 0; i < 16; i++){
                                for(int j = 0; j<16; j++){
                                        if(CompareStr(sixeenth->labels[j]->Caption, "") == 0){
                                                sixeenth->labels[j]->Caption = Players[i];
                                                Players[i] = "";
                                                break;
                                        }
                                }
			}
			sixeenth->Show();
			Close();
		}
	}
}
//---------------------------------------------------------------------------

