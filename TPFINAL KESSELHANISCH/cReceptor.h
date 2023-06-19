#pragma once
#include "cPaciente.h"
using namespace std;
class cReceptor : public cPaciente {
protected:
	// lo mismo que en paciente y habia una cantidad de fluido, sera muy necesario? lo saque se puede agregar
	cFechas* FechaListaEspera = NULL;
	ePrioridad PrioridadReceptor;
	eEstadoReceptor Estado;
public:
	cReceptor();
	cReceptor(string Nombre, string NumeroTelefono, eTipoDeSangre Sangre, int DiaNacimiento, int MesNacimiento, int AnioNacimiento, int HoraNacimiento, int MinutosNacimiento, eFluido Fluido,cCentroSalud* CentroDeSalud, int DiaListaEspera, int MesListaEspera, int AnioListaEspera, int HoraListaEspera, int MinutosListaEspera, ePrioridad Prioridad, eEstadoReceptor Estado);
	~cReceptor();
	void SetEstado(eEstadoReceptor NuevoEstado);
	eEstadoReceptor getEstado();
	cFechas* GetFechaListaEspera();
	void SetPrioridad(ePrioridad NuevaPrioridad);
	void SetFluidoReceptor(eFluido NuevoFluido);
	eFluido GetFluidoReceptor();
	ePrioridad GetPrioridadReceptor();
	string ToStringReceptor() const;
	string getProvincia();
	void imprimir();
	friend ostream& operator<<(ostream& os, const cReceptor* receptor);
};
