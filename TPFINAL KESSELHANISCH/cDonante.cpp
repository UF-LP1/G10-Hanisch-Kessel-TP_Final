#include "cDonante.h"

cDonante::cDonante(bool cumpleRequisitos_, string fechaExtraccion_, float volumenD_, string FDonante_, float cantF_, bool sinTattos_, bool sinEnfermedades_, float pesoP_){
	this->cumpleRequisitos = cumpleRequisitos_;
	this->fechaExtraccion = fechaExtraccion_;
	this->volumenD = volumenD_;
	this->FDonante = FDonante_;
	this->cantF = cantF_;
	this->sinTattos2a = sinTattos_;
	this->sinEnfermedadesSangre = sinEnfermedades_;
	this->pesoP = pesoP_;
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
void cDonante::setSinTatuajes(bool sinTattos_) {
	this->sinTattos2a = sinTattos_;
}
void cDonante::setSinEnfermedadSangre(bool sinEnfermedades_) {
	this->sinEnfermedadesSangre = sinEnfermedades_;
}
void cDonante::setPesoPacienteAct(float pesoP_) {
	this->pesoP = pesoP_;
}
bool puedeDonar(bool sinTattos_,bool sinEnfermedades_, float pesoP_){
	int edad = 12; // aca haria una diferencia entre el dia de hoy y la fecha de nacimiento, lo veo dsp tengo sueño
	if (sinTattos_ == true && sinEnfermedades_ == true && edad >= 18 && edad <= 65 && pesoP_ >= 50) {
		return true;
	}
	return false;
}


void imprimir(){}
 