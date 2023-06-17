#include "cCentroSalud.h"
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

void ingresarPaciente(*cPaciente nuevo){
	//aca puedo usar sobrecarga ++?? falta lista
}
int buscarPaciente(int dni) { 
	vector<cPaciente>::iterator arti = Art.begin(); //falta lista
	int cont = 0;
	while (arti != Art.end()) {
		if (arti->getDniP() == dni) {

			return true;
		}
		cont++;
		arti._Ptr = arti._Ptr->_Next;
	}
	return false;
}
/*bool Buscar(cArticulos* articulo) {
    vector<cArticulos>::iterator arti = Art.begin();
    int cont = 0;
    while (arti != Art.end()) {
        if (arti->get_Nombre() == nombre) {

            return true;
        }
        cont++;
        arti._Ptr = arti._Ptr->_Next;
    }
  return false;
}*/
void imprimir() {}