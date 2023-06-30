#pragma once
#ifndef _CSANGRE_H
#define _CSANGRE_H


#include "cFluidos.h"
#include <string>
using namespace std;
class cSangre : cFluidos {
private:
	string tipoSangre;
	const int tiempoMaximoS;
public:
	cSangre(string tipoSangre_, const int tiempoMaximoS_);
	~cSangre();

	string getTipoSangreP();
	bool verificarFechaMaxima(cFechas* fechaExtraccion);
};
#endif // !_CSANGRE_H
