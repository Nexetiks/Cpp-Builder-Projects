//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include"mmsystem.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int losowe[1000];
int runda=0;
int numer=0;

void sekwencja(){

        Form1->Z1->Enabled=false;
        Form1->Z2->Enabled=false;
        Form1->Z3->Enabled=false;
        Form1->Z4->Enabled=false;
        Form1->Z5->Enabled=false;

        if(runda==0){

        sndPlaySound("snd/start.wav",SND_ASYNC);
        Form1->Label1->Caption="Przygotuj sie!";
        Application->ProcessMessages(); Sleep(1000);

        sndPlaySound("snd/start.wav",SND_ASYNC);
        Form1->Label1->Caption="3";
        Application->ProcessMessages(); Sleep(1000);

        sndPlaySound("snd/start.wav",SND_ASYNC);
        Form1->Label1->Caption="2";
        Application->ProcessMessages(); Sleep(1000);

        sndPlaySound("snd/start.wav",SND_ASYNC);
        Form1->Label1->Caption="1";
        Application->ProcessMessages(); Sleep(1000);

        sndPlaySound("snd/start.wav",SND_ASYNC);
        Form1->Label1->Caption="Zapamietaj sekwencje!";
        Application->ProcessMessages(); Sleep(1000);

        Form1->Label1->Visible=false;

        Form1->Label2->Visible=true;
        }

        runda++;
        numer=0;

        for(int i=0;i<runda;i++){
        if(i==0) Application->ProcessMessages(); Sleep(400);

          if(losowe[i]==1){

                sndPlaySound("snd/d1.wav",SND_ASYNC);

                Form1->Z1a->Visible=true;
                Form1->Z1->Visible=false;

                Application->ProcessMessages(); Sleep(1000);

                Form1->Z1a->Visible=false;
                Form1->Z1->Visible=true;

                Application->ProcessMessages(); Sleep(100);
          }

          if(losowe[i]==2){

                sndPlaySound("snd/d2.wav",SND_ASYNC);

                Form1->Z2a->Visible=true;
                Form1->Z2->Visible=false;

                Application->ProcessMessages(); Sleep(1000);

                Form1->Z2a->Visible=false;
                Form1->Z2->Visible=true;

                Application->ProcessMessages(); Sleep(100);
          }

          if(losowe[i]==3){

                sndPlaySound("snd/d3.wav",SND_ASYNC);

                Form1->Z3a->Visible=true;
                Form1->Z3->Visible=false;

                Application->ProcessMessages(); Sleep(1000);

                Form1->Z3a->Visible=false;
                Form1->Z3->Visible=true;
                
                Application->ProcessMessages(); Sleep(100);
          }


          if(losowe[i]==4){

                sndPlaySound("snd/d4.wav",SND_ASYNC);

                Form1->Z4a->Visible=true;
                Form1->Z4->Visible=false;

                Application->ProcessMessages(); Sleep(1000);

                Form1->Z4a->Visible=false;
                Form1->Z4->Visible=true;
                
                Application->ProcessMessages(); Sleep(100);
          }

          if(losowe[i]==5){

                sndPlaySound("snd/d5.wav",SND_ASYNC);

                Form1->Z5a->Visible=true;
                Form1->Z5->Visible=false;

                Application->ProcessMessages(); Sleep(1000);

                Form1->Z5a->Visible=false;
                Form1->Z5->Visible=true;
                
                Application->ProcessMessages(); Sleep(100);
          }
        }

        Form1->Z1->Enabled=true;
        Form1->Z2->Enabled=true;
        Form1->Z3->Enabled=true;
        Form1->Z4->Enabled=true;
        Form1->Z5->Enabled=true;


}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormCreate(TObject *Sender)
{
        Form1->Z1->Enabled=false;
        Form1->Z2->Enabled=false;
        Form1->Z3->Enabled=false;
        Form1->Z4->Enabled=false;
        Form1->Z5->Enabled=false;

        Form1->Z1a->Enabled=false;
        Form1->Z2a->Enabled=false;
        Form1->Z3a->Enabled=false;
        Form1->Z4a->Enabled=false;
        Form1->Z5a->Enabled=false;


   randomize();
   for(int i=0;i<1000;i++){

        losowe[i]=random(5)+1;

   }


}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label1Click(TObject *Sender)
{
                  Form1->Z1->Enabled=true;
        Form1->Z2->Enabled=true;
        Form1->Z3->Enabled=true;
        Form1->Z4->Enabled=true;
        Form1->Z5->Enabled=true;

        Form1->Z1a->Enabled=true;
        Form1->Z2a->Enabled=true;
        Form1->Z3a->Enabled=true;
        Form1->Z4a->Enabled=true;
        Form1->Z5a->Enabled=true;

        if(runda>0){
        runda=0;
        }
                Form1->Label2->Visible=true;
                sekwencja();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Z1Click(TObject *Sender)
{

        if(losowe[numer]==1){


                Form1->Label2->Caption="Twoj wynik to: "+IntToStr(numer+1);

                sndPlaySound("snd/d1.wav",SND_ASYNC);

                Form1->Z1a->Visible=true;
                Form1->Z1->Visible=false;

                Application->ProcessMessages(); Sleep(500);

                Form1->Z1a->Visible=false;
                Form1->Z1->Visible=true;
                
                Application->ProcessMessages(); Sleep(100);

                numer++;
                if(numer==runda) sekwencja();

        }

         else{

        Form1->Z1->Enabled=false;
        Form1->Z2->Enabled=false;
        Form1->Z3->Enabled=false;
        Form1->Z4->Enabled=false;
        Form1->Z5->Enabled=false;

         sndPlaySound("snd/koniec.wav",SND_ASYNC);
         Form1->Label1->Caption="Przegrales, jeszcze raz?";

         Application->ProcessMessages(); Sleep(1000);


         Form1->Label1->Visible=true;
         Form1->Label1->Enabled=true;

         runda=0;
         numer=0;

        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Z2Click(TObject *Sender)
{
   if(losowe[numer]==2){


                Form1->Label2->Caption="Twoj wynik to: "+IntToStr(numer+1);

                sndPlaySound("snd/d2.wav",SND_ASYNC);

                Form1->Z2a->Visible=true;
                Form1->Z2->Visible=false;

                Application->ProcessMessages(); Sleep(500);

                Form1->Z2a->Visible=false;
                Form1->Z2->Visible=true;
                
                Application->ProcessMessages(); Sleep(100);

                numer++;
                if(numer==runda) sekwencja();

        }

        else{

        Form1->Z1->Enabled=false;
        Form1->Z2->Enabled=false;
        Form1->Z3->Enabled=false;
        Form1->Z4->Enabled=false;
        Form1->Z5->Enabled=false;

         sndPlaySound("snd/koniec.wav",SND_ASYNC);
         Form1->Label1->Caption="Przegrales, jeszcze raz?";

         Application->ProcessMessages(); Sleep(1000);


         Form1->Label1->Visible=true;
         Form1->Label1->Enabled=true;

         runda=0;
         numer=0;

        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Z3Click(TObject *Sender)
{
        if(losowe[numer]==3){


                Form1->Label2->Caption="Twoj wynik to: "+IntToStr(numer+1);

                sndPlaySound("snd/d3.wav",SND_ASYNC);

                Form1->Z3a->Visible=true;
                Form1->Z3->Visible=false;

                Application->ProcessMessages(); Sleep(500);

                Form1->Z3a->Visible=false;
                Form1->Z3->Visible=true;
                
                Application->ProcessMessages(); Sleep(100);

                numer++;
                if(numer==runda) sekwencja();

        }

         else{

        Form1->Z1->Enabled=false;
        Form1->Z2->Enabled=false;
        Form1->Z3->Enabled=false;
        Form1->Z4->Enabled=false;
        Form1->Z5->Enabled=false;

         sndPlaySound("snd/koniec.wav",SND_ASYNC);
         Form1->Label1->Caption="Przegrales, jeszcze raz?";

         Application->ProcessMessages(); Sleep(1000);


         Form1->Label1->Visible=true;
         Form1->Label1->Enabled=true;

         runda=0;
         numer=0;

        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Z4Click(TObject *Sender)
{
        if(losowe[numer]==4){


                Form1->Label2->Caption="Twoj wynik to: "+IntToStr(numer+1);

                sndPlaySound("snd/d4.wav",SND_ASYNC);
                
                Form1->Z4a->Visible=true;
                Form1->Z4->Visible=false;

                Application->ProcessMessages(); Sleep(500);

                Form1->Z4a->Visible=false;
                Form1->Z4->Visible=true;
                
                Application->ProcessMessages(); Sleep(100);

                numer++;
                if(numer==runda) sekwencja();

        }

         else{

        Form1->Z1->Enabled=false;
        Form1->Z2->Enabled=false;
        Form1->Z3->Enabled=false;
        Form1->Z4->Enabled=false;
        Form1->Z5->Enabled=false;

         sndPlaySound("snd/koniec.wav",SND_ASYNC);
         Form1->Label1->Caption="Przegrales, jeszcze raz?";

         Application->ProcessMessages(); Sleep(1000);


         Form1->Label1->Visible=true;
         Form1->Label1->Enabled=true;

         runda=0;
         numer=0;

        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Z5Click(TObject *Sender)
{
      if(losowe[numer]==5){


                Form1->Label2->Caption="Twoj wynik to: "+IntToStr(numer+1);

                sndPlaySound("snd/d5.wav",SND_ASYNC);

                Form1->Z5a->Visible=true;
                Form1->Z5->Visible=false;

                Application->ProcessMessages(); Sleep(500);

                Form1->Z5a->Visible=false;
                Form1->Z5->Visible=true;
                
                Application->ProcessMessages(); Sleep(100);

                numer++;
               if(numer==runda) sekwencja();

        }

         else{

        Form1->Z1->Enabled=false;
        Form1->Z2->Enabled=false;
        Form1->Z3->Enabled=false;
        Form1->Z4->Enabled=false;
        Form1->Z5->Enabled=false;

         sndPlaySound("snd/koniec.wav",SND_ASYNC);
         Form1->Label1->Caption="Przegrales, jeszcze raz?";

         Application->ProcessMessages(); Sleep(1000);


         Form1->Label1->Visible=true;
         Form1->Label1->Enabled=true;

         runda=0;
         numer=0;

        }
}
//---------------------------------------------------------------------------


