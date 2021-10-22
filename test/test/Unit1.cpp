//---------------------------------------------------------------------------

#include <vcl.h>
#include <stdlib.h>
#include <math.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
	Image1->Canvas->MoveTo(0,Image1->Height/2);
	Image1->Canvas->LineTo(Image1->Width, Image1->Height/2);
	Image1->Canvas->MoveTo(Image1->Width/2,0);
	Image1->Canvas->LineTo(Image1->Width/2, Image1->Height);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	int xp=0, yp=0, y=0;
	for (int x=-500; x<=500; x=x+1) {
		if (x==-500) {
			y=sin(float(x))+sqrt(abs(float(x)))*cos(23*(float(x)));
			Image1->Canvas->MoveTo(x+Image1->Width/2, y+Image1->Height/2);
			xp=x;
			yp=y;
		}
		else {
			y=sin(float(x))+sqrt(abs(float(x)))*cos(23*(float(x)));
			Image1->Canvas->MoveTo(x+Image1->Width/2, y+Image1->Height/2);
			Image1->Canvas->LineTo(xp+Image1->Width/2, yp+Image1->Height/2);
			xp=x;
			yp=y;
		}
	}

}
//---------------------------------------------------------------------------

