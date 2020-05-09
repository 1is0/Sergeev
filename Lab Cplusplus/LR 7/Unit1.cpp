//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "ctime.h"
#include "Map.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

Map* map;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	map = new Map();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
       srand(time(NULL));
       int key  = rand()%10 + 1;

       Edit2->Text = IntToStr(key);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
	if(Edit1->Text =="")
	{
	    ShowMessage("??????? ???????");
	    return;
	}

	if(Edit2->Text == "")
	{
	    ShowMessage("???????????? ????");
	    return;
	}

	Memo1->Clear();
	int key = StrToInt(Edit2->Text);
	AnsiString surname = Edit1->Text;
	map->INode(key,surname);

	map->display(Memo1);

	Edit1->Text = "";
	Edit2->Text = "";

	Label2->Enabled = true;
	Button3->Enabled =true;

	Edit3->Enabled = true;
		Button4->Enabled =true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
	if(map->pop_key())
	{
	AnsiString str = "????? ?????? ???? - " + IntToStr(map->pop_key());
	Memo1->Clear();
	Memo1->Lines->Add(str);
	}

	else
	{
			ShowMessage("?????????? ??????????");
		}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{

	if(Edit3->Text!= "" && StrToInt(Edit3->Text)<=10)
	{
	int key = StrToInt(Edit3->Text);

	Memo1->Clear();

	map->search(Memo1, key);
	}

	else
	{
		ShowMessage("???????????? ????");
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
	if(Edit3->Text!="" && StrToInt(Edit3->Text)<=10)
	{
	   int key = StrToInt(Edit3->Text);

	   map->Delete(key);

	   Memo1->Clear();
		   map->display(Memo1);
	}

	else
	{
			ShowMessage("???????????? ????");
		}
}
//---------------------------------------------------------------------------
