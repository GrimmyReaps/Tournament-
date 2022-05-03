object ScoreBoardA: TScoreBoardA
  Left = 521
  Top = 178
  BorderStyle = bsSingle
  Caption = 'Scoreboard'
  ClientHeight = 483
  ClientWidth = 444
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 8
    Width = 39
    Height = 13
    Caption = 'Grupa A'
  end
  object Label2: TLabel
    Left = 224
    Top = 8
    Width = 39
    Height = 13
    Caption = 'Grupa B'
  end
  object StringGrid1: TStringGrid
    Left = 0
    Top = 24
    Width = 220
    Height = 409
    ColCount = 2
    FixedCols = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine]
    TabOrder = 0
  end
  object BitBtn1: TBitBtn
    Left = 144
    Top = 448
    Width = 137
    Height = 25
    Caption = '&Zamknij'
    TabOrder = 1
    Kind = bkClose
  end
  object StringGrid2: TStringGrid
    Left = 224
    Top = 24
    Width = 220
    Height = 409
    ColCount = 2
    FixedCols = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine]
    TabOrder = 2
  end
end
