//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

int x=-6,y=-6;
int win=17;

bool kolizja(TImage* pilka, TImage* cegla){

  if(pilka->Left>=cegla->Left-pilka->Width&&
     pilka->Left<=cegla->Left+cegla->Width&&
     pilka->Top>=cegla->Top-pilka->Height&&
     pilka->Top<=cegla->Top+cegla->Height){

        return true;
        }

     else{
        return false;
     }

}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::timerballTimer(TObject *Sender)
{
     ball->Left+=x;
     ball->Top+=y;

     //odbijanie od lewej sciany

     if(ball->Left<=tlo->Left) x=-x;

     //odbijanie od gory

     if(ball->Top<=tlo->Top) y=-y;

     //odbijanie od prawej sciany

     if(ball->Left+ball->Width>=tlo->Left+tlo->Width) x=-x;


     //koneic gry

     if(ball->Top>paddle->Top){

        timerball->Enabled=false;
        ball->Visible=false;

        Button1->Caption="Przegrana! Jeszcze raz?";
        Button1->Visible=true;
     }
     else if(ball->Left>paddle->Left-((ball->Width)/2)&&ball->Left<paddle->Left+paddle->Width-((ball->Width)/2)&&ball->Top+ball->Height>paddle->Top+paddle->Height){

         if(y>0)y=-y;
     }


     //wygrana

        if(win<=0){

        timerball->Enabled=false;
        ball->Visible=false;

        Button1->Caption="Wygrana! Jeszcze raz?";
        Button1->Visible=true;
     }

     //kolizje


     if(kolizja(ball,Image1)&&Image1->Visible==true){

        x=-x; y=-y;
        Image1->Visible=false;
        win--;
     }
     if(kolizja(ball,Image2)&&Image2->Visible==true){

        x=-x; y=-y;
        Image2->Visible=false;
        win--;
     }
     if(kolizja(ball,Image3)&&Image3->Visible==true){

        x=-x; y=-y;
        Image3->Visible=false;
        win--;
     }
     if(kolizja(ball,Image4)&&Image4->Visible==true){

        x=-x; y=-y;
        Image4->Visible=false;
        win--;
     }
     if(kolizja(ball,Image5)&&Image5->Visible==true){

        x=-x; y=-y;
        Image5->Visible=false;
        win--;
     }
     if(kolizja(ball,Image6)&&Image6->Visible==true){

        x=-x; y=-y;
        Image6->Visible=false;
        win--;
     }
     if(kolizja(ball,Image7)&&Image7->Visible==true){

        x=-x; y=-y;
        Image7->Visible=false;
        win--;
     }
     if(kolizja(ball,Image8)&&Image8->Visible==true){

        x=-x; y=-y;
        Image8->Visible=false;
        win--;
     }
     if(kolizja(ball,Image9)&&Image9->Visible==true){

        x=-x; y=-y;
        Image9->Visible=false;
        win--;
     }
     if(kolizja(ball,Image10)&&Image10->Visible==true){

        x=-x; y=-y;
        Image10->Visible=false;
        win--;
     }
     if(kolizja(ball,Image11)&&Image11->Visible==true){

        x=-x; y=-y;
        Image11->Visible=false;
        win--;
     }
     if(kolizja(ball,Image12)&&Image12->Visible==true){

        x=-x; y=-y;
        Image12->Visible=false;
        win--;
     }
     if(kolizja(ball,Image13)&&Image13->Visible==true){

        x=-x; y=-y;
        Image13->Visible=false;
        win--;
     }
     if(kolizja(ball,Image14)&&Image14->Visible==true){

        x=-x; y=-y;
        Image14->Visible=false;
        win--;
     }
     if(kolizja(ball,Image15)&&Image15->Visible==true){

        x=-x; y=-y;
        Image15->Visible=false;
        win--;
     }
     if(kolizja(ball,Image16)&&Image16->Visible==true){

        x=-x; y=-y;
        Image16->Visible=false;
        win--;
     }
     if(kolizja(ball,Image17)&&Image17->Visible==true){

        x=-x; y=-y;
        Image17->Visible=false;
        win--;
     }



}
//---------------------------------------------------------------------------
void __fastcall TForm1::lewoTimer(TObject *Sender)
{
        if(paddle->Left>tlo->Left)paddle->Left-=12;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::prawoTimer(TObject *Sender)
{
        if((paddle->Left+paddle->Width)<(tlo->Width)-4)paddle->Left+=12;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
    if(Key==VK_LEFT) lewo->Enabled=true;
    if(Key==VK_RIGHT) prawo->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormKeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
    if(Key==VK_LEFT) lewo->Enabled=false;
    if(Key==VK_RIGHT) prawo->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
        ball->Left=350;
        ball->Top=350;

        ball->Visible=true;
        x=-6;y=-6;
        timerball->Enabled=true;

        Button1->Visible=false;

        win=17;
        Image1->Visible=true;Image2->Visible=true;Image3->Visible=true;
        Image4->Visible=true;Image5->Visible=true;Image6->Visible=true;
        Image7->Visible=true;Image8->Visible=true;Image9->Visible=true;
        Image10->Visible=true;Image11->Visible=true;Image12->Visible=true;
        Image13->Visible=true;Image14->Visible=true;Image15->Visible=true;
        Image16->Visible=true;Image17->Visible=true;
}
//---------------------------------------------------------------------------


