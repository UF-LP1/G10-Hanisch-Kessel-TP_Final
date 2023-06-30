#include "cDonante.h"

cDonante::cDonante(string Nombre, string NumeroTelefono, eTipoDeSangre Sangre, int DiaNacimiento, int MesNacimiento, int AnioNacimiento, int HoraNacimiento, int MinutosNacimiento, cFluidos* fluido, cCentroSalud* CentroDeSalud, int DiaExtraccion, int MesExtraccion, int AnioExtraccion, int HoraExtraccion, int MinutosExtraccion, float volumenD_, bool sinTattos_, bool sinEnfermedades_, float pesoP_){
	this->fechaExtraccion = new cFechas(DiaExtraccion, MesExtraccion, AnioExtraccion, HoraExtraccion, MinutosExtraccion);
	this->volumenD = volumenD_;
	this->sinTattos = sinTattos_;
	this->sinEnfermedadesSangre = sinEnfermedades_;
	this->pesoP = pesoP_;
}
cDonante::~cDonante(){}



cFechas* cDonante::getFechaExtraccionP()
{
	return fechaExtraccion;
}
cFechas* cDonante::getFechaNacimiento()
{
	return FechaNacimeinto;
}

string cDonante::getProvinciaDonante()
{
	return CentroDeSalud->getProvinciaCS();
}

float cDonante::getVolumenDP() {
	return this->volumenD;
}

bool cDonante::getSinTatuajes()
{
	return sinTattos;
}

bool cDonante::getSinEnfermedadSagre()
{
	return sinEnfermedadesSangre;
}

bool cDonante::getPesoPacienteAct()
{
	return pesoP;
}
void cDonante::setFluidoDona(cFluidos* fluido) {
	fluido= new cFluidos
}



void cDonante::setSinTatuajes(bool sinTattos_) {
	this->sinTattos = sinTattos_;
}
void cDonante::setSinEnfermedadSangre(bool sinEnfermedades_) {
	this->sinEnfermedadesSangre = sinEnfermedades_;
}
void cDonante::setPesoPacienteAct(float pesoP_) {
	this->pesoP = pesoP_;
}
bool puedeDonar(bool sinTattos_,bool sinEnfermedades_, float pesoP_, cFechas* fNac){
	int edad;
	cFechas diferenciaDias, fechaDeHoy;
	fechaDeHoy.setHoy();
	edad = diferenciaDias.HorasEntreFechas(fNac, fechaDeHoy); 
	if (sinTattos_ == true && sinEnfermedades_ == true && edad >= 157680 && edad <= 569400 && pesoP_ >= 50) {
		return true;
	}
	return false;
}


void imprimir(){}
 