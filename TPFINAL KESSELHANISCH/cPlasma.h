#pragma once
#ifndef _CPLASMA_H
#define _CPLASMA_H


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
#endif // !_CPLASMA_H
