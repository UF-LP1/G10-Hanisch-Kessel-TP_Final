#pragma once
#include <string>
#include <vector>
#include "cReceptor.h"
#include "cDonante.h"
#include "cPaciente.h"
#include <iostream>
using namespace std;
class cCentroSalud
{
private:
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

	void AgregarReceptor(cReceptor* receptor);
	void AgregarDonante(cDonante* donante);
	bool buscarReceptor(cReceptor* ListReceptores, const int dni, cReceptor* receptorNuevo);
	bool buscarDonante(cDonante* ListDonantes, const int dni, cDonante* donanteNuevo);
	void imprimir();
	void operator+(cReceptor* receptor);
	void operator+(cDonante* donante);
	void operator-(cDonante* fueraD);
	void operator- (cReceptor * fueraR);
};

