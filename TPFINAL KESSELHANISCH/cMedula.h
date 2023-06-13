#pragma once
#include "cFluidos.h"
class cMedula : public cFluidos {
private:
	const int tiempoMaximoM;
public:
	cMedula();
	~cMedula();

	bool verificarFechaMaxima(cFechas fechaExtraccion);
};

