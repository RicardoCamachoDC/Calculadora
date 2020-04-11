//---------------------------------------------------------------------------
//
// Name:        Proyecto1App.cpp
// Author:      Ricardo_Camacho_Diaz_cano
// Created:     11/04/2020 12:44:17
// Description: Implementar en un nuevo proyecto una calculadora con todos 
//los numeros
//---------------------------------------------------------------------------

#include "Proyecto1App.h"
#include "Programa_01.h"

IMPLEMENT_APP(Programa_01App)

bool Programa_01App::OnInit()
{
    Programa_01* frame = new Programa_01(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int Programa_01App::OnExit()
{
	return 0;
}
