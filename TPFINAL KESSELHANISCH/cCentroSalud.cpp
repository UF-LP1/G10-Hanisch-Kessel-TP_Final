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



// ingresamos los pacientes y vemos si son donantes o recep
void cCentroSalud::IngresarPaciente(cPaciente*paciente) {
	if (dynamic_cast<cDonante*>(paciente)) {
		ListDonantes.push_back(dynamic_cast<cDonante*>(paciente));
		std::cout << "Paciente agregado como donante." << std::endl;
	}
	else if (dynamic_cast<cReceptor*>(paciente)) {
		ListReceptores.push_back(dynamic_cast<cReceptor*>(paciente));
		std::cout << "Paciente agregado como receptor." << std::endl;
	}
	else {
		std::cout << "Tipo de paciente desconocido." << std::endl;
	}
}
cCentroSalud& cCentroSalud::operator+(cPaciente* paciente) {
	if (dynamic_cast<cDonante*>(paciente)) {
		ListDonantes.push_back(dynamic_cast<cDonante*>(paciente));
		std::cout << "Paciente agregado como donante." << std::endl;
	}
	else if (dynamic_cast<cReceptor*>(paciente)) {
		ListReceptores.push_back(dynamic_cast<cReceptor*>(paciente));
		std::cout << "Paciente agregado como receptor." << std::endl;
	}
	else {
		std::cout << "Tipo de paciente desconocido." << std::endl;
	}
	return *this;
}

cCentroSalud& cCentroSalud::operator-(cPaciente* paciente) {
	if (dynamic_cast<cDonante*>(paciente)) {
		auto it = std::find(ListDonantes.begin(), ListDonantes.end(), dynamic_cast<cDonante*>(paciente));
		if (it != ListDonantes.end()) {
			ListDonantes.erase(it);
			std::cout << "Paciente eliminado de la lista de donantes." << std::endl;
		}
		else {
			std::cout << "El paciente no está en la lista de donantes." << std::endl;
		}
	}
	else if (dynamic_cast<cReceptor*>(paciente)) {
	    auto it = std::find(ListReceptores.begin(), ListReceptores.end(), dynamic_cast<cReceptor*>(paciente));
		if (it != ListReceptores.end()) {
			ListReceptores.erase(it);
			std::cout << "Paciente eliminado de la lista de receptores." << std::endl;
		}
		else {
			std::cout << "El paciente no está en la lista de receptores." << std::endl;
		}
	}
	else {
		std::cout << "Tipo de paciente desconocido." << std::endl;
	}
	return *this;
}
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
	this->ListReceptores.push_back(receptorNuevo);
	return false;

}


void imprimir() {}