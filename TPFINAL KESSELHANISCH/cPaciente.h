#pragma once
#include <string>
#include "cFechas.h"
#include "Enums.h"
#include "cCentroSalud.h"
using namespace std;
class cPaciente
{
protected: //Cambie algunos atributos a enums y los que eran tipo fecha y faltaba el centro de salud
	string Nombre;
	cFechas* FechaNacimeinto = NULL;
	eSexo SexoPaciente;
	string NumeroTelefono;
	eTipoDeSangre Sangre;
	eFluido Fluido;
	cCentroSalud* CentroDeSalud = NULL;
public:
	cPaciente();
	cPaciente(string Nombre, string NumeroTelefono, eTipoDeSangre Sangre, cFechas* fNac, eFluido Fluido, cCentroSalud* CentroDeSalud);
	virtual ~cPaciente();
	void SetCentroDeSalud(cCentroSalud* CentroDeSalud);
	eTipoDeSangre GetTipoDeSangre() const;
	eFluido GetFluido() const;
	string GetNombre() const;
	cCentroSalud* GetCentroDeSalud() const;
	string ToStringPaciente() const;
	bool operator==(const cPaciente& OtroPaciente);
	virtual void imprimir() = 0;
};
