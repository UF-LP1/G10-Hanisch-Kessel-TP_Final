#include "cBSA.h"
#include "cCentroSalud.h"
cBSA::cBSA(){}
cBSA::~cBSA(){}

bool cBSA::match() {
	int priority = 1;
	int cont = 0;

	
	for (int i = 0; i < ListReceptores.size(); i++) {
		if (cont == 0 && priority < 6 && coincidirFluido()==true) {
			contadorBSA(int cont, int priority);
		}
			priority++;
	}
	
	
	if (cont == 1) {
		agregarMatch(); //hubo match, solo hay un paciente que coincide con todo.
		eliminarDonante(); 
		eliminarReceptor();
		/*llamo a estas funciones para eliminar a donante y receptor de sus listas.
		no se por que no me las toma si inclui a la clase cCentroSalud*/
	}
		return true;
	}
	else if (cont > 1) {
		compararDonantes(); //llamo a una funcion en la que los donantes que coincidan, se compara su estado y quien estuvo desde antes
	}
	else
		return NULL; //no coincide con ningun paciente
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
				comparar;//aca guardaria el dni del paciente 
			}
		}
	}

	}
	return contador;
}
void cBSA::agregarMatch() {
	//aca hago lo mismo que en cPaciente
}

cReceptor cBSA::compararDonantes() {
	//aca no se como hacer entre esos pacientes, pero compararia primero el estado y dsp la fecha
	//cuando termino de comparar y encuentro el match:
	agregarMatch();
}
