#pragma once
#include <string>
using namespace std;
class cPaciente
{
protected:
	string nombreP;
	string fechaNac;
	string sexo;
	const int dni;
	string telefonoP;
	string mailP;

public:
	cPaciente(string nombreP_, string fechaNac_, string sexo_, string telefonoP_, string mailP_);
	~cPaciente();

	string getNombreP();
	string getFechaNacP();
	string getSexoP();
	const int getDniP(); //no me convence el const
	void setTelefonoPac(string telefonoP_);
	void imprimir();

};

