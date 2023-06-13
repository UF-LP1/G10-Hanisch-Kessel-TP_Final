#include "cMedula.h"

cMedula::cMedula(){}
cMedula::~cMedula(){}

void FechaCaducidadF() {

}

bool cMedula::verificarFechaMaxima(cFechas fechaExtraccion) {
	int fecha;
	cFechas diferencia, fechaHoy;
	fechaHoy.setHoy();
	fecha = diferencia.HorasEntreFechas(&fechaExtraccion, fechaHoy);
	if (fecha > 24) {
		return false;
	}
	return true;
}
