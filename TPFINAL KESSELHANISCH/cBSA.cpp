#include "cBSA.h"
#include "cCentroSalud.h"

cBSA::cBSA(){
}
cBSA::~cBSA(){}


//ingresa un donante nuevo, recorro la lista y busco un receptor
cReceptor* cBSA::matchDonante(cDonante* donantee, vector <cReceptor*> ListReceptores, vector <cDonante*> ListDonantes)
{
	int prioridad = 1;
	cReceptor* ElijoUno=nullptr;
	cReceptor* winner=nullptr;
	int cont = 0;
	tm diadedonacion;
	cFluidos* fluido;
	cFechas fechahoy;

	fluido = donantee->GetFluido();

	do {
		for (int i = 0; i < ListReceptores.size(); i++) {
			if (coincidirFluido(donantee, ListReceptores[i]) == true)
			{
				cont = contadorBSA(prioridad, donantee, ListReceptores[i]);
				if (cont == 1)
					ElijoUno = ListReceptores[i];
				else if (cont > 1)
					ElijoUno = compararReceptores(ElijoUno, ListReceptores[i]);
			}
		}
		if (cont == 0)
			prioridad++;
	} while (cont == 0 && prioridad < 6);
	for (int i = 0; i < ListReceptores.size(); i++) {
		if (cont == 0) {
			ListDonantes.push_back(donantee);
			return NULL; //recorrio 5 veces el for cambiando la prioridad y aun asi no hizo match. retorno null y agrego el donante a la lista
		}
		else if ((fluido->verificarFechaMaxima(donantee->getFechaExtraccionP()) == true)) {
			ListReceptores[i] - ElijoUno;
			diadedonacion = fechahoy.getFechaHoy();
			return ElijoUno;
		}
		else
			return NULL; //hubo match pero el fluido estaba vencido, no se puede efectuar la donacion
	}
}

/*en esta funcion ya hubo match asi que yo llamo para que me pase el receptor.
	Me fijo que tipo de fluido es el donante y llamo a verificarfechamaxima para verificar que el fluido no este vencido.
	Si no esta vencido, entonces se efectua la donacion.
	*/

//ingresa un receptor, recorre la lista y busca un donante. No debe compararse con los demas receptores porque sino ya habrian hecho match

cDonante* cBSA::matchReceptor(cReceptor * receptorr, vector <cDonante*> ListDonantes, vector <cReceptor*> ListReceptor) {
	int cont = 0;
	tm diadedonacion;
	cFluidos* fluido;
	cFechas fechahoy;

	for (int i = 0; i < ListDonantes.size(); i++) {
		fluido = ListDonantes[i]->GetFluido();
		if (coincidirFluido(ListDonantes[i], receptorr) == true && fluido->verificarFechaMaxima(ListDonantes[i]->getFechaExtraccionP()) == true) {
			ListDonantes[i]-ListDonantes[i];
			 diadedonacion = fechahoy.getFechaHoy();
			return ListDonantes[i];
		}
		else
			ListReceptor.push_back(receptorr);
		return NULL;
	}
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

int cBSA::contadorBSA(int priority, cDonante* don, cReceptor* rec) {
	int contador = 0;
	if (rec->GetPrioridadReceptor() == priority && rec->getProvinciaReceptor() == don->GetCentroDeSalud()->getProvinciaCS() ){
		contador++;
	}   
	return contador; 
}

cReceptor* cBSA::compararReceptores(cReceptor* uno, cReceptor* dos) {
	cReceptor* ganador;
	cFechas* fecha = nullptr;
	cBSA bsa;
	if (uno->getEstado() > dos->getEstado()) {
		ganador = dos;
	}
	else if (uno->getEstado() < dos->getEstado()) {
		ganador = uno;
	}
	else {
		fecha = bsa.CompararFechas(uno, dos);
	}
	if (fecha == uno->GetFechaListaEspera()) {
		ganador = uno;
	}
	else {
		ganador = dos;
	}
	return ganador;
}
cFechas* cBSA::CompararFechas(cReceptor* fecha1, cReceptor* fecha2) {
	int fechaUno, fechaDos;
	cFechas diferencia1, diferencia2, fechaHoy;
	fechaHoy.setHoy();
	fechaUno = diferencia1.HorasEntreFechas(fecha1->GetFechaListaEspera(), fechaHoy);
	fechaDos = diferencia2.HorasEntreFechas(fecha2->GetFechaListaEspera(), fechaHoy);
	if ((fechaUno - fechaDos) > 0)
		return fecha1->GetFechaListaEspera();
	else
		return fecha2->GetFechaListaEspera();
}
