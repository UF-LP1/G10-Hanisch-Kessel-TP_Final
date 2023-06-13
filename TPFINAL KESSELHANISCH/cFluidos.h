#pragma once
#include <string>
#include "cFechas.h"
using namespace std;

class cFluidos
{
protected:
	string fechaCaducidad;
public:
	cFluidos(string fechaCaducidad_);
	~cFluidos();

	virtual cFechas FechaCaducidadF();

	virtual bool verificarFechaMaxima(); //esta rari, ver dsp. creo que el metodo en cada fluido es distinto asiq no igualo a 0
};

