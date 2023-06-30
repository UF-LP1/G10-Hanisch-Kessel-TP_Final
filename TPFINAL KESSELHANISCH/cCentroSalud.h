#pragma once
#ifndef _CCENTROSALUD_H
#define _CCENTROSALUD_H


#include <string>
#include <vector>
#include "cReceptor.h"
#include "cDonante.h"
#include "cPaciente.h"
#include <iostream>
using namespace std;
class cCentroSalud
{
protected:
	string nombreC;
	string direccion;
	string partido;
	string provincia;
	string telefono;
	std::vector <cReceptor*> ListReceptores;
	std::vector <cDonante*> ListDonantes;


public:
	cCentroSalud(string nombreC_, string direccion_, string partido_, string provincia_, string telefono);
	~cCentroSalud();

	string getNombreCS();
	string getDireccionCS();
	string getPartidoCS();
	string getProvinciaCS();
	string getTelefonoCS();
	void setTelefonoCS(string NuevoTelefono); //solo declaro un setter porque el telefono podria llegar a cambiar

	void IngresarPaciente(cPaciente* paciente);
	cCentroSalud& operator-(cPaciente* paciente);
	cCentroSalud& operator+(cPaciente* paciente);
	bool buscarReceptor(cReceptor* ListReceptores, string nombre, cReceptor* receptorNuevo);
	void imprimir();

};

#endif // !_CCENTROSALUD_H
