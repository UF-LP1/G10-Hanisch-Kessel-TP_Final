#include "cSangre.h"

cSangre::cSangre( int tiempoMaximoS_) : cFluidos(){
	
	this->tiempoMaximoS = tiempoMaximoS_;
}
cSangre::~cSangre(){}



bool cSangre::verificarFechaMaxima(cFechas* fechaExtraccion) {
	int fecha;
	cFechas diferencia, fechaHoy;
	fechaHoy.setHoy();
	fecha = diferencia.HorasEntreFechas(fechaExtraccion, fechaHoy);
	if (fecha > 1008) {
		return false;
	}
	return true;
}