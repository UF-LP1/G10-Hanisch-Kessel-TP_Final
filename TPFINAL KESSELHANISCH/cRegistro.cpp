#include"cReceptor.h"
#include "cRegistro.h"

//aca quiero que haga un registro que muestre el donante, receptor, hospital, fecha de donacion
//tambien quiero mostrar los donantes y receptores que estan en lista de espera

/*en match ya tengo el dia que dono, el donante y el receptor. Podrua sacar el hospital tmb*/
cRegistro::cRegistro()
{
}

cRegistro::~cRegistro()
{
}

string cRegistro::ToStringDonacionesMes() {

}

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

