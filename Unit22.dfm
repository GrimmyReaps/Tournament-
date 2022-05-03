object EightGroupTournament: TEightGroupTournament
  Left = 147
  Top = 0
  BorderStyle = bsSingle
  Caption = 'EightGroupTournament'
  ClientHeight = 776
  ClientWidth = 1172
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
    Left = 40
    Top = 8
    Width = 39
    Height = 13
    Caption = 'Grupa A'
  end
  object Label2: TLabel
    Left = 296
    Top = 8
    Width = 39
    Height = 13
    Caption = 'Grupa B'
  end
  object Label3: TLabel
    Left = 656
    Top = 8
    Width = 39
    Height = 13
    Caption = 'Grupa C'
  end
  object Label4: TLabel
    Left = 912
    Top = 8
    Width = 40
    Height = 13
    Caption = 'Grupa D'
  end
  object Label5: TLabel
    Left = 40
    Top = 392
    Width = 39
    Height = 13
    Caption = 'Grupa E'
  end
  object Label6: TLabel
    Left = 296
    Top = 392
    Width = 38
    Height = 13
    Caption = 'Grupa F'
  end
  object Label7: TLabel
    Left = 664
    Top = 392
    Width = 40
    Height = 13
    Caption = 'Grupa G'
  end
  object Label8: TLabel
    Left = 920
    Top = 392
    Width = 40
    Height = 13
    Caption = 'Grupa H'
  end
  object GroupABracket: TListBox
    Left = 24
    Top = 24
    Width = 241
    Height = 321
    ItemHeight = 13
    TabOrder = 0
  end
  object Button1: TButton
    Left = 40
    Top = 352
    Width = 129
    Height = 33
    Caption = 'Kolejna Runda Grupy A'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button4: TButton
    Left = 176
    Top = 352
    Width = 81
    Height = 33
    Caption = 'Wynik grupa A'
    TabOrder = 2
    OnClick = Button4Click
  end
  object GroupBBracket: TListBox
    Left = 280
    Top = 24
    Width = 241
    Height = 321
    ItemHeight = 13
    TabOrder = 3
  end
  object Button2: TButton
    Left = 296
    Top = 352
    Width = 129
    Height = 33
    Caption = 'Kolejna Runda Grupy B'
    TabOrder = 4
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 432
    Top = 352
    Width = 81
    Height = 33
    Caption = 'Wynik grupa B'
    TabOrder = 5
    OnClick = Button3Click
  end
  object GroupCBracket: TListBox
    Left = 640
    Top = 24
    Width = 241
    Height = 321
    ItemHeight = 13
    TabOrder = 6
  end
  object Button5: TButton
    Left = 640
    Top = 352
    Width = 129
    Height = 33
    Caption = 'Kolejna Runda Grupy C'
    TabOrder = 7
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 776
    Top = 352
    Width = 81
    Height = 33
    Caption = 'Wynik grupa C'
    TabOrder = 8
    OnClick = Button6Click
  end
  object GroupDBracket: TListBox
    Left = 888
    Top = 24
    Width = 241
    Height = 321
    ItemHeight = 13
    TabOrder = 9
  end
  object Button7: TButton
    Left = 896
    Top = 352
    Width = 129
    Height = 33
    Caption = 'Kolejna Runda Grupy D'
    TabOrder = 10
    OnClick = Button7Click
  end
  object Button8: TButton
    Left = 1032
    Top = 352
    Width = 81
    Height = 33
    Caption = 'Wynik grupa D'
    TabOrder = 11
    OnClick = Button8Click
  end
  object Button9: TButton
    Left = 528
    Top = 552
    Width = 97
    Height = 33
    Caption = 'Zako'#324'cz'
    TabOrder = 12
    OnClick = Button9Click
  end
  object Button10: TButton
    Left = 528
    Top = 120
    Width = 97
    Height = 41
    Caption = 'Wyniki'
    TabOrder = 13
    OnClick = Button10Click
  end
  object Button11: TButton
    Left = 520
    Top = 344
    Width = 113
    Height = 65
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
  object GroupEBracket: TListBox
    Left = 24
    Top = 408
    Width = 241
    Height = 321
    ItemHeight = 13
    TabOrder = 15
  end
  object Button12: TButton
    Left = 32
    Top = 736
    Width = 129
    Height = 33
    Caption = 'Kolejna Runda Grupy E'
    TabOrder = 16
    OnClick = Button12Click
  end
  object Button13: TButton
    Left = 168
    Top = 736
    Width = 81
    Height = 33
    Caption = 'Wynik grupa E'
    TabOrder = 17
    OnClick = Button13Click
  end
  object GroupFBracket: TListBox
    Left = 280
    Top = 408
    Width = 241
    Height = 321
    ItemHeight = 13
    TabOrder = 18
  end
  object Button14: TButton
    Left = 288
    Top = 736
    Width = 129
    Height = 33
    Caption = 'Kolejna Runda Grupy F'
    TabOrder = 19
    OnClick = Button14Click
  end
  object Button15: TButton
    Left = 424
    Top = 736
    Width = 81
    Height = 33
    Caption = 'Wynik grupa F'
    TabOrder = 20
    OnClick = Button15Click
  end
  object GroupGBracket: TListBox
    Left = 632
    Top = 408
    Width = 241
    Height = 321
    ItemHeight = 13
    TabOrder = 21
  end
  object Button16: TButton
    Left = 640
    Top = 736
    Width = 129
    Height = 33
    Caption = 'Kolejna Runda Grupy G'
    TabOrder = 22
    OnClick = Button16Click
  end
  object Button17: TButton
    Left = 776
    Top = 736
    Width = 81
    Height = 33
    Caption = 'Wynik grupa G'
    TabOrder = 23
    OnClick = Button17Click
  end
  object GroupHBracket: TListBox
    Left = 888
    Top = 408
    Width = 241
    Height = 321
    ItemHeight = 13
    TabOrder = 24
  end
  object Button18: TButton
    Left = 896
    Top = 736
    Width = 129
    Height = 33
    Caption = 'Kolejna Runda Grupy H'
    TabOrder = 25
    OnClick = Button18Click
  end
  object Button19: TButton
    Left = 1032
    Top = 736
    Width = 81
    Height = 33
    Caption = 'Wynik grupa H'
    TabOrder = 26
    OnClick = Button19Click
  end
end
