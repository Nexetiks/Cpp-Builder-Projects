//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int s=108015;
int godzin,minut,sekund;
int startgodz=23,startmin=59,startsek=59;
AnsiString stgodz, stmin, stsek;
AnsiString godz,min,sek;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
        stgodz=IntToStr(startgodz);
        stmin=IntToStr(startmin);
        stsek=IntToStr(startsek);

        Label2->Caption=stgodz;
        Label3->Caption=stmin;
        Label4->Caption=stsek;

        s--;
        godzin=s/3600;
        minut=(s-godzin*3600)/60;
        sekund=s-godzin*3600-minut*60;

        godz=IntToStr(godzin);
        min=IntToStr(minut);
        sek=IntToStr(sekund);

        if(godzin<10) godz="0"+godz;
        if(minut<10) min="0"+min;
        if(sekund<10) sek="0"+sek;

        Form1->Label1->Caption=godz+":"+min+":"+sek;

        if(s<=0){
          Form1->Label1->Caption="Koniec czasu!" ;
          Timer1->Enabled=false;
        }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::GodzpClick(TObject *Sender)
{
startgodz++;

stgodz=IntToStr(startgodz);
        stmin=IntToStr(startmin);
        stsek=IntToStr(startsek);

        Label2->Caption=stgodz;
        Label3->Caption=stmin;
        Label4->Caption=stsek;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::GodzmClick(TObject *Sender)
{    if(startgodz>0){
     startgodz--;
     }

     stgodz=IntToStr(startgodz);
        stmin=IntToStr(startmin);
        stsek=IntToStr(startsek);

        Label2->Caption=stgodz;
        Label3->Caption=stmin;
        Label4->Caption=stsek;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::MinpClick(TObject *Sender)
{
if(startmin<58){
startmin++;
}

stgodz=IntToStr(startgodz);
        stmin=IntToStr(startmin);
        stsek=IntToStr(startsek);

        Label2->Caption=stgodz;
        Label3->Caption=stmin;
        Label4->Caption=stsek;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::MinmClick(TObject *Sender)
{
if(startmin>0){
startmin--;
}

stgodz=IntToStr(startgodz);
        stmin=IntToStr(startmin);
        stsek=IntToStr(startsek);

        Label2->Caption=stgodz;
        Label3->Caption=stmin;
        Label4->Caption=stsek;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SekpClick(TObject *Sender)
{
       if(startsek<58){
     startsek++;
     }

     stgodz=IntToStr(startgodz);
        stmin=IntToStr(startmin);
        stsek=IntToStr(startsek);

        Label2->Caption=stgodz;
        Label3->Caption=stmin;
        Label4->Caption=stsek;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SekmClick(TObject *Sender)
{
     if(startsek>0){
     startsek--;
     }

     stgodz=IntToStr(startgodz);
        stmin=IntToStr(startmin);
        stsek=IntToStr(startsek);

        Label2->Caption=stgodz;
        Label3->Caption=stmin;
        Label4->Caption=stsek;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::OKClick(TObject *Sender)
{
               stgodz=IntToStr(startgodz);
        stmin=IntToStr(startmin);
        stsek=IntToStr(startsek);

        Label2->Caption=stgodz;
        Label3->Caption=stmin;
        Label4->Caption=stsek;
        
Godzm->Visible=false;
Godzp->Visible=false;

Minm->Visible=false;
Minp->Visible=false;

Sekp->Visible=false;
Sekm->Visible=false;

 Label2->Visible=false;
        Label3->Visible=false;
        Label4->Visible=false;

s=startsek+startmin*60+startgodz*3600;

OK->Visible=false;

Label1->Visible=true;

}





void __fastcall TForm1::FormCreate(TObject *Sender)
{
        stgodz=IntToStr(startgodz);
        stmin=IntToStr(startmin);
        stsek=IntToStr(startsek);

        Label2->Caption=stgodz;
        Label3->Caption=stmin;
        Label4->Caption=stsek;
}
//---------------------------------------------------------------------------

