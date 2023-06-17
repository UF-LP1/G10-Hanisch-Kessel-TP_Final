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

public:
    cDonante(bool cumpleRequisitos_, string fechaExtraccion_, float volumenD_, string FDonante_, float cantF_);
    ~cDonante();

    bool getCumpleRequisitosP();
    cFechas getFechaExtraccionP();
    float getVolumenDP();
    string getFDonanteP();
    float getCantF();
    //creo que aca no es necesario algun setter porque no deberia cambiar ningun dato

    bool puedeDonar();
    void imprimir();
};