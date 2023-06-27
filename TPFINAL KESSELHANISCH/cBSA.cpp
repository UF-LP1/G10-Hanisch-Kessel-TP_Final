#include "cBSA.h"
#include "cCentroSalud.h"

cBSA::cBSA(){
}
cBSA::~cBSA(){}



cReceptor* cBSA::match(cDonante* donantee, vector <cReceptor*> ListReceptores, vector <cDonante*> ListDonantes) {
	int prioridad = 1;
	cReceptor* ElijoUno;
	cReceptor* winner;
	int cont = 0;
	cFechas diadedonacion;

	do {
		for (int i = 0; i < ListReceptores.size(); i++) {
			if (coincidirFluido(donantee, ListReceptores[i]) == true) {
				cont = contadorBSA(prioridad, donantee, ListReceptores[i]);
				if (cont == 1)
					ElijoUno = ListReceptores[i];
				else if (cont > 1) {
					ElijoUno = compararDonantes(ElijoUno, ListReceptores[i]);
				}
				else {
					 ListDonantes[i] - donantee;
					 ListReceptores [i] - ElijoUno;
					return ElijoUno; //esto creo que va mas abajo
				}
			}
		}
		if (cont == 0)
			prioridad++;
	} while (cont == 0 && prioridad < 6);

	if (cont == 0)
		return NULL; //recorrio 5 veces el for cambiando la prioridad y aun asi no hizo match. retorno null.
	else if ((verificarFechaMaxima() == true)) {
		ListDonantes - donantee;
		ListReceptores - ElijoUno;
		diadedonacion = setHoy();
		return ElijoUno;

	}
	else {
		return NULL;
		ListDonantes - donantee;
	} //hubo match pero el fluido estaba vencido, no se puede efectuar la donacion 

}


	/*en esta funcion ya hubo match asi que yo llamo para que me pase el receptor.
	Me fijo que tipo de fluido es el donante y llamo a verificarfechamaxima para verificar que el fluido no este vencido.
	Si no esta vencido, entonces se efectua la donacion. Aca elimino al donante y al receptor de sus listas
	
	deberia pasarle a cRegistro el donante y receptor
	*/

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

int cBSA::contadorBSA(int priority, cDonante* don, cReceptor* rec) {
	int contador = 0;
	if (rec->GetPrioridadReceptor() == priority && rec->getProvincia() == don->getProvinciaDonante()) {
		contador++;
	}   
	return contador; 
}

cReceptor* cBSA::compararDonantes(cReceptor* uno, cReceptor* dos) {
	cReceptor* ganador;
	cFechas* fecha;
	if (uno->getEstado() > dos->getEstado())
		ganador = dos;
	else if (uno->getEstado() < dos->getEstado()) 
		ganador = uno;
	else
		fecha = fecha->CompararFechas( uno, dos); 
	if (fecha == uno->GetFechaListaEspera()) {
		ganador = uno;
	}
	else {
		ganador = dos;
	}
	return ganador;
}
