//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitNotatnik.h"
#include "Unit2.h"
#include "Unit2.cpp"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

AnsiString nazwapliku="";
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Otwrz1Click(TObject *Sender)
{
      if(OpenDialog2->Execute()){

        try{

                tresc->Lines->LoadFromFile(OpenDialog2->FileName);
                nazwapliku=OpenDialog2->FileName;
        }

        catch(...){
                ShowMessage("Bledna nazwa pliku, upewnij sie, ze plik istnieje na dysku");
        }
      }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Zapiszjako1Click(TObject *Sender)
{
      if(SaveDialog1->Execute()){

        try{

                tresc->Lines->SaveToFile(SaveDialog1->FileName);
                nazwapliku=SaveDialog1->FileName;
        }

        catch(...){
                ShowMessage("Zapis nieudany");
        }
      }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Zapisz1Click(TObject *Sender){

      if(nazwapliku!=""){

                tresc->Lines->SaveToFile(nazwapliku);
      }

      else{

      Form1->Zapiszjako1Click(MainMenu1);
      }

}
//---------------------------------------------------------------------------



void __fastcall TForm1::Nowy1Click(TObject *Sender)
{

if(Application->MessageBoxA("Czy na pewno utworzyc nowy plik?","Potwierdz",MB_YESNOCANCEL | MB_ICONQUESTION) == IDYES){

        tresc->Lines->Clear();
        nazwapliku="";
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::trescKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
 if(Shift.Contains(ssCtrl)){

        if(Key=='s'||Key=='S'){

                Form1->Zapisz1Click(MainMenu1);
        }
        if(Key=='n'||Key=='N'){

                Form1->Otwrz1Click(MainMenu1);
        }
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Zakocz1Click(TObject *Sender)
{

if(Application->MessageBoxA("Czy na pewno chcesz zamknac program?","Potwierdz",MB_YESNO | MB_ICONQUESTION) == IDYES){

        Application->Terminate();
}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
    if(Application->MessageBoxA("Czy na pewno chcesz zamknac program?","Potwierdz",MB_YESNO | MB_ICONQUESTION) == IDNO){

        Action=caNone;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::WytnijCtrlC1Click(TObject *Sender)
{
        tresc->CutToClipboard();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::KopiujCtrlC1Click(TObject *Sender)
{
        tresc->CopyToClipboard();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::WklejCtrlV1Click(TObject *Sender)
{
        tresc->PasteFromClipboard();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Cofnij1Click(TObject *Sender)
{
        tresc->Undo();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ZawijanieWierszy1Click(TObject *Sender)
{
        if(ZawijanieWierszy1->Checked==true){

                ZawijanieWierszy1->Checked=false;
                tresc->WordWrap=false;
                tresc->ScrollBars=ssBoth;
        }
        else{

            ZawijanieWierszy1->Checked=true;
            tresc->WordWrap=true;
            tresc->ScrollBars=ssVertical;
        }
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ZmianaCzcionki1Click(TObject *Sender)
{
          if(FontDialog1->Execute()){

                tresc->Font->Name = FontDialog1->Font->Name;

                tresc->Font->Color=FontDialog1->Font->Color;

                tresc->Font->Size=FontDialog1->Font->Size;

                tresc->Font->Style=FontDialog1->Font->Style;
       }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Oprogramie1Click(TObject *Sender)
{
        Form2->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Powiekszenie1Click(TObject *Sender)
{
         tresc->Font->Size=(tresc->Font->Size)*2;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Wyswietlpomoc1Click(TObject *Sender)
{
ShellExecute(NULL,"open","https://www.bing.com/search?q=uzyskiwanie+pomocy+dotycz%c4%85cej+notatnika+w%c2%a0systemie+windows&filters=guid:%224466414-pl-dia%22%20lang:%22pl%22&form=T00032&ocid=HelpPane-BingIA",NULL,NULL,SW_SHOWNORMAL);        
}
//---------------------------------------------------------------------------

