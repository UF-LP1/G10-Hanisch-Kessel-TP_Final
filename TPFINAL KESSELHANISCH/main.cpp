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
#include"Enums.h"
using namespace std;
int main() {
	cBSA* BSA = new cBSA();
	cCentroSalud* centro1 = new cCentroSalud("Hospital Favaloro", "Av Belgrano 960", "Monserrat", "CABA", "111111");
	cCentroSalud* centro2 = new cCentroSalud("Hospital Gallardo", "Av Libertadores 912", "Nuñez", "CABA", "091218");
	cCentroSalud* centro3 = new cCentroSalud("Hospital EnzoPerez", "Av MiCapitan 24  ", "Maipu", "Mendoza", "002400");
	cCentroSalud* centro4 = new cCentroSalud("Hospital Demichelis", "Av Fuhrer 2023", "Belgrano", "CABA", "112023");
	cDonante* donante1 = new cDonante("Juan Fernando Quintero", "112912", eTipoDeSangre::O_Negativo, 14, 1, 1993, 9, 12, centro2, 9, 12, 2018, 18, 50, 500, true, true, 70);
	cDonante* donante2 = new cDonante("Gonzalo Martinez", "113912", eTipoDeSangre::AB_Negativo, 25, 5, 1992, 9, 12, centro3, 9, 12, 2019, 18, 50, 500, true, true, 72);
	cDonante* donante3 = new cDonante("Lucas Pratto", "111912", eTipoDeSangre::O_Positivo, 9, 12, 1985, 9, 12, centro1, 17, 11, 2018, 18, 50, 500, true, true, 85);
	cReceptor* receptor1 = new cReceptor("Carlos Tevez", "110912", eTipoDeSangre::A_Positivo, 10, 2, 1974, 9, 12,eFluido::Plasma, centro1, 4, 6, 2017, 3,5,4, eEstadoReceptor::Estable);
	cReceptor* receptor2 = new cReceptor("Juan Roman Riquelme", "119120", eTipoDeSangre::A_Negativo, 24, 6, 1974, 9, 12, eFluido::Plasma, centro2, 4, 6, 2015, 1,5,1, eEstadoReceptor::Inestable);
	cReceptor* receptor3 = new cReceptor("Guillermo Barros Schelloto", "110912", eTipoDeSangre::A_Positivo, 15, 12, 1984, 9, 12, eFluido::Sangre, centro3, 4, 6, 2007,4, 5,2, eEstadoReceptor::Estable);
	vector<cCentroSalud*> ListCentros;
	vector<cDonante*> ListDonantes;
	vector<cReceptor*> ListReceptores;
	cout << "Bienvenidos al banco de Sangre Argentino" << endl;
	try {
		
		if (donante3->puedeDonar(donante3->getSinTatuajes(), donante3->getSinEnfermedadSagre(), donante3->getPesoPacienteAct(), donante3->getFechaNacimiento()) == true) {
				centro1->IngresarPaciente(donante3);
		}
		else if (donante1->puedeDonar(donante1->getSinTatuajes(), donante1->getSinEnfermedadSagre(), donante1->getPesoPacienteAct(), donante1->getFechaNacimiento()) == true) {
			centro2->IngresarPaciente(donante1);
		}
		else if (donante2->puedeDonar(donante2->getSinTatuajes(), donante2->getSinEnfermedadSagre(), donante2->getPesoPacienteAct(), donante2->getFechaNacimiento()) == true) {
			centro3->IngresarPaciente(donante2);
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
	try {

		ListCentros.push_back(centro1);
		ListCentros.push_back(centro2);
		ListCentros.push_back(centro3);
		ListCentros.push_back(centro4);
 }
	catch (exception& e) {
		std::cout << e.what() << endl;
	}
	std::cout << "Lista de Donantes:\n";
	for (int i = 0; i < ListDonantes.size(); i++) {
		std::cout << ListDonantes[i]->GetNombre() << " || " << "Fecha Extraccion: " << ListDonantes[i]->getFechaExtraccionP()<< "|| " << ListDonantes[i]->GetFluido()<<"||"<< ListDonantes[i]->GetCentroDeSalud()<<"||"<<  endl;
	}
	std::cout << std::endl;
	std::cout << "\n";
	std::cout << "Lista de Receptores:\n";
	for (int i = 0; i < ListReceptores.size(); i++) {
		std::cout << ListReceptores[i]->GetNombre() << " || " << "Fecha Lista ESpera: " << ListReceptores[i]->GetFechaListaEspera() << "|| " << ListReceptores[i]->GetFluidoReceptor() << "||" << ListReceptores[i]->GetCentroDeSalud() << "||" << endl;
	}
	std::cout << std::endl;
	std::cout << "\n";
	std::cout << "Lista de Centros de salud:\n";
	for (int i = 0; i < ListCentros.size(); i++) {
		std::cout << ListCentros[i]->getNombreCS() << " || " << "Telefono: " << ListCentros[i]->getTelefonoCS() << "|| " << ListCentros[i]->getPartidoCS() << "||" << ListCentros[i]->getProvinciaCS() << "||" << endl;
	}
	std::cout << std::endl;
	std::cout << "\n";


/*ver los cpp de:
cBSA
cRegistro
cReceptor
*/
	return 0; 
}


