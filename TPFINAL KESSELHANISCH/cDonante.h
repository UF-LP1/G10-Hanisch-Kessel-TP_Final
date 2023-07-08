#pragma once
#ifndef _CDONANTE_H
#define _CDONANTE_H



#include "cPaciente.h"
#include "cFechas.h"
using namespace std;
class cFluidos;
class cDonante : public cPaciente {
  //Creo que habia muchos atributos que estaban bien pensados pero que iban a complicar mucho el tp
private:
    
    cFechas* fechaExtraccion=nullptr;
    float volumenD;
    bool sinTattos; //si se hizo tattos en los ultimos dos meses
    bool sinEnfermedadesSangre;
    float pesoP;
    

public:
    cDonante(string Nombre, string NumeroTelefono, eTipoDeSangre Sangre, int DiaNacimiento, int MesNacimiento, int AnioNacimiento, int HoraNacimiento, int MinutosNacimiento, cFluidos* fluido, cCentroSalud* CentroDeSalud, int DiaExtraccion, int MesExtraccion, int AnioExtraccion, int HoraExtraccion, int MinutosExtraccion, float volumenD_, bool sinTattos_, bool sinEnfermedades_, float pesoP_);
    ~cDonante();

    
    cFechas* getFechaExtraccionP();
    cFechas* getFechaNacimiento();
    string getProvinciaDonante();
    float getVolumenDP();
    bool getSinTatuajes();
    bool getSinEnfermedadSagre();
    bool getPesoPacienteAct();
    void setSinTatuajes(bool sinTattos_);
    void setSinEnfermedadSangre(bool sinEnfermedades_);
    void setPesoPacienteAct(float pesoP_);
    void setFluidoDona(cFluidos* fluido);

    bool puedeDonar(bool sinTattos_, bool sinEnfermedades_, float pesoP_, cFechas* fNac);
    void imprimir();
};

#endif // !_CDONANTE_H