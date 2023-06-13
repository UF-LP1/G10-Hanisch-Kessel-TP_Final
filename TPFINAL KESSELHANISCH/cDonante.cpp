#include "cDonante.h"

cDonante::cDonante(string nombre_, string fechaNac_, string sexo_, const int dni_, bool cumpleRequisitos_, string fechaExtraccion_, float volumenD_, string FDonante_, float cantF_){}
cDonante::~cDonante(){}

bool cDonante::getCumpleRequisitosP() {
	return this->cumpleRequisitos;
}
cFechas cDonante::getFechaExtraccionP() {
	return this->fechaExtraccion;
}
float cDonante::getVolumenDP() {
	return this->volumenD;
}
string cDonante::getFDonanteP() {
	return this->FDonante;
}
float cDonante::getCantF() {
	return this->cantF;
}

bool puedeDonar(){}
void imprimir(){}
