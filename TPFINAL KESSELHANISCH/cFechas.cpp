#include "cFechas.h"

cFechas::cFechas() {
	fecha.tm_hour = 0;
	fecha.tm_min = 0;
	fecha.tm_sec = 0;
	fecha.tm_mday = 0;
	fecha.tm_mon = 0;
	fecha.tm_year = 0;
	fecha.tm_wday = 0;
	fecha.tm_yday = 0;
	fecha.tm_isdst = 0;
}

cFechas::cFechas(int dia, int mes, int anio, int hora, int minutos) {
	fecha.tm_hour = hora;
	fecha.tm_min = minutos;
	fecha.tm_sec = 0;
	fecha.tm_mday = dia;
	fecha.tm_mon = mes - 1;
	fecha.tm_year = anio - 1900;
	fecha.tm_wday = 0;
	fecha.tm_yday = 0;
	fecha.tm_isdst = 0;
}

cFechas::~cFechas() {

}
void cFechas::setHoy() {
	time_t now = time(0);
	tm* aux = localtime(&now);
	fecha.tm_sec = aux->tm_sec;
	fecha.tm_min = aux->tm_min;
	fecha.tm_hour = aux->tm_hour;
	fecha.tm_mday=aux->tm_mday;
	fecha.tm_mon = aux->tm_mon;
	fecha.tm_year = aux->tm_year;

}
bool cFechas::FechaCompleta() {
	if (fecha.tm_year != 0 && fecha.tm_mon != 0 && fecha.tm_mday != 0 && fecha.tm_hour >= 0 && fecha.tm_sec >= 0) {
		return true;
	}
	return false;
}
 int cFechas::HorasEntreFechas(cFechas* inicio, cFechas aux_fin) {
	int dif = 0;
	time_t aux_inicio = mktime(&(inicio->fecha));
	time_t aux_final = mktime(&(inicio->fecha));
	if ((inicio != NULL) && inicio->FechaCompleta()) {
		dif = difftime(aux_final, aux_inicio) / (3600);
		return dif;
	}
}
bool cFechas::CompararFechas(cFechas* fecha) {
	int timedif = 0;
	time_t FechaActual = 0;
	time(&FechaActual);
	time_t fecha1 = mktime(&(fecha->fecha));
	timedif = difftime(FechaActual, fecha1);
	if (timedif < 72000)
		return true;
	else
		return false;
}

string cFechas::to_stringFecha() const {
	return "\tFecha: " + to_string(fecha.tm_mday) + "/" + to_string(fecha.tm_mon + 1) + "/" + to_string(fecha.tm_year + 1900) +
		"\t Hora:" + to_string(fecha.tm_hour) + ":" + to_string(fecha.tm_min);
}

void cFechas::imprimir() const {
	cout << to_stringFecha() << endl;
}