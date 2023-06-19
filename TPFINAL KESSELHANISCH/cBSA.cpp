#include "cBSA.h"
#include "cCentroSalud.h"
cBSA::cBSA(){}
cBSA::~cBSA(){}

 cReceptor* cBSA::match(cDonante* ListDonantes) {
	ePrioridad priority;
	cReceptor* winner;
	
	for (int i=0; i < ListReceptores.size(); i++) {
		if (priority < 6 && coincidirFluido(ListDonantes, ListReceptores[i])==true) { //no se bien como pasarle esa lista
			winner=contadorBSA(priority,);
		}
			priority++; //creo que no va aca
	}
	
	return 
}

void cBSA::operator+(cPaciente* nuevoMatch) {
	this->ListMatch.push_back(nuevoMatch);
}

bool cBSA::coincidirFluido(cDonante* dona, cReceptor* rece) {
	for (int i = 0; i < ListReceptores.size(); i++) {
		if (dona->GetTipoDeSangre() == eTipoDeSangre::AB_Positivo && dona->GetTipoDeSangre() == rece->GetTipoDeSangre()) {
			return true;
		}
		if (dona->GetTipoDeSangre() == eTipoDeSangre::A_Positivo) {
			if (dona->GetTipoDeSangre() == rece->GetTipoDeSangre() || rece->GetTipoDeSangre() == eTipoDeSangre::AB_Positivo)
				return true;
		}
		if (dona->GetTipoDeSangre() == eTipoDeSangre::A_Negativo) {
			if (rece->GetTipoDeSangre() == eTipoDeSangre::A_Negativo || rece->GetTipoDeSangre() == eTipoDeSangre::A_Positivo || rece->GetTipoDeSangre() == eTipoDeSangre::AB_Positivo || rece->GetTipoDeSangre() == eTipoDeSangre::AB_Negativo)
				return true;
		}
		if (dona->GetTipoDeSangre() == eTipoDeSangre::B_Positivo) {
			if (rece->GetTipoDeSangre() == eTipoDeSangre::B_Positivo || rece->GetTipoDeSangre() == eTipoDeSangre::AB_Positivo)
				return true;
		}
		if (dona->GetTipoDeSangre() == eTipoDeSangre::B_Negativo) {
			if (rece->GetTipoDeSangre() == eTipoDeSangre::B_Positivo || rece->GetTipoDeSangre() == eTipoDeSangre::B_Negativo || rece->GetTipoDeSangre() == eTipoDeSangre::AB_Positivo || rece->GetTipoDeSangre() == eTipoDeSangre::AB_Negativo)
				return true;
		}
		if (dona->GetTipoDeSangre() == eTipoDeSangre::AB_Negativo) {
			if (rece->GetTipoDeSangre() == eTipoDeSangre::AB_Positivo || rece->GetTipoDeSangre() == eTipoDeSangre::AB_Negativo)
				return true;
		}
		if (dona->GetTipoDeSangre() == eTipoDeSangre::O_Positivo) {
			if (rece->GetTipoDeSangre() == eTipoDeSangre::AB_Positivo || rece->GetTipoDeSangre() == eTipoDeSangre::A_Positivo || rece->GetTipoDeSangre() == eTipoDeSangre::B_Positivo || rece->GetTipoDeSangre() == eTipoDeSangre::O_Positivo)
				return true;
		}
		if (dona->GetTipoDeSangre() == eTipoDeSangre::O_Negativo)
			return true;
	}
	return false;
} 

cReceptor cBSA::contadorBSA(ePrioridad prioridad, cDonante* don, cReceptor* rec) {
	cReceptor* comparar1;
	cReceptor* comparar2;
	cReceptor* elijoUno;
	int contador = 0;
	if (rec->GetPrioridadReceptor() == prioridad && rec->getProvincia() == don->getProvinciaDonante()) {
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



cReceptor cBSA::compararDonantes(cReceptor* uno, cReceptor* dos) {
	cReceptor* ganador;
	if (uno->getEstado() > dos->getEstado())
		ganador = dos;
	else if (uno->getEstado() < dos->getEstado()) //por eso aca me parece q el estado tiene q ser un int
		ganador = uno;
	else
		if (uno->) {
			//aca comparo quien fue anotado primero en el listado de receptores
		}
	return ganador;
}
