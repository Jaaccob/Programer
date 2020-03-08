		//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TPierwszy_projekt *Pierwszy_projekt;
//---------------------------------------------------------------------------
__fastcall TPierwszy_projekt::TPierwszy_projekt(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TPierwszy_projekt::Button1Click(TObject *Sender)
{
	if(Label1->Visible==false){
		  Label1 -> Visible = true;
		  Button1 -> Caption = "Schowam sie";
	}
	else{
		Label1->Visible=false;
		Button1->Caption="Pokaze sie";
	}

}
//---------------------------------------------------------------------------
