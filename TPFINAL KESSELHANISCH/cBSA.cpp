#include "cBSA.h"
#include "cCentroSalud.h"
cBSA::cBSA(){}
cBSA::~cBSA(){}

 cReceptor cBSA::match(cDonante d) {
	int priority = 1;
	cReceptor winner;
	
	for (int i=0; i < ListReceptores.size(); i++) {
		if (priority < 6 && coincidirFluido(d, ListReceptores[i])==true) { //no se bien como pasarle esa lista
			winner=contadorBSA();
		}
			priority++; //creo que no va aca
	}
	
	return 
}

void cBSA::operator+(cPaciente* nuevoMatch) {
	this->ListMatch.push_back(nuevoMatch);
}

bool cBSA::coincidirFluido(cDonante dona, cReceptor rece) {
	for (int i = 0; i < ListReceptores.size(); i++) {
		if (dona.GetTipoDeSangre() == "AB+" && dona.GetTipoDeSangre() == rece.GetTipoDeSangre() {
			return true;
		}
		if (dona.GetTipoDeSangre() == "A+") {
			if (dona.GetTipoDeSangre() == rece.GetTipoDeSangre() || rece.GetTipoDeSangre() == "AB+")
				return true;
		}
		if (dona.GetTipoDeSangre() == "A-") {
			if (this->rece.GetTipoDeSangre() == "A-" || rece.GetTipoDeSangre() == "A+" || rece.GetTipoDeSangre() == "AB+" || rece.GetTipoDeSangre() == "AB-")
				return true;
		}
		if (dona.GetTipoDeSangre() == "B+") {
			if (rece.GetTipoDeSangre() == "B+" || rece.GetTipoDeSangre() == "AB+")
				return true;
		}
		if (dona.GetTipoDeSangre() == "B-") {
			if (rece.GetTipoDeSangre() == "B+" || rece.GetTipoDeSangre() == "B-" || rece.GetTipoDeSangre == "AB+" || rece.GetTipoDeSangre == "AB-")
				return true;
		}
		if (dona.GetTipoDeSangre() == "AB-") {
			if (rece.GetTipoDeSangre() == "AB+" || rece.GetTipoDeSangre() == "AB-")
				return true;
		}
		if (dona.GetTipoDeSangre() == "O+") {
			if (rece.GetTipoDeSangre() == "AB+" || rece.GetTipoDeSangre() == "A+" || rece.GetTipoDeSangre() == "B+" || rece.GetTipoDeSangre() == "O+")
				return true;
		}
		if (dona.GetTipoDeSangre() == "O-")
			return true;
	}
	return false;
} 

cReceptor cBSA::contadorBSA(ePrioridad prioridad, cDonante don, cReceptor rec) {
	cReceptor comparar1;
	cReceptor comparar2;
	cReceptor elijoUno;
	int contador = 0;
	if (rec.GetPrioridadReceptor() == prioridad && rec.getProvincia() == don.getProvinciaDonante()) {
		contador++;

		if (contador > 1) {
			elijoUno = compararDonantes(comparar1, comparar2);
			comparar1 = elijoUno;
		}
		else if (contador == 1)
			rec = comparar1;     //esto esta casi listo, falta igualar comparar1 con el primer receptor que entro e igualar comparar2 con el segundo que entro que no se bien como plantearlo
	}
	return elijoUno; 
}



cReceptor cBSA::compararDonantes(cReceptor uno, cReceptor dos) {
	cReceptor ganador;
	if (uno.getEstado() > dos.getEstado())
		ganador = dos;
	else if (uno.getEstado() < dos.getEstado()) //por eso aca me parece q el estado tiene q ser un int
		ganador = uno;
	else
		if () {
			//aca comparo quien fue anotado primero en el listado de receptores
		}
	return ganador;
}
