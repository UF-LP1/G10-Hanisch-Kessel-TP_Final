#pragma once
#ifndef _CMEDULA_H
#define _CMEDULA_H


#include "cFluidos.h"
class cMedula : public cFluidos {
private:
	const int tiempoMaximoM;
public:
	cMedula();
	~cMedula();

	bool verificarFechaMaxima(cFechas fechaExtraccion);
};

#endif // !_CMEDULA_H