#include "cReceptor.h"


cReceptor::cReceptor (string Nombre, string NumeroTelefono, eTipoDeSangre Sangre, int DiaNacimeinto, int MesNacimeinto, int AnioNacimeinto, int HoraNacimeinto, int MinutosNacimeinto, cFluidos* Fluido, cCentroSalud* CentroDeSalud, int DiaFechaLista, int MesFechaLista, int AnioFechaLista, int HoraFechaLista, int MinutosFechaLista, int prioridad_, eEstadoReceptor estado_, float cantF_):cPaciente( Nombre,  NumeroTelefono,  Sangre,  DiaNacimeinto,  MesNacimeinto,  AnioNacimeinto,  HoraNacimeinto, MinutosNacimeinto, Fluido, CentroDeSalud) {
		this->FechaListaEspera = new cFechas(DiaFechaLista, MesFechaLista, AnioFechaLista, HoraFechaLista, MinutosFechaLista);
		this->prioridad = prioridad_;
		this->cantF = cantF_;
}

cReceptor::~cReceptor() {
	delete FechaListaEspera;
	delete FechaNacimeinto;
}

cFluidos* cReceptor::GetFluidoReceptor() {
	return this->Fluido; 
}
cFechas* cReceptor::GetFechaListaEspera() {
	return this->FechaListaEspera;
}
int cReceptor::GetPrioridadReceptor() {
	return this->prioridad;
}
eEstadoReceptor cReceptor::getEstado() {
	return this->Estado;
}
float cReceptor::getCantFP() {
	return this->cantF;
}

void cReceptor::SetPrioridad(int NuevaPrioridad) {
	prioridad = NuevaPrioridad; 
	return;
}
void cReceptor::SetEstadoP(eEstadoReceptor NuevoEstado) {
	this->Estado = NuevoEstado;
	return;
}
void cReceptor::SetFluidoReceptor(cFluidos* NuevoFluido) {
	this->Fluido =  NuevoFluido;
}
string cReceptor::ToStringReceptor()const {}


ostream& operator<<(ostream& os, const cReceptor* receptor) {
	
}
void cReceptor:: imprimir(){
}

string cReceptor::getProvinciaReceptor()
{
	return CentroDeSalud->getProvinciaCS();
}
