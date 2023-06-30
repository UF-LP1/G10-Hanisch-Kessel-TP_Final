#include "cMedula.h"

cMedula::cMedula(int tiempoMaximoM) { this->tiempoMaximoM; }
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
