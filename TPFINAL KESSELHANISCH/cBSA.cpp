#include "cBSA.h"
#include "cCentroSalud.h"
cBSA::cBSA(){}
cBSA::~cBSA(){}

 cReceptor cBSA::match(cDonante* d, cReceptor* receptorFeliz) {
	int priority = 1;
	int cont = 0;
	int i;
	
	for (i=0; i < ListReceptores.size(); i++) {
		if (cont == 0 && priority < 6 && coincidirFluido()==true) {
			contadorBSA(int cont, int priority);
		}
			priority++;
	}
	
	receptorFeliz= this->ListReceptores[i];
	
	if (cont == 1) {
		this->ListMatch + d + receptorFeliz; //hubo match, solo hay un paciente que coincide con todo.
		this->ListDonantes - d; //no me tomaba el erase
		this->ListReceptores - receptorFeliz;
		/*llamo a estas funciones para eliminar a donante y receptor de sus listas.
		no se por que no me las toma si inclui a la clase cCentroSalud*/
	}
	else
		return NULL; //no coincide con ningun paciente
}

void cBSA::operator+(cPaciente* nuevoMatch) {
	this->ListMatch.push_back(nuevoMatch);
}

bool cBSA::coincidirFluido() {
	for (int i = 0; i < ListReceptores.size(); i++) {
		if () {
			//aca hago todo el bardo para ver si coincide el tipo de sangre, si es asi:
			//___==true
		}
	}
	return false;
}

int cBSA::contadorBSA(int contador, int prioridad) {
	for (int i = 0; i < ListReceptores.size(); i++) {
		if (ListReceptores[i]->getPrioridadP() == prioridad) {
			if () {
				//aca veo si coincide la provincia y cantidad de fluido, si es asi:
				contador++; //ver cantidad de pacientes con esa prioridad
				/*
				if(cont>1)
				compararDonantes();
				*/
			}
		}
	}

	}
	return contador;
}



cReceptor cBSA::compararDonantes() {
	//aca no se como hacer entre esos pacientes, pero compararia primero el estado y dsp la fecha
	//cuando termino de comparar enceuntro al receptor que voy a mandar para hacer el match
}
