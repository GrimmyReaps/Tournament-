object QuarterFinal: TQuarterFinal
  Left = 478
  Top = 226
  BorderStyle = bsSingle
  Caption = 'QuarterFinal'
  ClientHeight = 261
  ClientWidth = 442
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
  object GroupBox3: TGroupBox
    Left = 0
    Top = 112
    Width = 329
    Height = 49
    Caption = 'Mecz Trzeci'
    TabOrder = 2
    object Label5: TLabel
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
    object Label6: TLabel
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
  object GroupBox4: TGroupBox
    Left = 0
    Top = 168
    Width = 329
    Height = 49
    Caption = 'Mecz Czwarty'
    TabOrder = 3
    object Label7: TLabel
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
    object Label8: TLabel
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
    TabOrder = 4
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 344
    Top = 64
    Width = 81
    Height = 33
    Caption = 'Wynik'
    TabOrder = 5
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 344
    Top = 120
    Width = 81
    Height = 33
    Caption = 'Wynik'
    TabOrder = 6
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 344
    Top = 176
    Width = 81
    Height = 33
    Caption = 'Wynik'
    TabOrder = 7
    OnClick = Button4Click
  end
  object Button9: TButton
    Left = 8
    Top = 224
    Width = 145
    Height = 33
    Caption = 'Kolejna Runda'
    Enabled = False
    TabOrder = 8
    Visible = False
    OnClick = Button9Click
  end
end
