#pragma once
#ifndef _CPACIENTE_H
#define _CPACIENTE_H


#include <string>
#include "cFechas.h"
#include "Enums.h"
#include "cCentroSalud.h"
#include "cFluidos.h"
using namespace std;
class cPaciente
{
protected: //Cambie algunos atributos a enums y los que eran tipo fecha y faltaba el centro de salud
	string Nombre;
	cFechas* FechaNacimeinto = NULL;
	eSexo SexoPaciente;
	string NumeroTelefono;
	eTipoDeSangre Sangre;
	cFluidos* Fluido;
	cCentroSalud* CentroDeSalud = NULL;
public:
	cPaciente();
	cPaciente(string Nombre, string NumeroTelefono, eTipoDeSangre Sangre, int DiaNacimeinto, int MesNacimeinto, int AnioNacimeinto, int HoraNacimeinto, int MinutosNacimeinto, cFluidos* Fluido, cCentroSalud* CentroDeSalud);
	virtual ~cPaciente();
	void SetCentroDeSalud(cCentroSalud* CentroDeSalud);
	eTipoDeSangre GetTipoDeSangre() const;
	cFluidos* GetFluido() const;
	string GetNombre() const;
	cCentroSalud* GetCentroDeSalud() const;
	string ToStringPaciente() const;
	bool operator==(const cPaciente& OtroPaciente);
	virtual void imprimir() = 0;
};

#endif // !_CPACIENTE_H