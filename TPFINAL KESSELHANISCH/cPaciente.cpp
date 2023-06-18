#include "cPaciente.h"

cPaciente::cPaciente(string nombreP_, string fechaNac_, string sexo_, string telefonoP_, string mailP_) {
	this->nombreP = nombreP_;
	this->fechaNac = fechaNac_;
	this-> sexo = sexo_;
	this->telefonoP = telefonoP_;
	this->mailP = mailP_;
}
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
void cPaciente::setTelefonoPac(string telefonoP_) {
	this->telefonoP = telefonoP_;
}
void imprimir() {

}