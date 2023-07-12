#pragma once
#ifndef _CRECEPTOR_H
#define _CRECEPTOR_H
#include "cPaciente.h"
#include "cFechas.h"
#include "cCentroSalud.h"
using namespace std;
class cReceptor : public cPaciente {
protected:
	// lo mismo que en paciente y habia una cantidad de fluido, sera muy necesario? lo saque se puede agregar

	cFechas* FechaListaEspera = nullptr;
	int prioridad; //la prioridad va de 1 a 5, de mas urgente a menos urgente
	eEstadoReceptor Estado;
	float cantF;
public:

	cReceptor(string Nombre, string NumeroTelefono, eTipoDeSangre Sangre, int DiaNacimeinto, int MesNacimeinto, int AnioNacimeinto, int HoraNacimeinto, int MinutosNacimeinto, cFluidos* Fluido, cCentroSalud* CentroDeSalud, int DiaFechaLista, int MesFechaLista, int AnioFechaLista, int HoraFechaLista, int MinutosFechaLista, int prioridad_, eEstadoReceptor estado_, float cantF_);
	~cReceptor();
	void SetEstadoP(eEstadoReceptor NuevoEstado);
	eEstadoReceptor getEstado();
	cFechas* GetFechaListaEspera();
	void SetPrioridad(int NuevaPrioridad);
	void SetFluidoReceptor(cFluidos* NuevoFluido);
	cFluidos* GetFluidoReceptor();
	int GetPrioridadReceptor();
	string ToStringReceptor() const;
	string getProvinciaReceptor();
	float getCantFP();
};

#endif // !_CRECEPTOR_H