object FourGroupTournament: TFourGroupTournament
  Left = 147
  Top = 209
  BorderStyle = bsSingle
  Caption = 'FourGroupTournament'
  ClientHeight = 459
  ClientWidth = 1171
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
    Left = 304
    Top = 8
    Width = 39
    Height = 13
    Caption = 'Grupa B'
  end
  object Label3: TLabel
    Left = 664
    Top = 8
    Width = 39
    Height = 13
    Caption = 'Grupa C'
  end
  object Label4: TLabel
    Left = 920
    Top = 8
    Width = 40
    Height = 13
    Caption = 'Grupa D'
  end
  object GroupABracket: TListBox
    Left = 32
    Top = 40
    Width = 241
    Height = 361
    ItemHeight = 13
    TabOrder = 0
  end
  object Button1: TButton
    Left = 40
    Top = 416
    Width = 129
    Height = 33
    Caption = 'Kolejna Runda Grupy A'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button4: TButton
    Left = 176
    Top = 416
    Width = 81
    Height = 33
    Caption = 'Wynik grupa A'
    TabOrder = 2
    OnClick = Button4Click
  end
  object GroupBBracket: TListBox
    Left = 288
    Top = 40
    Width = 241
    Height = 361
    ItemHeight = 13
    TabOrder = 3
  end
  object Button2: TButton
    Left = 296
    Top = 416
    Width = 129
    Height = 33
    Caption = 'Kolejna Runda Grupy B'
    TabOrder = 4
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 432
    Top = 416
    Width = 81
    Height = 33
    Caption = 'Wynik grupa B'
    TabOrder = 5
    OnClick = Button3Click
  end
  object GroupCBracket: TListBox
    Left = 640
    Top = 40
    Width = 241
    Height = 361
    ItemHeight = 13
    TabOrder = 6
  end
  object Button5: TButton
    Left = 648
    Top = 416
    Width = 129
    Height = 33
    Caption = 'Kolejna Runda Grupy C'
    TabOrder = 7
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 784
    Top = 416
    Width = 81
    Height = 33
    Caption = 'Wynik grupa C'
    TabOrder = 8
    OnClick = Button6Click
  end
  object GroupDBracket: TListBox
    Left = 896
    Top = 40
    Width = 241
    Height = 361
    ItemHeight = 13
    TabOrder = 9
  end
  object Button7: TButton
    Left = 904
    Top = 416
    Width = 129
    Height = 33
    Caption = 'Kolejna Runda Grupy D'
    TabOrder = 10
    OnClick = Button7Click
  end
  object Button8: TButton
    Left = 1040
    Top = 416
    Width = 81
    Height = 33
    Caption = 'Wynik grupa D'
    TabOrder = 11
    OnClick = Button8Click
  end
  object Button9: TButton
    Left = 536
    Top = 48
    Width = 97
    Height = 33
    Caption = 'Zako'#324'cz'
    TabOrder = 12
    OnClick = Button9Click
  end
  object Button10: TButton
    Left = 536
    Top = 88
    Width = 97
    Height = 25
    Caption = 'Wyniki'
    TabOrder = 13
    OnClick = Button10Click
  end
  object Button11: TButton
    Left = 528
    Top = 160
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
    TabOrder = 14
    Visible = False
    OnClick = Button11Click
  end
end
