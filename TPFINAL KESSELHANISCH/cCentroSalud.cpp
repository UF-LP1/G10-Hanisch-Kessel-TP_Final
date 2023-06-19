#include "cCentroSalud.h"
#include <iostream>
using namespace std;
//No pude arreglar nada
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
string cCentroSalud::getProvinciaCS() {
	return this->provincia;
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
	for (i = 0; i < ListReceptores[i].end(); i++) {
		ListReceptores.erase(ListReceptores.begin() + i );
	}
}

//NO me dejan claro estas funciones

bool cCentroSalud::buscarReceptor(cReceptor* ListReceptores, string nombre, cReceptor* receptorNuevo) {
	vector<cReceptor*>::iterator pac = this->ListReceptores.begin(); //no le gusta
	int cont = 0;
	while (pac != this->ListReceptores.end()) {
		if (ListReceptores->GetNombre() == nombre) {
			return true;
		}
		cont++;
		pac++; //no me acuerdo bien como habiamos hecho en el tp anterior en las partes q estan en rojo
	}// era asi creo

	return false;
	this->ListReceptores.push_back(receptorNuevo); //esto no se si tiene q ir en el main

}


void imprimir() {}