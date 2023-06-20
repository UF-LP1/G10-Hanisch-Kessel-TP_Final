#pragma once
#include <vector>
#include "cCentroSalud.h"
#include "cFechas.h"

class cBSA
{
private:
	std::vector<cPaciente*>ListMatch;
	std::vector<cCentroSalud*>ListCentros;
	std::vector <cReceptor*> ListReceptores;
	std::vector <cDonante*> ListDonantes;

public:
	cBSA();
	~cBSA();

	cReceptor* match(cDonante* donantee);
	void operator+(cPaciente* nuevoMatch);
	bool coincidirFluido(cDonante* dona, cReceptor* rece);
	int contadorBSA(int priority, cDonante* don, cReceptor* rec);
	cReceptor* compararDonantes(cReceptor* uno, cReceptor* dos);
	/*yo quiero que, si hay match entre paciente y donante, estos dos sean agregados a una lista de match que sera registrada en cRegistro
	quiero que ambos pacientes sean eliminados de sus respectivas listas
	*/
};
