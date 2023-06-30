#pragma once
#ifndef _CSANGRE_H
#define _CSANGRE_H


#include "cFluidos.h"
#include <string>
using namespace std;
class cSangre : cFluidos {
private:
	
	static int tiempoMaximoS;
public:
	cSangre( int tiempoMaximoS_);
	~cSangre();

	
	bool verificarFechaMaxima(cFechas* fechaExtraccion);
};
#endif // !_CSANGRE_H
