object ScoreGetterGroupD4: TScoreGetterGroupD4
  Left = 477
  Top = 249
  BorderStyle = bsNone
  Caption = 'ScoreGetterGroupD'
  ClientHeight = 161
  ClientWidth = 500
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object NameLeft: TLabel
    Left = 8
    Top = 8
    Width = 297
    Height = 20
    Align = alCustom
    Constraints.MaxHeight = 41
    Constraints.MaxWidth = 297
    Constraints.MinHeight = 20
    Constraints.MinWidth = 297
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 20
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    Layout = tlCenter
  end
  object NameRight: TLabel
    Left = 190
    Top = 88
    Width = 297
    Height = 20
    Align = alCustom
    Alignment = taRightJustify
    Anchors = [akLeft, akTop, akRight, akBottom]
    AutoSize = False
    Constraints.MaxHeight = 41
    Constraints.MaxWidth = 297
    Constraints.MinHeight = 20
    Constraints.MinWidth = 297
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 20
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    Layout = tlCenter
  end
  object Label3: TLabel
    Left = 208
    Top = 40
    Width = 34
    Height = 29
    Caption = 'VS'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 30
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label4: TLabel
    Left = 136
    Top = 120
    Width = 4
    Height = 20
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 20
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Edit1: TEdit
    Left = 8
    Top = 32
    Width = 41
    Height = 44
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -30
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 440
    Top = 32
    Width = 41
    Height = 44
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -30
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
  end
  object Button1: TButton
    Left = 16
    Top = 120
    Width = 97
    Height = 33
    Caption = 'Anuluj'
    TabOrder = 2
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 384
    Top = 120
    Width = 97
    Height = 33
    Caption = 'Zatwierd'#378
    TabOrder = 3
    OnClick = Button2Click
  end
end
