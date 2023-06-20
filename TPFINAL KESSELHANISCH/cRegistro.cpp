#include"cReceptor.h"


string cRegistro::ToStringReceptor() const {
	return ToStringPaciente() +
		"\n Prioridad: " + PrioridadToString(PrioridadReceptor) +
		"\n Fecha Lista de Espera: " + FechaListaEspera->to_stringFecha() +
		"\n Fluido que recibe: " + FluidoToString(Fluido) +
		"\n Estado receptor : " + EstadoReceptorToString(Estado);
}

void cRegistro::imprimir() {
	cout << ToStringRegistro() << endl;
}

ostream& operator<<(ostream& os, const cRegistro* registro) {
	os << registro->ToStringRegistro();
	return os;
}

