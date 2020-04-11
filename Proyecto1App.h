//---------------------------------------------------------------------------
//
// Name:        Proyecto1App.h
// Author:     Ricardo_Camacho_Diaz_cano
// Created:     11/04/2020 12:44:17
// Description: Implementar en un nuevo proyecto una calculadora con todos 
//los numeros
//---------------------------------------------------------------------------

#ifndef __PROGRAMA_01App_h__
#define __PROGRAMA_01App_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class Programa_01App : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
