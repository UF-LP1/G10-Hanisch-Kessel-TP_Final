#include "cDonante.h"

cDonante::cDonante(bool cumpleRequisitos_, string fechaExtraccion_, float volumenD_, string FDonante_, float cantF_){
	this->cumpleRequisitos = cumpleRequisitos_;
	this->fechaExtraccion = fechaExtraccion_;
	this->volumenD = volumenD_;
	this->FDonante = FDonante_;
	this->cantF = cantF_;
}
cDonante::~cDonante(){}

bool cDonante::getCumpleRequisitosP() {
	this->cumpleRequisitos;
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
 