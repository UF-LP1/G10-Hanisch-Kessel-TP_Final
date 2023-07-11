#pragma once
#ifndef _CBSA_H 
#define _CBSA_H


#include <vector>
#include "cCentroSalud.h"
#include "cFechas.h"
#include "cFluidos.h"

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

	cReceptor* matchDonante(cDonante* donantee, std::vector <cReceptor*> ListReceptores, vector <cDonante*> ListDonantes);
	cDonante* matchReceptor(cReceptor* receptorr, vector <cDonante*> ListDonantes, vector <cReceptor*> ListReceptor);
	void operator+(cPaciente* nuevoMatch);
	bool coincidirFluido(cDonante* dona, cReceptor* rece);
	int contadorBSA(int priority, cDonante* don, cReceptor* rec);
	cReceptor* compararReceptores(cReceptor* uno, cReceptor* dos);
	cFechas* CompararFechas(cReceptor* fecha1, cReceptor* fecha2);
	/*yo quiero que, si hay match entre paciente y donante, estos dos sean agregados a una lista de match que sera registrada en cRegistro
	quiero que ambos pacientes sean eliminados de sus respectivas listas
	*/
};

#endif // !_CBSA_H 