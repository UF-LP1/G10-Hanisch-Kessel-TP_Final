#pragma once
#include "cPaciente.h"
using namespace std;
class cReceptor : public cPaciente {
private:
	string FReceptor;
	string fechaLista;
	int prioridad;
	int estado; // 1= recibio, 2=estable, 3=inestable (de mejor a peor)
	float cantF;

public: 
	cReceptor(string FReceptor_, string fechaLista_, int prioridad_, int estado_, float cantF_);
	~cReceptor();

	string getFReceptorP();
	string getFechaListaP();
	int getPrioridadP();
	int getEstadoP();
	float getCantFP();

	void setPrioridadP(int NuevaPrioridad);
	void setEstadoP(int NuevoEstado);

	void imprimir();
};

