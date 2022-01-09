//---------------------------------------------------------------------------

#ifndef UnitNotatnikH
#define UnitNotatnikH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu1;
        TMenuItem *Plik1;
        TMenuItem *Edycja1;
        TMenuItem *widok1;
        TMenuItem *Pomoc1;
        TMenuItem *Nowy1;
        TMenuItem *Cofnij1;
        TMenuItem *Format1;
        TMenuItem *ZawijanieWierszy1;
        TMenuItem *Powiekszenie1;
        TMenuItem *Wyswietlpomoc1;
        TMenuItem *N1;
        TMenuItem *Otwrz1;
        TMenuItem *Zapisz1;
        TMenuItem *Zapiszjako1;
        TMenuItem *N2;
        TMenuItem *Zakocz1;
        TMenuItem *WytnijCtrlC1;
        TMenuItem *KopiujCtrlC1;
        TMenuItem *WklejCtrlV1;
        TMenuItem *ZmianaCzcionki1;
        TMemo *tresc;
        TOpenDialog *OpenDialog1;
        TOpenDialog *OpenDialog2;
        TSaveDialog *SaveDialog1;
        TFontDialog *FontDialog1;
        TMenuItem *Informacje1;
        TMenuItem *OProgramie1;
        void __fastcall Otwrz1Click(TObject *Sender);
        void __fastcall Zapiszjako1Click(TObject *Sender);
        void __fastcall Zapisz1Click(TObject *Sender);
        void __fastcall Nowy1Click(TObject *Sender);
        void __fastcall trescKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall Zakocz1Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall WytnijCtrlC1Click(TObject *Sender);
        void __fastcall KopiujCtrlC1Click(TObject *Sender);
        void __fastcall WklejCtrlV1Click(TObject *Sender);
        void __fastcall Cofnij1Click(TObject *Sender);
        void __fastcall ZawijanieWierszy1Click(TObject *Sender);
        void __fastcall ZmianaCzcionki1Click(TObject *Sender);
        void __fastcall Oprogramie1Click(TObject *Sender);
        void __fastcall Powiekszenie1Click(TObject *Sender);
        void __fastcall Wyswietlpomoc1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
