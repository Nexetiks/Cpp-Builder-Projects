//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TTimer *Timer1;
        TButton *Godzp;
        TButton *Sekp;
        TButton *Godzm;
        TButton *Sekm;
        TButton *Minm;
        TButton *Minp;
        TButton *OK;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall GodzpClick(TObject *Sender);
        void __fastcall GodzmClick(TObject *Sender);
        void __fastcall MinpClick(TObject *Sender);
        void __fastcall MinmClick(TObject *Sender);
        void __fastcall SekpClick(TObject *Sender);
        void __fastcall SekmClick(TObject *Sender);
        void __fastcall OKClick(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
//---------------------------------------------------------------------------
