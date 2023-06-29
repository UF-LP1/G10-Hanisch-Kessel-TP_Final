#include "cReceptor.h"

cReceptor::cReceptor (string FReceptor_, string fechaLista_, int prioridad_, int estado_, float cantF_){
	this->FReceptor = FReceptor_;
	this->fechaLista = fechaLista_;
	this->prioridad = prioridad_;
	this->estado = estado_;
	this->cantF = cantF_;
}
cReceptor::~cReceptor(){}

string cReceptor::getFReceptorP() {
	return this->FReceptor;
}
string cReceptor::getFechaListaP() {
	return this->fechaLista;
}
int cReceptor::getPrioridadP() {
	return this->prioridad;
}
int cReceptor::getEstadoP() {
	return this->estado;
}
float cReceptor::getCantFP() {
	return this->cantF;
}

void cReceptor::setPrioridadP(int NuevaPrioridad) {
	prioridad = NuevaPrioridad; 
	return;
}
void cReceptor::setEstadoP(int NuevoEstado) {
	this->estado = NuevoEstado;
	return;
}

void imprimir(){}