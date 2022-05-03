object ScoreBoardB: TScoreBoardB
  Left = 288
  Top = 211
  BorderStyle = bsSingle
  Caption = 'Scoreboard'
  ClientHeight = 476
  ClientWidth = 893
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
  object Label3: TLabel
    Left = 456
    Top = 8
    Width = 39
    Height = 13
    Caption = 'Grupa C'
  end
  object Label4: TLabel
    Left = 672
    Top = 8
    Width = 40
    Height = 13
    Caption = 'Grupa D'
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
  object StringGrid2: TStringGrid
    Left = 224
    Top = 24
    Width = 220
    Height = 409
    ColCount = 2
    FixedCols = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine]
    TabOrder = 1
  end
  object StringGrid3: TStringGrid
    Left = 448
    Top = 24
    Width = 220
    Height = 409
    ColCount = 2
    FixedCols = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine]
    TabOrder = 2
  end
  object StringGrid4: TStringGrid
    Left = 672
    Top = 24
    Width = 220
    Height = 409
    ColCount = 2
    FixedCols = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine]
    TabOrder = 3
  end
  object BitBtn1: TBitBtn
    Left = 376
    Top = 440
    Width = 137
    Height = 25
    Caption = '&Zamknij'
    TabOrder = 4
    Kind = bkClose
  end
end
