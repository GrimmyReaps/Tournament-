object SemiFinal: TSemiFinal
  Left = 481
  Top = 254
  BorderStyle = bsSingle
  Caption = 'SemiFinal'
  ClientHeight = 151
  ClientWidth = 433
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 0
    Top = 0
    Width = 329
    Height = 49
    Caption = 'Mecz Pierwszy'
    TabOrder = 0
    object Label1: TLabel
      Left = 8
      Top = 16
      Width = 3
      Height = 16
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = 17
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Label2: TLabel
      Left = 8
      Top = 32
      Width = 3
      Height = 16
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = 17
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
  end
  object GroupBox2: TGroupBox
    Left = 0
    Top = 56
    Width = 329
    Height = 49
    Caption = 'Mecz Drugi'
    TabOrder = 1
    object Label3: TLabel
      Left = 8
      Top = 16
      Width = 3
      Height = 16
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = 17
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Label4: TLabel
      Left = 8
      Top = 32
      Width = 3
      Height = 16
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = 17
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
  end
  object Button1: TButton
    Left = 344
    Top = 8
    Width = 81
    Height = 33
    Caption = 'Wynik'
    TabOrder = 2
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 344
    Top = 64
    Width = 81
    Height = 33
    Caption = 'Wynik'
    TabOrder = 3
    OnClick = Button2Click
  end
  object Button9: TButton
    Left = 8
    Top = 112
    Width = 145
    Height = 33
    Caption = 'Kolejna Runda'
    Enabled = False
    TabOrder = 4
    Visible = False
    OnClick = Button9Click
  end
end
