object TrophyPhaseSetter: TTrophyPhaseSetter
  Left = 657
  Top = 165
  BorderStyle = bsSingle
  Caption = 'TrophyPhaseSetter'
  ClientHeight = 141
  ClientWidth = 197
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
    Width = 175
    Height = 20
    Caption = 'Podaj ilo'#347#263' zawodnik'#243'w'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 20
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 8
    Top = 64
    Width = 3
    Height = 13
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 15
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Edit1: TEdit
    Left = 16
    Top = 40
    Width = 153
    Height = 21
    TabOrder = 0
  end
  object Button1: TButton
    Left = 96
    Top = 96
    Width = 97
    Height = 33
    Caption = 'Zatwierd'#378
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 16
    Top = 112
    Width = 73
    Height = 17
    Caption = 'Anuluj'
    TabOrder = 2
    OnClick = Button2Click
  end
end
