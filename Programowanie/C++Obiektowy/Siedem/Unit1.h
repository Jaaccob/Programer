//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TPierwszy_projekt : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TLabel *Label1;
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TPierwszy_projekt(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPierwszy_projekt *Pierwszy_projekt;
//---------------------------------------------------------------------------
#endif
