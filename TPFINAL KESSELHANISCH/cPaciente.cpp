#include "cPaciente.h"

cPaciente::cPaciente(string nombreP_, string fechaNac_, string sexo_, const int dni_){}
cPaciente::~cPaciente(){}

string cPaciente:: getNombreP() {
	return this->nombreP;
}
string cPaciente::getFechaNacP() {
	return this->fechaNac;
}
string cPaciente::getSexoP() {
	return this->sexo;
}
const int cPaciente::getDniP() {
	return this->dni;
}

void imprimir() {

}