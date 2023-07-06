#include <iostream>
#include <list>
#include <vector>
#include <cctype>
#include <exception>
#include "cBSA.h"
#include "cCentroSalud.h"
#include "cPaciente.h"
#include "cFluidos.h"
#include "cFechas.h"
#include "cRegistro.h"
#include"Enums.h"
#include "cPlasma.h"
#include "cSangre.h"
#include "cMedula.h"
using namespace std;

int main() {
	cBSA* BSA = new cBSA();
	cSangre* sangre1 = new cSangre(42);
	cMedula* medula1 = new cMedula(1);
	cPlasma* plasma1 = new cPlasma(354);
	cCentroSalud* centro1 = new cCentroSalud("Hospital Favaloro", "Av Belgrano 960", "Monserrat", "CABA", "111111");
	cCentroSalud* centro2 = new cCentroSalud("Hospital Gallardo", "Av Libertadores 912", "Nuñez", "CABA", "091218");
	cCentroSalud* centro3 = new cCentroSalud("Hospital EnzoPerez", "Av MiCapitan 24  ", "Maipu", "Mendoza", "002400");
	cCentroSalud* centro4 = new cCentroSalud("Hospital Demichelis", "Av Fuhrer 2023", "Belgrano", "CABA", "112023");
	cDonante* donante2 = new cDonante("Gonzalo Martinez", "113912", eTipoDeSangre::AB_Negativo, 25, 5, 1992, 9, 12, medula1, centro3, 9, 12, 2019, 18, 50, 500, true, true, 72);
	cDonante* donante1 = new cDonante("Juan Fernando Quintero", "112912", eTipoDeSangre::O_Negativo, 14, 1, 1993, 9, 12, sangre1, centro2, 9, 12, 2018, 18, 50, 500, true, true, 70);
	cDonante* donante3 = new cDonante("Lucas Pratto", "111912", eTipoDeSangre::O_Positivo, 9, 12, 1985, 9, 12, plasma1, centro1, 17, 11, 2018, 18, 50, 500, true, true, 85);
	cReceptor* receptor1 = new cReceptor("Carlos Tevez", "110912", eTipoDeSangre::A_Positivo, 10, 2, 1974, 9, 12, plasma1, centro1, 4, 6, 2017, 3,5,4, eEstadoReceptor::Estable, 500);
	cReceptor* receptor2 = new cReceptor("Juan Roman Riquelme", "1	19120", eTipoDeSangre::A_Negativo, 24, 6, 1974, 9, 12,  sangre1, centro2, 4, 6, 2015, 1,5,1, eEstadoReceptor::Inestable, 500);
	cReceptor* receptor3 = new cReceptor("Guillermo Barros Schelloto", "110912", eTipoDeSangre::A_Positivo, 15, 12, 1984, 9, 12, medula1, centro3, 4, 6, 2007,4, 5,2, eEstadoReceptor::Estable, 500);
	vector<cCentroSalud*> ListCentros;
	vector<cDonante*> ListDonantes;
	vector<cReceptor*> ListReceptores;

	string rta;
	cout << "Bienvenidos al banco de Sangre Argentino" << endl;
	cout << "desea donar sangre? SI/NO" << endl; //en caso de que no es porque quiere recibir sangre
	cin >> rta;

	if (rta == "SI" || rta == "si" || rta == "Si") {
		try {

			if (donante3->puedeDonar(donante3->getSinTatuajes(), donante3->getSinEnfermedadSagre(), donante3->getPesoPacienteAct(), donante3->getFechaNacimiento()) == true) {
				centro1->IngresarPaciente(donante3);
				if (BSA->matchDonante(donante3, ListReceptores, ListDonantes) == NULL) {

					cout << "no se encontro un receptor, la donacion sera guardada en el banco" << endl;
				}
				else	cout << "Realizando Donacion" << endl;
			}
			else if (donante1->puedeDonar(donante1->getSinTatuajes(), donante1->getSinEnfermedadSagre(), donante1->getPesoPacienteAct(), donante1->getFechaNacimiento()) == true) {
				centro2->IngresarPaciente(donante1);
				if (BSA->matchDonante(donante1, ListReceptores, ListDonantes) == NULL) {

					cout << "no se encontro un receptor, la donacion sera guardada en el banco" << endl;
				}
				else	cout << "Realizando Donacion" << endl;
			}
			else if (donante2->puedeDonar(donante2->getSinTatuajes(), donante2->getSinEnfermedadSagre(), donante2->getPesoPacienteAct(), donante2->getFechaNacimiento()) == true) {
				centro3->IngresarPaciente(donante2);
				if (BSA->matchDonante(donante2, ListReceptores, ListDonantes) == NULL) {

					cout << "no se encontro un receptor, la donacion sera guardada en el banco" << endl;
				}
				else	cout << "Realizando Donacion" << endl;
			}
			else {
				cout << "El Paciente no puede donar" << endl;
			}
			centro1->IngresarPaciente(receptor1);
			centro2->IngresarPaciente(receptor2);
			centro3->IngresarPaciente(receptor3);
		}
		catch (exception& e) {
			std::cout << e.what() << endl;
		}
	}
	try {

		ListCentros.push_back(centro1);
		ListCentros.push_back(centro2);
		ListCentros.push_back(centro3);
		ListCentros.push_back(centro4);
 }
	catch (exception& e) {
		std::cout << e.what() << endl;
	}

	if (rta == "NO" || rta == "no" || rta == "No") {
		centro1->IngresarPaciente(receptor1);
		centro2->IngresarPaciente(receptor2);
		centro3->IngresarPaciente(receptor3);
		
		if (BSA->matchReceptor(receptor1, ListDonantes, ListReceptores) == NULL) {
			cout << "no se encontro un donante, ingresa a la lista de espera" << endl;
		}
		else if (BSA->matchReceptor(receptor2, ListDonantes, ListReceptores) == NULL) {
			cout << "no se encontro un donante, ingresa a la lista de espera" << endl;
		}
		else if (BSA->matchReceptor(receptor3, ListDonantes, ListReceptores) == NULL) {
			cout << "no se encontro un donante, ingresa a la lista de espera" << endl;
		}
		else	cout << "Realizando Donacion" << endl;
	}

	// imprimimos los registros
	cRegistro* registro;
	registro->imprimirCS(ListCentros); //lista centros de salud
	registro->imprimirDonantes(ListDonantes);
	registro->imprimirReceptores(ListReceptores);
	registro->imprimirMatch(ListDonantes, ListReceptores);//lista donaciones 
	
	return 0; 
}


