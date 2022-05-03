object TwoGroupTournament: TTwoGroupTournament
  Left = 362
  Top = 164
  BorderStyle = bsSingle
  Caption = 'TwoGroupTournament'
  ClientHeight = 457
  ClientWidth = 659
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
    Left = 48
    Top = 8
    Width = 39
    Height = 13
    Caption = 'Grupa A'
  end
  object Label2: TLabel
    Left = 392
    Top = 8
    Width = 39
    Height = 13
    Caption = 'Grupa B'
  end
  object GroupABracket: TListBox
    Left = 32
    Top = 40
    Width = 241
    Height = 361
    ItemHeight = 13
    TabOrder = 0
  end
  object GroupBBracket: TListBox
    Left = 384
    Top = 40
    Width = 241
    Height = 361
    ItemHeight = 13
    TabOrder = 1
  end
  object Button1: TButton
    Left = 40
    Top = 416
    Width = 129
    Height = 33
    Caption = 'Kolejna Runda Grupy A'
    TabOrder = 2
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 392
    Top = 416
    Width = 129
    Height = 33
    Caption = 'Kolejna Runda Grupy B'
    TabOrder = 3
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 280
    Top = 40
    Width = 97
    Height = 33
    Caption = 'Zako'#324'cz'
    TabOrder = 4
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 176
    Top = 416
    Width = 81
    Height = 33
    Caption = 'Wynik grupa A'
    TabOrder = 5
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 536
    Top = 416
    Width = 81
    Height = 33
    Caption = 'Wynik grupa B'
    TabOrder = 6
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 280
    Top = 80
    Width = 97
    Height = 25
    Caption = 'Wyniki'
    TabOrder = 7
    OnClick = Button6Click
  end
  object Button7: TButton
    Left = 272
    Top = 152
    Width = 113
    Height = 41
    Caption = 'Zako'#324'czenie'
    Enabled = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clGreen
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 8
    Visible = False
    OnClick = Button7Click
  end
end
