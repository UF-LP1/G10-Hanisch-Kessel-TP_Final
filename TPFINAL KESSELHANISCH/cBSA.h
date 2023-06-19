#pragma once
#include <vector>
#include "cCentroSalud.h"

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

	cReceptor match(cDonante d);
	void operator+(cPaciente* nuevoMatch);
	cReceptor compararDonantes(cReceptor uno, cReceptor dos);
	cReceptor contadorBSA(ePrioridad prioridad, cDonante don, cReceptor rec);
	bool coincidirFluido(cDonante dona, cReceptor rece);
	/*yo quiero que, si hay match entre paciente y donante, estos dos sean agregados a una lista de match que sera registrada en cRegistro
	quiero que ambos pacientes sean eliminados de sus respectivas listas
	*/
};
