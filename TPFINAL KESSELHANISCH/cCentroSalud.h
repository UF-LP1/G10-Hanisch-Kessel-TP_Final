#pragma once
#include <string>
#include <vector>
#include "cReceptor.h"
#include "cDonante.h"
#include "cPaciente.h"
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
	std::vector<cPaciente*>ListPacientes; //ListReceptores + ListDonantes, no se si se puede
	

public:
	cCentroSalud(string nombreC_, string direccion_, string partido_, string provincia_, string telefono);
	~cCentroSalud();

	string getNombreCS();
	string getDireccionCS();
	string getPartidoCS();
	string getTelefonoCS();
	void setTelefonoCS(string NuevoTelefono); //solo declaro un setter porque el telefono podria llegar a cambiar

	void AgregarReceptor(cReceptor receptor);
	void AgregarDonante(cDonante donante);
	bool buscarPaciente(cPaciente* ListaPacientes, const int dni);
	void eliminarPaciente(cPaciente fuera); //no tendria que ser (cPaciente* fuera)???
	void imprimir();
	void operator+(cReceptor& receptor);
	void operator+(cDonante& donante);
	void operator-(cPaciente& fuera)
};

