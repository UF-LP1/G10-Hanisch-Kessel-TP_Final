#include "cCentroSalud.h"
#include <iostream>
using namespace std;

cCentroSalud::cCentroSalud(string nombreC_, string direccion_, string partido_, string provincia_, string telefono_){
	this->nombreC = nombreC_;
	this->direccion = direccion_;
	this->partido = partido_;
	this->provincia = provincia_;
	this->telefono = telefono_;

}
cCentroSalud::~cCentroSalud(){}

string cCentroSalud::getNombreCS() {
	return this->nombreC;
}
string cCentroSalud::getDireccionCS(){
	return this->direccion;
}
string cCentroSalud::getPartidoCS() {
	return this->partido;
}
string cCentroSalud:: getTelefonoCS() {
	return this->telefono;
}
void cCentroSalud::setTelefonoCS(string NuevoTelefono){
	this ->telefono = NuevoTelefono; 
	return;
}

void cCentroSalud::operator+(cDonante* donanteN) {
	this->ListDonantes.push_back(donanteN);
}
void cCentroSalud::operator+(cReceptor* receptorN) {
	this->ListReceptores.push_back(receptorN);
}
void cCentroSalud::operator-(cDonante* fueraD) {
	this->ListDonantes.erase(fueraD);
}
void cCentroSalud::operator-(cReceptor* fueraR) {
	this->ListDonantes.erase(fueraR);
}



bool cCentroSalud::buscarDonante(cDonante ListDonantes,const int dni, cDonante* donanteNuevo) {
	vector<cPaciente>::iterator pac = this->ListDonantes.begin(); //no le gusta
	int cont = 0;
	while (pac != this->ListDonantes.end()) {
		if (pac->getDniP() == dni) { //a chequear
			return true;
		}
		cont++;
		pac++; //no me acuerdo bien como habiamos hecho en el tp anterior en las partes q estan en rojo
	}// era asi creo

	//ingresarPaciente();
	return false;
	this->ListDonantes + donanteNuevo; //esto no se si tiene q ir en el main

}
bool cCentroSalud::buscarReceptor(cReceptor ListReceptores, const int dni, cReceptor* receptorNuevo) {
	vector<cPaciente>::iterator pac = this->ListDonantes.begin(); //no le gusta
	int cont = 0;
	while (pac != this->ListDonantes.end()) {
		if (pac->getDniP() == dni) {
			return true;
		}
		cont++;
		pac++; //no me acuerdo bien como habiamos hecho en el tp anterior en las partes q estan en rojo
	}// era asi creo

	return false;
	this->ListReceptores + receptorNuevo; //esto no se si tiene q ir en el main

}


void imprimir() {}