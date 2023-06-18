#pragma once
#include "cPaciente.h"
#include "cFechas.h"
using namespace std;

class cDonante : public cPaciente {
private:
    bool cumpleRequisitos;
    cFechas fechaExtraccion;
    float volumenD;
    string FDonante;
    float cantF;
    bool sinTattos2a; //si se hizo tattos en los ultimos dos años
    bool sinEnfermedadesSangre;
    float pesoP;

public:
    cDonante(bool cumpleRequisitos_, string fechaExtraccion_, float volumenD_, string FDonante_, float cantF_, bool sinTattos_, bool sinEnfermedades_, float pesoP_);
    ~cDonante();

    bool getCumpleRequisitosP();
    cFechas getFechaExtraccionP();
    float getVolumenDP();
    string getFDonanteP();
    float getCantF();
    void setSinTatuajes(bool sinTattos_);
    void setSinEnfermedadSangre(bool sinEnfermedades_);
    void setPesoPacienteAct(float pesoP_);
    //creo que aca no es necesario algun setter porque no deberia cambiar ningun dato

    bool puedeDonar();
    void imprimir();
};