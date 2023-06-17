#pragma once
#include <string>
using namespace std;
class cCentroSalud
{
private:
	string nombreC;
	string direccion;
	string partido;
	string provincia;
	string telefono;

public:
	cCentroSalud(string nombreC_, string direccion_, string partido_, string provincia_, string telefono);
	~cCentroSalud();

	string getNombreCS();
	string getDireccionCS();
	string getPartidoCS();
	string getTelefonoCS();
	void setTelefonoCS(string NuevoTelefono); //solo declaro un setter porque el telefono podria llegar a cambiar

	void ingresarPaciente(); //estos deberian retornar un paciente pero no lo toco mucho hasta hacer las listas
	int buscarPaciente(); //idem al anterior comentario
	void imprimir();
};

