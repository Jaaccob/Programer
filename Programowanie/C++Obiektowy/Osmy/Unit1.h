//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Dialogs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TMenuItem *Plik1;
	TMenuItem *Nowy1;
	TMenuItem *N1;
	TMenuItem *Otworz1;
	TMenuItem *Zapisz1;
	TMenuItem *Zapiszjako1;
	TMenuItem *N2;
	TMenuItem *Zakocz1;
	TMenuItem *Edycja1;
	TMenuItem *WtynijCtrrlX1;
	TMenuItem *KopiujCtrlC1;
	TMenuItem *WklejCtrlV1;
	TMenuItem *Format1;
	TMenuItem *Zawijaniewierszy1;
	TMenuItem *Czcionka1;
	TMenuItem *Pomoc1;
	TMenuItem *Inforamcje1;
	TMenuItem *Oprogramie1;
	TMenuItem *Zapraszamnabloga1;
	TMemo *tresc;
	TOpenDialog *OpenDialog1;
	TSaveDialog *SaveDialog1;
	TFontDialog *FontDialog1;
	void __fastcall Otworz1Click(TObject *Sender);
	void __fastcall Zapiszjako1Click(TObject *Sender);
	void __fastcall Zapisz1Click(TObject *Sender);
	void __fastcall Nowy1Click(TObject *Sender);
	void __fastcall trescKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall Zakocz1Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall WtynijCtrrlX1Click(TObject *Sender);
	void __fastcall KopiujCtrlC1Click(TObject *Sender);
	void __fastcall WklejCtrlV1Click(TObject *Sender);
	void __fastcall Zawijaniewierszy1Click(TObject *Sender);
	void __fastcall Czcionka1Click(TObject *Sender);
	void __fastcall Oprogramie1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
