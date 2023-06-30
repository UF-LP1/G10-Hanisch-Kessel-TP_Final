#include "cSangre.h"

cSangre::cSangre(string tipoSangre_,const int tiempoMaximoS_) {
	this->tipoSangre = tipoSangre_;
	this->tiempoMaximoS = tiempoMaximoS_;
}
cSangre::~cSangre(){}

string cSangre::getTipoSangreP() {
	return this->tipoSangre;
}

void FechaCaducidadF() {

}

bool cSangre::verificarFechaMaxima(cFechas* fechaExtraccion) {
	int fecha;
	cFechas diferencia, fechaHoy;
	fechaHoy.setHoy();
	fecha = diferencia.HorasEntreFechas(&fechaExtraccion, fechaHoy);
	if (fecha > 1008) {
		return false;
	}
	return true;
}