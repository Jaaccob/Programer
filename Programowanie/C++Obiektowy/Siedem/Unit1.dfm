object Pierwszy_projekt: TPierwszy_projekt
  Left = 0
  Top = 0
  Caption = 'Hello World'
  ClientHeight = 519
  ClientWidth = 1143
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 490
    Top = 180
    Width = 140
    Height = 40
    Caption = 'Hello World'
    Color = clTeal
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    Visible = False
  end
  object Button1: TButton
    Left = 430
    Top = 250
    Width = 250
    Height = 100
    Caption = 'Nacisnij mnie'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = Button1Click
  end
end
