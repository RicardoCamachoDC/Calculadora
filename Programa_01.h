///-----------------------------------------------------------------
///
/// @file      Programa_01.h
/// @author    Ricardo_Camacho_Diaz_cano
/// Created:   11/04/2020 12:44:18
/// @section   DESCRIPTION
// Description: Implementar en un nuevo proyecto una calculadora con todos 
//los numeros
///------------------------------------------------------------------

#ifndef __PROGRAMA_01_H__
#define __PROGRAMA_01_H__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/textctrl.h>
#include <wx/button.h>
////Header Include End
#include <cmath>
////Dialog Style Start
#undef Programa_01_STYLE
#define Programa_01_STYLE wxCAPTION | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class Programa_01 : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		Programa_01(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("Calculadora"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = Programa_01_STYLE);
		virtual ~Programa_01();
		void Boton_01_FClick(wxCommandEvent& event);
		void Boton_02_FClick(wxCommandEvent& event);
		void Boton_Suma_FClick(wxCommandEvent& event);
		void Boton_03_FClick(wxCommandEvent& event);
		void Boton_04_FClick(wxCommandEvent& event);
		void Boton_05_FClick(wxCommandEvent& event);
		void Boton_06_FClick(wxCommandEvent& event);
		void Boton_07_FClick(wxCommandEvent& event);
		void Boton_08_FClick(wxCommandEvent& event);
		void Boton_09_FClick(wxCommandEvent& event);
		void Boton_00_FClick(wxCommandEvent& event);
		void Boton_Coma_FClick(wxCommandEvent& event);
		void Boton_Igual_FClick(wxCommandEvent& event);
		void Boton_Resta_FClick(wxCommandEvent& event);
		void Boton_Mult_FClick(wxCommandEvent& event);
		void Boton_Div_FClick(wxCommandEvent& event);
		void Boton_Raiz_FClick(wxCommandEvent& event);
		void Boton_Clear_FClick(wxCommandEvent& event);
		void Programa_01Activate(wxActivateEvent& event);
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxButton *Boton_Clear_F;
		wxButton *Boton_Raiz_F;
		wxButton *Boton_Div_F;
		wxButton *Boton_Mult_F;
		wxButton *Boton_Resta_F;
		wxButton *Boton_Coma_F;
		wxButton *Boton_00_F;
		wxButton *Boton_09_F;
		wxButton *Boton_08_F;
		wxButton *Boton_07_F;
		wxButton *Boton_06_F;
		wxButton *Boton_05_F;
		wxButton *Boton_04_F;
		wxButton *Boton_03_F;
		wxTextCtrl *Pantalla_F;
		wxButton *Boton_Igual_F;
		wxButton *Boton_Suma_F;
		wxButton *Boton_02_F;
		wxButton *Boton_01_F;
		////GUI Control Declaration End
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			Boton_Cleat = 1019,
			Boton_Raiz = 1018,
			Boton_Div = 1017,
			Boton_Mult = 1016,
			Boton_Resta = 1015,
			Boton_Coma = 1014,
			Boton_00 = 1013,
			Boton_09 = 1012,
			Boton_08 = 1011,
			Boton_07 = 1010,
			Boton_06 = 1009,
			Boton_05 = 1008,
			Boton_04 = 1007,
			Boton_03 = 1006,
			Pantalla = 1005,
			Boton_Igual = 1004,
			Boton_Suma = 1003,
			Boton_02 = 1002,
			Boton_01 = 1001,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif
