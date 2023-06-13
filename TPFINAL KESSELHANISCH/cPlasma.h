#pragma once
#include "cFluidos.h"
class cPlasma : public cFluidos
{
private:
	const int tiempoMaximoP;
public:
	cPlasma();
	~cPlasma();

	bool verificarFechaMaxima(cFechas fechaExtraccion);
};

