//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("Unit2.cpp", InfoDump);
USEFORM("Unit3.cpp", GroupSetter2);
USEFORM("Unit4.cpp", GroupSetter1);
USEFORM("Unit5.cpp", TwoGroupTournament);
USEFORM("Unit6.cpp", NameInput);
USEFORM("Unit7.cpp", ScoreGetterGroupA2);
USEFORM("Unit8.cpp", ScoreBoardA);
USEFORM("Unit9.cpp", ScoreGetterGroupB2);
USEFORM("Unit10.cpp", FinalResults2);
USEFORM("Unit11.cpp", GroupSetter3);
USEFORM("Unit12.cpp", GroupSetter4);
USEFORM("Unit14.cpp", FourGroupTournament);
USEFORM("Unit15.cpp", ScoreBoardB);
USEFORM("Unit16.cpp", ScoreGetterGroupA4);
USEFORM("Unit17.cpp", ScoreGetterGroupB4);
USEFORM("Unit18.cpp", ScoreGetterGroupC4);
USEFORM("Unit19.cpp", ScoreGetterGroupD4);
USEFORM("Unit20.cpp", FinalResults4);
USEFORM("Unit21.cpp", ScoreBoardC);
USEFORM("Unit22.cpp", EightGroupTournament);
USEFORM("Unit23.cpp", ScoreGetterGroupA8);
USEFORM("Unit24.cpp", ScoreGetterGroupB8);
USEFORM("Unit25.cpp", ScoreGetterGroupC8);
USEFORM("Unit26.cpp", ScoreGetterGroupD8);
USEFORM("Unit27.cpp", ScoreGetterGroupE8);
USEFORM("Unit28.cpp", ScoreGetterGroupF8);
USEFORM("Unit29.cpp", ScoreGetterGroupG8);
USEFORM("Unit30.cpp", ScoreGetterGroupH8);
USEFORM("Unit31.cpp", FinalResults8);
USEFORM("Unit1.cpp", Form1);
USEFORM("Unit13.cpp", TrophyPhaseSetter);
USEFORM("Unit32.cpp", sixeenth);
USEFORM("Unit33.cpp", QuarterFinal);
USEFORM("Unit34.cpp", SemiFinal);
USEFORM("Unit35.cpp", Final);
USEFORM("Unit36.cpp", Winner);
USEFORM("Unit37.cpp", TrophyPhaseScore);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(TForm1), &Form1);
                 Application->CreateForm(__classid(TInfoDump), &InfoDump);
                 Application->CreateForm(__classid(TGroupSetter2), &GroupSetter2);
                 Application->CreateForm(__classid(TGroupSetter1), &GroupSetter1);
                 Application->CreateForm(__classid(TTwoGroupTournament), &TwoGroupTournament);
                 Application->CreateForm(__classid(TNameInput), &NameInput);
                 Application->CreateForm(__classid(TScoreGetterGroupA2), &ScoreGetterGroupA2);
                 Application->CreateForm(__classid(TScoreBoardA), &ScoreBoardA);
                 Application->CreateForm(__classid(TScoreGetterGroupB2), &ScoreGetterGroupB2);
                 Application->CreateForm(__classid(TFinalResults2), &FinalResults2);
                 Application->CreateForm(__classid(TGroupSetter3), &GroupSetter3);
                 Application->CreateForm(__classid(TGroupSetter4), &GroupSetter4);
                 Application->CreateForm(__classid(TFourGroupTournament), &FourGroupTournament);
                 Application->CreateForm(__classid(TScoreBoardB), &ScoreBoardB);
                 Application->CreateForm(__classid(TScoreGetterGroupA4), &ScoreGetterGroupA4);
                 Application->CreateForm(__classid(TScoreGetterGroupB4), &ScoreGetterGroupB4);
                 Application->CreateForm(__classid(TScoreGetterGroupC4), &ScoreGetterGroupC4);
                 Application->CreateForm(__classid(TScoreGetterGroupD4), &ScoreGetterGroupD4);
                 Application->CreateForm(__classid(TFinalResults4), &FinalResults4);
                 Application->CreateForm(__classid(TScoreBoardC), &ScoreBoardC);
                 Application->CreateForm(__classid(TEightGroupTournament), &EightGroupTournament);
                 Application->CreateForm(__classid(TScoreGetterGroupA8), &ScoreGetterGroupA8);
                 Application->CreateForm(__classid(TScoreGetterGroupB8), &ScoreGetterGroupB8);
                 Application->CreateForm(__classid(TScoreGetterGroupC8), &ScoreGetterGroupC8);
                 Application->CreateForm(__classid(TScoreGetterGroupD8), &ScoreGetterGroupD8);
                 Application->CreateForm(__classid(TScoreGetterGroupE8), &ScoreGetterGroupE8);
                 Application->CreateForm(__classid(TScoreGetterGroupF8), &ScoreGetterGroupF8);
                 Application->CreateForm(__classid(TScoreGetterGroupG8), &ScoreGetterGroupG8);
                 Application->CreateForm(__classid(TScoreGetterGroupH8), &ScoreGetterGroupH8);
                 Application->CreateForm(__classid(TFinalResults8), &FinalResults8);
                 Application->CreateForm(__classid(TTrophyPhaseSetter), &TrophyPhaseSetter);
                 Application->CreateForm(__classid(Tsixeenth), &sixeenth);
                 Application->CreateForm(__classid(TQuarterFinal), &QuarterFinal);
                 Application->CreateForm(__classid(TSemiFinal), &SemiFinal);
                 Application->CreateForm(__classid(TFinal), &Final);
                 Application->CreateForm(__classid(TWinner), &Winner);
                 Application->CreateForm(__classid(TTrophyPhaseScore), &TrophyPhaseScore);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
