#pragma once
#include <vector>
#include "cCentroSalud.h"

class cBSA
{
private:
	std::vector <cReceptor*> ListReceptores;
	std::vector <cDonante*> ListDonantes;
	std::vector<cPaciente*>ListMatch;

public:
	cBSA();
	~cBSA();

	bool match();
	void agregarMatch();
	cReceptor compararDonantes();
	int contadorBSA(int contador, int prioridad);
	bool coincidirFluido();
	/*yo quiero que, si hay match entre paciente y donante, estos dos sean agregados a una lista de match que sera registrada en cRegistro
	quiero que ambos pacientes sean eliminados de sus respectivas listas
	*/
};
