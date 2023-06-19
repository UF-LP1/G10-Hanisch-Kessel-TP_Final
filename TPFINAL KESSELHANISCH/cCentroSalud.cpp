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


void cCentroSalud::AgregarReceptor(cReceptor* receptor) {
	this->ListReceptores.push_back(receptor); //creo q me marca porque no puse la libreria pero no m acuerdo :p
}
void cCentroSalud::operator+(cDonante* donante) {
	this->ListDonantes.push_back(donante);
}

void cCentroSalud::AgregarDonante(cDonante* donante) {
	this -> ListDonantes.push_back(donante);
}

/*void cCentroSalud::ingresarPaciente(cPaciente* nuevo) {
	if (tipoPaciente == "receptor") {
		AgregarReceptor();
	}
	else
		AgregarDonante();
}*/
	

bool cCentroSalud::buscarPaciente(cPaciente ListaPacientes,const int dni) {
	vector<cPaciente>::iterator pac = this->ListaPacientes.begin(); //no le gusta
	int cont = 0;
	while (pac != this->ListaPacientes.end()) {
		if (pac->getDniP() == dni) {
			return true;
		}
		cont++;
		pac++; //no me acuerdo bien como habiamos hecho en el tp anterior en las partes q estan en rojo
	}// era asi creo

	//ingresarPaciente();
	return false;
}

void cCentroSalud::operator-(cDonante* fueraD) {
	this->ListDonantes.erase(fueraD);
}
void cCentroSalud::operator-(cReceptor* fueraR) {
	this->ListDonantes.erase(fueraR);
}
void cCentroSalud::eliminarDonante(cDonante* fueraD) {
	this->ListDonantes.erase(fueraD);
}
void cCentroSalud::eliminarReceptor(cReceptor* fueraR) {
	this->ListDonantes.erase(fueraD);
}
void imprimir() {}