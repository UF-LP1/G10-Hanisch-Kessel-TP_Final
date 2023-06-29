#include "cReceptor.h"
//me falta lo que esta en rojo que no se de donde sacarlo o como cambiarlo porque creo que se elimino algo que hace que no lo detecte
cReceptor::cReceptor (string FReceptor_, cFechas fechaLista_, int prioridad_, int estado_, float cantF_){
	this->FReceptor = FReceptor_;
	this->FechaListaEspera = fechaLista_;
	this->prioridad = prioridad_;
	this->Estado = estado_;
	this->cantF = cantF_;
}
cReceptor::~cReceptor(){}

eFluido cReceptor::GetFluidoReceptor() {
	return this->FReceptor; 
}
cFechas* cReceptor::GetFechaListaEspera() {
	return this->fechaLista;
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
void cReceptor::SetFluidoReceptor(eFluido NuevoFluido) {

}
string ToStringReceptor() {

}
string getProvincia() {

}
string getProvincia() {

}
ostream& operator<<(ostream& os, const cReceptor* receptor) {
	//esto no se si va
}
void imprimir(){
}