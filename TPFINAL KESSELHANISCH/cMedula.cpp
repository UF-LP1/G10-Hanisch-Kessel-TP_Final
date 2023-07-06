#include "cMedula.h"

int cMedula::tiempoMaximoM = 1;

cMedula::cMedula(int tiempoMaximoM):cFluidos() {
	this->tiempoMaximoM; 
}
cMedula::~cMedula(){}



bool cMedula::verificarFechaMaxima(cFechas* fechaExtraccion) {
	int fecha;
	cFechas diferencia, fechaHoy;
	fechaHoy.setHoy();
	fecha = diferencia.HorasEntreFechas(fechaExtraccion, fechaHoy);
	if (fecha > 24) {
		return false;
	}
	return true;
}
