//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <MPlayer.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TImage *Tlo;
        TLabel *Label1;
        TImage *Z1;
        TImage *Z2;
        TImage *Z3;
        TImage *Z4;
        TImage *Z5;
        TImage *Z1a;
        TImage *Z2a;
        TImage *Z3a;
        TImage *Z4a;
        TImage *Z5a;
        TLabel *Label2;
        TMediaPlayer *MediaPlayer1;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Label1Click(TObject *Sender);
        void __fastcall Z1Click(TObject *Sender);
        void __fastcall Z2Click(TObject *Sender);
        void __fastcall Z3Click(TObject *Sender);
        void __fastcall Z4Click(TObject *Sender);
        void __fastcall Z5Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
