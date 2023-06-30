#include "cReceptor.h"
//me falta lo que esta en rojo que no se de donde sacarlo o como cambiarlo porque creo que se elimino algo que hace que no lo detecte
cReceptor::cReceptor() {}

cReceptor::cReceptor (string Nombre, string NumeroTelefono, eTipoDeSangre Sangre, int DiaNacimeinto, int MesNacimeinto, int AnioNacimeinto, int HoraNacimeinto, int MinutosNacimeinto, cFluidos* Fluido, cCentroSalud* CentroDeSalud, int DiaFechaLista, int MesFechaLista, int AnioFechaLista, int HoraFechaLista, int MinutosFechaLista, int prioridad_, eEstadoReceptor estado_, float cantF_) {
	this->FechaListaEspera = new cFechas(DiaFechaLista, MesFechaLista, AnioFechaLista, HoraFechaLista, MinutosFechaLista);
	this->prioridad = prioridad_;
	this->cantF = cantF_;

}
cReceptor::~cReceptor(){}

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
	//esto no se si va
}
void cReceptor:: imprimir(){
}