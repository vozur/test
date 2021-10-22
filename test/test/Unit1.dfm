object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 488
  ClientWidth = 704
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = 8
    Top = 32
    Width = 688
    Height = 441
  end
  object Button1: TButton
    Left = 168
    Top = 1
    Width = 153
    Height = 25
    Caption = 'f(X)=sin(X) + X *cos(23*X)'
    TabOrder = 0
    OnClick = Button1Click
  end
end
