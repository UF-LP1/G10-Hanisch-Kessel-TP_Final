#include "cReceptor.h"

cReceptor::cReceptor (string FReceptor_, string fechaLista_, int prioridad_, string estado_, float cantF_){}
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
string cReceptor::getEstadoP() {
	return this->estado;
}
float cReceptor::getCantFP() {
	return this->cantF;
}

void cReceptor::setPrioridadP(int NuevaPrioridad) {
	prioridad = NuevaPrioridad; 
	return;
}
void cReceptor::setEstadoP(string NuevoEstado) {
	estado = NuevoEstado;
	return;
}

void imprimir(){}