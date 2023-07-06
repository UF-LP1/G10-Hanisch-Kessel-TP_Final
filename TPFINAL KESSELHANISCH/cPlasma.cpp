#include "cPlasma.h"

cPlasma::cPlasma(int tiempoMaximoP):cFluidos() {
	this->tiempoMaximoP; 
}
cPlasma::~cPlasma(){}



bool cPlasma::verificarFechaMaxima(cFechas* fExtraccion) {
	int fecha;
	cFechas diferencia, fechaHoy;
	fechaHoy.setHoy();
	fecha = diferencia.HorasEntreFechas(fExtraccion, fechaHoy);
	if (fecha > 8760) {
		return false;
	}
	return true;
}