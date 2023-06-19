#include "cPlasma.h"

cPlasma::cPlasma(){}
cPlasma::~cPlasma(){}

cFechas FechaCaducidadF(cFechas fechaExtraccion, const int tiempoMaximoP) {
} 

bool cPlasma::verificarFechaMaxima(cFechas fExtraccion) {
	int fecha;
	cFechas diferencia, fechaHoy;
	fechaHoy.setHoy();
	fecha = diferencia.HorasEntreFechas(&fExtraccion, fechaHoy);
	if (fecha > 8760) {
		return false;
	}
	return true;
}