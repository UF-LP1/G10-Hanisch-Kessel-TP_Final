#pragma once
#include "cPaciente.h"
using namespace std;
class cReceptor : public cPaciente {
private:
	string FReceptor;
	string fechaLista;
	int prioridad;
	string estado;
	float cantF;

public: 
	cReceptor(string FReceptor_, string fechaLista_, int prioridad_, string estado_, float cantF_);
	~cReceptor();

	string getFReceptorP();
	string getFechaListaP();
	int getPrioridadP();
	string getEstadoP();
	float getCantFP();

	void setPrioridadP(int NuevaPrioridad);
	void setEstadoP(string NuevoEstado);

	void imprimir();
};

