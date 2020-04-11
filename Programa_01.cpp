///-----------------------------------------------------------------
///
/// @file      Programa_01.cpp
/// @author    Ricardo_Camacho_Diaz_cano
/// Created:   11/04/2020 12:44:18
/// @section   DESCRIPTION
// Description: Implementar en un nuevo proyecto una calculadora con todos 
//los numeros
///------------------------------------------------------------------

#include "Programa_01.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
#include "Images/Programa_01_frmNewForm_XPM.xpm"
////Header Include End

//----------------------------------------------------------------------------
// Programa_01
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(Programa_01,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(Programa_01::OnClose)
	EVT_ACTIVATE(Programa_01::Programa_01Activate)
	EVT_BUTTON(Boton_Cleat,Programa_01::Boton_Clear_FClick)
	EVT_BUTTON(Boton_Raiz,Programa_01::Boton_Raiz_FClick)
	EVT_BUTTON(Boton_Div,Programa_01::Boton_Div_FClick)
	EVT_BUTTON(Boton_Mult,Programa_01::Boton_Mult_FClick)
	EVT_BUTTON(Boton_Resta,Programa_01::Boton_Resta_FClick)
	EVT_BUTTON(Boton_Coma,Programa_01::Boton_Coma_FClick)
	EVT_BUTTON(Boton_00,Programa_01::Boton_00_FClick)
	EVT_BUTTON(Boton_09,Programa_01::Boton_09_FClick)
	EVT_BUTTON(Boton_08,Programa_01::Boton_08_FClick)
	EVT_BUTTON(Boton_07,Programa_01::Boton_07_FClick)
	EVT_BUTTON(Boton_06,Programa_01::Boton_06_FClick)
	EVT_BUTTON(Boton_05,Programa_01::Boton_05_FClick)
	EVT_BUTTON(Boton_04,Programa_01::Boton_04_FClick)
	EVT_BUTTON(Boton_03,Programa_01::Boton_03_FClick)
	EVT_BUTTON(Boton_Igual,Programa_01::Boton_Igual_FClick)
	EVT_BUTTON(Boton_Suma,Programa_01::Boton_Suma_FClick)
	EVT_BUTTON(Boton_02,Programa_01::Boton_02_FClick)
	EVT_BUTTON(Boton_01,Programa_01::Boton_01_FClick)
END_EVENT_TABLE()
////Event Table End

Programa_01::Programa_01(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

Programa_01::~Programa_01()
{
}

void Programa_01::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	Boton_Clear_F = new wxButton(this, Boton_Cleat, _("C"), wxPoint(310, 195), wxSize(70, 70), 0, wxDefaultValidator, _("Boton_Clear_F"));
	Boton_Clear_F->SetFont(wxFont(16, wxSWISS, wxNORMAL, wxBOLD, false));

	Boton_Raiz_F = new wxButton(this, Boton_Raiz, _("sqrt"), wxPoint(310, 120), wxSize(70, 70), 0, wxDefaultValidator, _("Boton_Raiz_F"));
	Boton_Raiz_F->SetFont(wxFont(14, wxSWISS, wxNORMAL, wxBOLD, false));

	Boton_Div_F = new wxButton(this, Boton_Div, _("/"), wxPoint(235, 120), wxSize(70, 70), 0, wxDefaultValidator, _("Boton_Div_F"));
	Boton_Div_F->SetFont(wxFont(18, wxSWISS, wxNORMAL, wxBOLD, false));

	Boton_Mult_F = new wxButton(this, Boton_Mult, _("*"), wxPoint(235, 195), wxSize(70, 70), 0, wxDefaultValidator, _("Boton_Mult_F"));
	Boton_Mult_F->SetFont(wxFont(18, wxSWISS, wxNORMAL, wxBOLD, false));

	Boton_Resta_F = new wxButton(this, Boton_Resta, _("-"), wxPoint(235, 270), wxSize(70, 70), 0, wxDefaultValidator, _("Boton_Resta_F"));
	Boton_Resta_F->SetFont(wxFont(18, wxSWISS, wxNORMAL, wxBOLD, false));

	Boton_Coma_F = new wxButton(this, Boton_Coma, _(","), wxPoint(160, 345), wxSize(70, 70), 0, wxDefaultValidator, _("Boton_Coma_F"));
	Boton_Coma_F->SetFont(wxFont(18, wxSWISS, wxNORMAL, wxBOLD, false));

	Boton_00_F = new wxButton(this, Boton_00, _("0"), wxPoint(10, 345), wxSize(144, 70), 0, wxDefaultValidator, _("Boton_00_F"));
	Boton_00_F->SetFont(wxFont(18, wxSWISS, wxNORMAL, wxBOLD, false));

	Boton_09_F = new wxButton(this, Boton_09, _("9"), wxPoint(160, 120), wxSize(70, 70), 0, wxDefaultValidator, _("Boton_09_F"));
	Boton_09_F->SetFont(wxFont(18, wxSWISS, wxNORMAL, wxBOLD, false));

	Boton_08_F = new wxButton(this, Boton_08, _("8"), wxPoint(85, 120), wxSize(70, 70), 0, wxDefaultValidator, _("Boton_08_F"));
	Boton_08_F->SetFont(wxFont(18, wxSWISS, wxNORMAL, wxBOLD, false));

	Boton_07_F = new wxButton(this, Boton_07, _("7"), wxPoint(10, 120), wxSize(70, 70), 0, wxDefaultValidator, _("Boton_07_F"));
	Boton_07_F->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_SCROLLBAR));
	Boton_07_F->SetFont(wxFont(18, wxSWISS, wxNORMAL, wxBOLD, false));

	Boton_06_F = new wxButton(this, Boton_06, _("6"), wxPoint(160, 195), wxSize(70, 70), 0, wxDefaultValidator, _("Boton_06_F"));
	Boton_06_F->SetFont(wxFont(18, wxSWISS, wxNORMAL, wxBOLD, false));

	Boton_05_F = new wxButton(this, Boton_05, _("5"), wxPoint(85, 195), wxSize(70, 70), 0, wxDefaultValidator, _("Boton_05_F"));
	Boton_05_F->SetFont(wxFont(18, wxSWISS, wxNORMAL, wxBOLD, false));

	Boton_04_F = new wxButton(this, Boton_04, _("4"), wxPoint(10, 195), wxSize(70, 70), 0, wxDefaultValidator, _("Boton_04_F"));
	Boton_04_F->SetFont(wxFont(18, wxSWISS, wxNORMAL, wxBOLD, false));

	Boton_03_F = new wxButton(this, Boton_03, _("3"), wxPoint(160, 270), wxSize(70, 70), 0, wxDefaultValidator, _("Boton_03_F"));
	Boton_03_F->SetFont(wxFont(18, wxSWISS, wxNORMAL, wxBOLD, false));

	Pantalla_F = new wxTextCtrl(this, Pantalla, _("0"), wxPoint(80, 20), wxSize(230, 70), 0, wxDefaultValidator, _("Pantalla_F"));
	Pantalla_F->SetFont(wxFont(26, wxSWISS, wxNORMAL, wxNORMAL, false));

	Boton_Igual_F = new wxButton(this, Boton_Igual, _("="), wxPoint(310, 270), wxSize(70, 145), 0, wxDefaultValidator, _("Boton_Igual_F"));
	Boton_Igual_F->SetFont(wxFont(18, wxSWISS, wxNORMAL, wxBOLD, false));

	Boton_Suma_F = new wxButton(this, Boton_Suma, _("+"), wxPoint(235, 345), wxSize(70, 70), 0, wxDefaultValidator, _("Boton_Suma_F"));
	Boton_Suma_F->SetFont(wxFont(18, wxSWISS, wxNORMAL, wxBOLD, false));

	Boton_02_F = new wxButton(this, Boton_02, _("2"), wxPoint(85, 270), wxSize(70, 70), 0, wxDefaultValidator, _("Boton_02_F"));
	Boton_02_F->SetFont(wxFont(18, wxSWISS, wxNORMAL, wxBOLD, false));

	Boton_01_F = new wxButton(this, Boton_01, _("1"), wxPoint(10, 270), wxSize(70, 70), 0, wxDefaultValidator, _("Boton_01_F"));
	Boton_01_F->SetFont(wxFont(18, wxSWISS, wxNORMAL, wxBOLD, false));

	SetTitle(_("Calculadora"));
	SetIcon(Programa_01_frmNewForm_XPM);
	SetSize(80,47,400,475);
	Center();
	
	////GUI Items Creation End
}

void Programa_01::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * Boton_01_FClick
 */
void Programa_01::Boton_01_FClick(wxCommandEvent& event)
{
	if (Pantalla_F->GetValue()=="0")
    {
        Pantalla_F->ChangeValue( "1" );
    }
    else
    {
        Pantalla_F->AppendText("1");
    }  
}

/*
 * Boton_02_FClick
 */
void Programa_01::Boton_02_FClick(wxCommandEvent& event)
{
	if (Pantalla_F->GetValue()=="0")
    {
        Pantalla_F->ChangeValue( "2" );
    }
     else
     {
         Pantalla_F->AppendText("2");
    }
}

/*
 * Boton_Suma_FClick
 */
 /* Las operaciones se realizan sobre 3 auxiliares, donde primero se escriben en
 la auxiliar 1 y posterior en la auxiliar 2 para poder realizar la operacion
 que será la auxiliar. En todo momento se asigna la operacion a realizar por si 
 se pulsara el boton igual. La sintaxis es igual para las operaciones de suma,
 resta, multiplicacion y division. */
wxString palabra;
double aux1=0;
double aux2=0;
double aux=0;
int opc=0;
void Programa_01::Boton_Suma_FClick(wxCommandEvent& event)
{
	palabra=Pantalla_F->GetValue();

    if (aux1==0)
    {
        palabra.ToDouble(&aux1);
        Pantalla_F->ChangeValue( "" );
        opc=1;
     }
     else
     {
         palabra.ToDouble(&aux2);
         aux=aux1+aux2;
         palabra= wxString::Format("%f", aux);
         aux1=0;
         Pantalla_F->ChangeValue(palabra);
    }
}

/*
 * Boton_03_FClick
 */
void Programa_01::Boton_03_FClick(wxCommandEvent& event)
{
	if (Pantalla_F->GetValue()=="0")
    {
        Pantalla_F->ChangeValue( "3" );
    }
     else
     {
         Pantalla_F->AppendText("3");
    }
}

/*
 * Boton_04_FClick
 */
void Programa_01::Boton_04_FClick(wxCommandEvent& event)
{
	if (Pantalla_F->GetValue()=="0")
    {
        Pantalla_F->ChangeValue( "4" );
    }
     else
     {
         Pantalla_F->AppendText("4");
    }
}

/*
 * Boton_05_FClick
 */
void Programa_01::Boton_05_FClick(wxCommandEvent& event)
{
	if (Pantalla_F->GetValue()=="0")
    {
        Pantalla_F->ChangeValue( "5" );
    }
     else
     {
         Pantalla_F->AppendText("5");
    }
}

/*
 * Boton_06_FClick
 */
void Programa_01::Boton_06_FClick(wxCommandEvent& event)
{
	if (Pantalla_F->GetValue()=="0")
    {
        Pantalla_F->ChangeValue( "6" );
    }
     else
     {
         Pantalla_F->AppendText("6");
    }
}

/*
 * Boton_07_FClick
 */
void Programa_01::Boton_07_FClick(wxCommandEvent& event)
{
	if (Pantalla_F->GetValue()=="0")
    {
        Pantalla_F->ChangeValue( "7" );
    }
     else
     {
         Pantalla_F->AppendText("7");
    }
}

/*
 * Boton_08_FClick
 */
void Programa_01::Boton_08_FClick(wxCommandEvent& event)
{
	if (Pantalla_F->GetValue()=="0")
    {
        Pantalla_F->ChangeValue( "8" );
    }
     else
     {
         Pantalla_F->AppendText("8");
    }
}

/*
 * Boton_09_FClick
 */
void Programa_01::Boton_09_FClick(wxCommandEvent& event)
{
	if (Pantalla_F->GetValue()=="0")
    {
        Pantalla_F->ChangeValue( "9" );
    }
     else
     {
         Pantalla_F->AppendText("9");
    }
}

/*
 * Boton_00_FClick
 */
 /* El cero se introduce siempre que tenga un solo un cero la pantalla. */
void Programa_01::Boton_00_FClick(wxCommandEvent& event)
{
	if (Pantalla_F->GetValue()!="0")
    {
        Pantalla_F->AppendText( "0" );
    }
}

/*
 * Boton_Coma_FClick
 */
 /* Para la coma es diferente ya que se escribe en cualquier momento.*/
void Programa_01::Boton_Coma_FClick(wxCommandEvent& event)
{
	Pantalla_F->AppendText(",");
}


/*
 * Boton_Igual_FClick
 */
 /* Para el igual se guarda la operacion que se ha seleccionado y se muestra el
 resultado. */
void Programa_01::Boton_Igual_FClick(wxCommandEvent& event)
{
    palabra=Pantalla_F->GetValue();
	if(aux1==0)
    {
        Pantalla_F->ChangeValue(palabra);
    }
    else
    {
        if (opc==1)
	   {
            palabra.ToDouble(&aux2);
            aux=aux1+aux2;
            palabra= wxString::Format("%f", aux);
            aux1=0;
            Pantalla_F->ChangeValue(palabra);
        }
        else if(opc==2)
        {
            palabra.ToDouble(&aux2);
            aux=aux1-aux2;
            palabra= wxString::Format("%f", aux);
            aux1=0;
            Pantalla_F->ChangeValue(palabra);
        }
        else if(opc==3)
        {
            palabra.ToDouble(&aux2);
            aux=aux1*aux2;
            palabra= wxString::Format("%f", aux);
            aux1=0;
            Pantalla_F->ChangeValue(palabra);
        }
        else if (opc==4)
        {
            palabra.ToDouble(&aux2);
            aux=aux1/aux2;
            palabra= wxString::Format("%f", aux);
            aux1=0;
            Pantalla_F->ChangeValue(palabra);
        }
    }
}

/*
 * Boton_Resta_FClick
 */
void Programa_01::Boton_Resta_FClick(wxCommandEvent& event)
{
	palabra=Pantalla_F->GetValue();

    if (aux1==0)
    {
        palabra.ToDouble(&aux1);
        Pantalla_F->ChangeValue( "" );
        opc=2;
     }
     else
     {
         palabra.ToDouble(&aux2);
         aux=aux1-aux2;
         palabra= wxString::Format("%f", aux);
         aux1=0;
         Pantalla_F->ChangeValue(palabra);
    }
}

/*
 * Boton_Mult_FClick
 */
void Programa_01::Boton_Mult_FClick(wxCommandEvent& event)
{
	palabra=Pantalla_F->GetValue();

    if (aux1==0)
    {
        palabra.ToDouble(&aux1);
        Pantalla_F->ChangeValue( "" );
        opc=3;
     }
     else
     {
         palabra.ToDouble(&aux2);
         aux=aux1*aux2;
         palabra= wxString::Format("%f", aux);
         aux1=0;
         Pantalla_F->ChangeValue(palabra);
    }
}

/*
 * Boton_Div_FClick
 */
void Programa_01::Boton_Div_FClick(wxCommandEvent& event)
{
	palabra=Pantalla_F->GetValue();

    if (aux1==0)
    {
        palabra.ToDouble(&aux1);
        Pantalla_F->ChangeValue( "" );
        opc=4;
     }
     else
     {
         palabra.ToDouble(&aux2);
         aux=aux1/aux2;
         palabra= wxString::Format("%f", aux);
         aux1=0;
         Pantalla_F->ChangeValue(palabra);
    }
}

/*
 * Boton_Raiz_FClick
 */
 /* Para la raiz cuadrada se extrae el valor y si es menor que 0 se escribe Not
 a number por pantalla, si es mayor o igual realiza la raiz cuadrada, en 
 cualquiera de los dos casos se guarda en aux2 el valor por si se quiere seguir 
 operando. */ 
void Programa_01::Boton_Raiz_FClick(wxCommandEvent& event)
{
	palabra=Pantalla_F->GetValue();
	palabra.ToDouble(&aux);
	if(aux<0){
        Pantalla_F->ChangeValue("NaN");
    }
    else{
	    aux=sqrt(aux);
	    palabra= wxString::Format("%f", aux);
        Pantalla_F->ChangeValue(palabra);
    }
}

/*
 * Boton_Clear_FClick
 */
 /* Para la funcion Clear se limpia las variables y la pantalla.*/
void Programa_01::Boton_Clear_FClick(wxCommandEvent& event)
{
	aux1=0;
	aux2=0;
	aux=0;
	Pantalla_F->ChangeValue( "" );
	
}

/* OBSERVACIONES: El programa es eficiente ya que permite encadenar operaciones
de forma rapida sin tener la necesidad de pulsar el igual, el problema es que si
se quiere encadenar operaciones se tiene que pulsar dos veces, la primeras para 
mostrar el resultado y la segunda para indicar la operacion y borrar el 
resultado de la pantalla. */

/*
 * Programa_01Activate
 */
void Programa_01::Programa_01Activate(wxActivateEvent& event)
{
	// insert your code here
}
