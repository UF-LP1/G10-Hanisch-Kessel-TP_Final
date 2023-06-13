#pragma once
#include "cFluidos.h"
#include <string>
using namespace std;
class cSangre : cFluidos {
private:
	string tipoSangre;
	const int tiempoMaximoS;
public:
	cSangre(string tipoSangre_);
	~cSangre();

	string getTipoSangreP();
	bool verificarFechaMaxima(cFechas fechaExtraccion);
};
 
