#pragma once
#ifndef _CREGISTRO_
#define _CREGISTRO_

#include "cBSA.h"
#include "cPaciente.h"
using namespace std;
class cRegistro
{
private:

public:
	cRegistro();
	~cRegistro();
	void imprimirDonantes(vector <cDonante*> ListDonantes);
	void imprimirReceptores(vector <cReceptor*> ListReceptores);
	void imprimirCS(vector <cCentroSalud*> ListCentros);
	void imprimirMatch(vector <cDonante*> ListDonantes, vector <cReceptor*> ListReceptores);
};

#endif // !_CREGISTRO_
