#include"cReceptor.h"
cReceptor::cReceptor() :cPaciente() {
	this->PrioridadReceptor = ePrioridad::Muy_baja;
	this->Estado = eEstadoReceptor::Estable;
}

cReceptor::cReceptor(string Nombre, string NumeroTelefono, eTipoDeSangre Sangre, int DiaNacimiento, int MesNacimiento, int AnioNacimiento, int HoraNacimiento, int MinutosNacimiento, eFluido Fluido, cCentroSalud* CentroDeSalud, int DiaListaEspera, int MesListaEspera, int AnioListaEspera, int HoraListaEspera, int MinutosListaEspera, ePrioridad Prioridad,  eEstadoReceptor Estado) :cPaciente(Nombre, NumeroTelefono, Sangre, DiaNacimiento, MesNacimiento, AnioNacimiento, HoraNacimiento, MinutosNacimiento,Fluido, CentroDeSalud) {
	this->FechaListaEspera = new cFechas(DiaListaEspera, MesListaEspera, AnioListaEspera, HoraListaEspera, MinutosListaEspera);
	this->PrioridadReceptor = Prioridad;
	this->Estado = Estado;
	
}


void cReceptor::SetEstado(eEstadoReceptor NuevoEstado) {
	this->Estado = NuevoEstado;
}

void cReceptor::SetPrioridad(ePrioridad NuevaPrioridad) {
	this->PrioridadReceptor = NuevaPrioridad;
}

void cReceptor::SetFluidoReceptor(eFluido NuevoFluido)
{
	this->Fluido = NuevoFluido;
}

eFluido cReceptor::GetFluidoReceptor()
{
	return eFluido();
}

ePrioridad cReceptor::GetPrioridadReceptor() {
	return PrioridadReceptor;
}
string cReceptor::getProvincia() {
	return CentroDeSalud->getProvinciaCS();
}

string cReceptor::ToStringReceptor() const {
	return ToStringPaciente() +
		"\n Prioridad: " + PrioridadToString(PrioridadReceptor) +
		"\n Fecha Lista de Espera: " + FechaListaEspera->to_stringFecha() +
		"\n Fluido que recibe: " + FluidoToString(Fluido) +
		"\n Estado receptor : " + EstadoReceptorToString(Estado);
}

void cReceptor::imprimir() {
	cout << ToStringReceptor() << endl;
}

ostream& operator<<(ostream& os, const cReceptor* receptor) {
	os << receptor->ToStringReceptor();
	return os;
}

