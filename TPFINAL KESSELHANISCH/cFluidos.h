#pragma once
#ifndef _CFLUIDOS_H
#define _CFLUIDOS_H


#include <string>
#include "cFechas.h"
using namespace std;

class cFluidos
{
protected:

public:
	cFluidos();
	~cFluidos();

	virtual bool verificarFechaMaxima(cFechas* fechaExtraccion); 
	virtual string getNombre();//esta rari, ver dsp. creo que el metodo en cada fluido es distinto asiq no igualo a 0
};

#endif // !_CFLUIDOS_H
