#pragma once
#include <string>
using namespace std;
class cFluidos
{
private:
	string fechaCaducidad;
public:
	cFluidos(string fechaCaducidad_);
	~cFluidos();

	string getFechaCaducidadF();

	virtual void verificarFechaMaxima(); //esta rari, ver dsp. creo que el metodo en cada fluido es distinto asiq no igualo a 0
};

