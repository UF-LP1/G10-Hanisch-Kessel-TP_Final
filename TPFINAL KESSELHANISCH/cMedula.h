#pragma once
#ifndef _CMEDULA_H
#define _CMEDULA_H


#include "cFluidos.h"
class cMedula : public cFluidos {
private:
	static int tiempoMaximoM;
public:
	cMedula(int tiempoMaximoM);
	~cMedula();

	bool verificarFechaMaxima(cFechas* fechaExtraccion);
	string getNombre();
};

#endif // !_CMEDULA_H