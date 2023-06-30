#include"cReceptor.h"
#include "cRegistro.h"

//aca quiero que haga un registro que muestre el donante, receptor, hospital, fecha de donacion
//tambien quiero mostrar los donantes y receptores que estan en lista de espera

/*en match ya tengo el dia que dono, el donante y el receptor. Podrua sacar el hospital tmb*/
cRegistro::cRegistro()
{
}

cRegistro::~cRegistro()
{
}

void cRegistro::imprimirDonantes(vector<cDonante*> ListDonantes)
{
	cout << "Lista de Donantes:\n";
	cout << "   Nombre  " << " || " << "   Fecha Donacion  " << " || " << "   Fluido a donar " << " || " << "  Centro de Salud  " << " || " << endl;
	for (int i = 0; i < ListDonantes.size(); i++) {
		cout << ListDonantes[i]->GetNombre() << " || " << "Fecha Extraccion: " << ListDonantes[i]->getFechaExtraccionP() << "|| " << ListDonantes[i]->GetFluido() << "||" << ListDonantes[i]->GetCentroDeSalud() << "||" << endl;
	}
	cout << std::endl;
	cout << "\n";
}

void cRegistro::imprimirReceptores(vector<cReceptor*> ListReceptores)
{
	cout << "Lista de Receptores:\n";
	cout << "   Nombre  " << " || " << "   Fecha Ingreso  " << " || " << "   Fluido a recibir  " << " || " << "  Centro de Salud  " << " || " << endl;
	for (int i = 0; i < ListReceptores.size(); i++) {
		cout << ListReceptores[i]->GetNombre() << ListReceptores[i]->GetFechaListaEspera() << "|| " << ListReceptores[i]->GetFluidoReceptor() << "||" << ListReceptores[i]->GetCentroDeSalud() << "||" << endl;
	}
	cout << std::endl;
	cout << "\n";
}

void cRegistro::imprimirCS(vector<cCentroSalud*> ListCentros)
{
	cout << "Lista de Centros de salud:\n";
	cout << "   Centro de salud   " << " || " << "   Telefono   " << " || " << "   Partido  " << " || " << "  Provincia   " << " || " << endl;
	for (int i = 0; i < ListCentros.size(); i++) {
		
		cout << ListCentros[i]->getNombreCS() << ListCentros[i]->getTelefonoCS() << "|| " << ListCentros[i]->getPartidoCS() << "||" << ListCentros[i]->getProvinciaCS() << "||" << endl;
	}
	cout << std::endl;
	cout << "\n";

}

void cRegistro::imprimirMatch(vector<cDonante*> ListDonantes, vector<cReceptor*> ListReceptores)
{
	cout << "Lista Donaciones realizadas:\n";
	cout << "   Receptor   " << " || " << "   Donante   " << " || " << "   Centro de Salud  " << " || " << "   Provinvia  " << " || " << "   Fecha de donacion   " << " || " << endl;
	for (int i = 0; i < ListDonantes.size(); i++){
		
		cout  << ListDonantes[i]->GetNombre() << " || "  << ListReceptores[i]->GetNombre() << "|| " << ListDonantes[i]->GetCentroDeSalud() << "||" << ListDonantes[i]->getProvinciaDonante() << "||" <<  ListDonantes[i]->getFechaExtraccionP() << endl;
	}
	cout << std::endl;
	cout << "\n";

}








