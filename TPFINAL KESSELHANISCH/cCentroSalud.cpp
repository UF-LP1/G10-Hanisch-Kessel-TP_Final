#include "cCentroSalud.h"
#include <>
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

void cCentroSalud::operator+(cReceptor &receptor){
	this->push_back(receptor);
}

void cCentroSalud::AgregarReceptor(cReceptor receptor) {
	this->ListReceptores + receptor; //creo q me marca porque no puse la libreria pero no m acuerdo :p
}
void cCentroSalud::operator+(cDonante &donante) {
	this->push_back(donante) //te parece bien esto?? No se si hay que declarar tanto o usar punteros cDonante* donanteNuevo
}
void cCentroSalud::AgregarDonante(cDonante donante) {
	this -> ListDonantes + donante;
}

/*void cCentroSalud::ingresarPaciente(cPaciente* nuevo) {
	if (tipoPaciente == "receptor") {
		AgregarReceptor();
	}
	else
		AgregarDonante();
}*/
	

bool cCentroSalud::buscarPaciente(cPaciente* ListaPacientes,const int dni) {
	vector<cPaciente>::iterator pac = ListaPacientes.begin(); //no le gusta
	int cont = 0;
	while (pac != ListaPacientes.end()) {
		if (pac->getDniP() == dni) {
			return true;
		}
		cont++;
		pac._Ptr = pac._Ptr->_Next; //no me acuerdo bien como habiamos hecho en el tp anterior en las partes q estan en rojo
	}

	//ingresarPaciente();
	return false;
}

void cCentroSalud::operator-(cPaciente& fuera) {
	this->erase(fuera);
}
void cCentroSalud::eliminarPaciente(cPaciente fuera) {
	this->ListPacientes - fuera;
}
void imprimir() {}