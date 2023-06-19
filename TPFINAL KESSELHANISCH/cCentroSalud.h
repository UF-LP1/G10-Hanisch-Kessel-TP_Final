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
	std::vector<cPaciente*>ListaPacientes; 
	

public:
	cCentroSalud(string nombreC_, string direccion_, string partido_, string provincia_, string telefono);
	~cCentroSalud();

	string getNombreCS();
	string getDireccionCS();
	string getPartidoCS();
	string getTelefonoCS();
	void setTelefonoCS(string NuevoTelefono); //solo declaro un setter porque el telefono podria llegar a cambiar

	void AgregarReceptor(cReceptor* receptor);
	void AgregarDonante(cDonante* donante);
	bool buscarPaciente(cPaciente ListaPacientes, const int dni);
	void eliminarPaciente(cPaciente* ListaPacientes, cPaciente* fuera); //no tendria que ser (cPaciente* fuera)???
	void imprimir();
	void operator+(cReceptor* receptor);
	void operator+(cDonante* donante);
	void operator-(cDonante* fueraD);
	void operator- (cReceptor * fueraR);
	void eliminarDonante(cDonante* fueraD);
	void eliminarReceptor(cReceptor* fueraR);
};

