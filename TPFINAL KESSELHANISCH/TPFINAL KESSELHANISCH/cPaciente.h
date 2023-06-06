#pragma once
#include <string>
using namespace std;
class cPaciente
{
private:
	std::string nombreP;
	std::string fechaNac;
	std::string sexo;
	const int dni;

public:
	cPaciente(string nombreP_, string fechaNac_, string sexo_, const int dni_);
	~cPaciente();

	string getNombreP();
	string getFechaNacP();
	string getSexoP();
	const int getDniP(); //no me convence el const

	void imprimir();

};

