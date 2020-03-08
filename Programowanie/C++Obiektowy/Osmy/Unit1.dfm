object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'NotatnikYT'
  ClientHeight = 299
  ClientWidth = 635
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object tresc: TMemo
    Left = 0
    Top = 0
    Width = 635
    Height = 299
    Align = alClient
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    ScrollBars = ssVertical
    TabOrder = 0
    OnKeyDown = trescKeyDown
  end
  object MainMenu1: TMainMenu
    Left = 592
    Top = 40
    object Plik1: TMenuItem
      Caption = '&Plik'
      object Nowy1: TMenuItem
        Caption = '&Nowy                   Ctrl+N'
        OnClick = Nowy1Click
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object Otworz1: TMenuItem
        Caption = '&Otworz'
        OnClick = Otworz1Click
      end
      object Zapisz1: TMenuItem
        Caption = 'Za&pisz                   Ctrl+S'
        OnClick = Zapisz1Click
      end
      object Zapiszjako1: TMenuItem
        Caption = 'Zapi&sz jako'
        OnClick = Zapiszjako1Click
      end
      object N2: TMenuItem
        Caption = '-'
      end
      object Zakocz1: TMenuItem
        Caption = 'Zako'#324'&cz'
        OnClick = Zakocz1Click
      end
    end
    object Edycja1: TMenuItem
      Caption = '&Edycja'
      object WtynijCtrrlX1: TMenuItem
        Caption = 'W&ytnij      Ctrl+X'
        OnClick = WtynijCtrrlX1Click
      end
      object KopiujCtrlC1: TMenuItem
        Caption = 'Kop&iuj      Ctrl+C'
        OnClick = KopiujCtrlC1Click
      end
      object WklejCtrlV1: TMenuItem
        Caption = 'Wkle&j        Ctrl+V'
        OnClick = WklejCtrlV1Click
      end
    end
    object Format1: TMenuItem
      Caption = '&Format'
      object Zawijaniewierszy1: TMenuItem
        Caption = 'Z&awijanie wierszy'
        Checked = True
        OnClick = Zawijaniewierszy1Click
      end
      object Czcionka1: TMenuItem
        Caption = '&Czcionka'
        OnClick = Czcionka1Click
      end
    end
    object Pomoc1: TMenuItem
      Caption = 'P&omoc'
      object Inforamcje1: TMenuItem
        Caption = 'I&nforamcje'
        object Oprogramie1: TMenuItem
          Caption = 'O p&rogramie'
          OnClick = Oprogramie1Click
        end
        object Zapraszamnabloga1: TMenuItem
          Caption = 'Zapraszam na blo&ga'
        end
      end
    end
  end
  object OpenDialog1: TOpenDialog
    Filter = 'Dokument tekstowy (TXT)|*.txt|Wszystkie pliki|*.*'
    Left = 560
    Top = 40
  end
  object SaveDialog1: TSaveDialog
    Filter = 'Plik tekstowy (TXT)|*.txt|Dowolny Plik|*.*'
    Options = [ofOverwritePrompt, ofHideReadOnly, ofEnableSizing]
    Left = 528
    Top = 40
  end
  object FontDialog1: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    Left = 488
    Top = 40
  end
end
