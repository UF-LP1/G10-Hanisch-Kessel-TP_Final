#pragma once
#ifndef _CPLASMA_H
#define _CPLASMA_H


#include "cFluidos.h"
class cPlasma : public cFluidos
{
private:
	static int tiempoMaximoP;
public:
	cPlasma(int tiempoMaximoP);
	~cPlasma();

	bool verificarFechaMaxima(cFechas* fechaExtraccion);
};
#endif // !_CPLASMA_H
