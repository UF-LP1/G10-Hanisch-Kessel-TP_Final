
#include "cPaciente.h"

cPaciente::cPaciente() {
	this->Nombre = "";
	this->NumeroTelefono = "";
	this->Sangre = Sangre;
	this->Fluido = Fluido;
}



cPaciente::cPaciente(string Nombre, string NumeroTelefono, eTipoDeSangre Sangre, int DiaNacimeinto, int MesNacimeinto, int AnioNacimeinto, int HoraNacimeinto, int MinutosNacimeinto, eFluido Fluido, cCentroSalud* CentroDeSalud) {
	this->Nombre = Nombre;
	this->FechaNacimeinto = new cFechas(DiaNacimeinto, MesNacimeinto, AnioNacimeinto, HoraNacimeinto, MinutosNacimeinto);
	this->NumeroTelefono = NumeroTelefono;
	this->Sangre = Sangre;
	this->CentroDeSalud = CentroDeSalud;
}

cPaciente::~cPaciente() {
	delete FechaNacimeinto;
}

bool cPaciente::operator==(const cPaciente& OtroPaciente) {
	if (this->Nombre == OtroPaciente.Nombre)
		return true;
	return false;
}

void cPaciente::SetCentroDeSalud(cCentroSalud* CentroDeSalud) {
	this->CentroDeSalud = CentroDeSalud;
}



eTipoDeSangre cPaciente::GetTipoDeSangre() const {
	return Sangre;
}

eFluido cPaciente::GetFluido() const
{
	return eFluido();
}

string cPaciente::GetNombre() const {
	return Nombre;
}

cCentroSalud* cPaciente::GetCentroDeSalud() const {
	return CentroDeSalud;
}

string cPaciente::ToStringPaciente() const {
	return
		"\n Nombre:" + Nombre +
		"\n Numero de Telefono: " + NumeroTelefono +
		"\n Fecha de nacimeiento: " + FechaNacimeinto->to_stringFecha() +
		"\n Tipo de sangre: " + TipoDeSangreToString(Sangre);
}