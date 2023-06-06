#pragma once
#include "cPaciente.h"
using namespace std;

class cDonante : public cPaciente {
private:
    bool cumpleRequisitos;
    string fechaExtraccion;
    float volumenD;
    string FDonante;
    float cantF;

public:
    cDonante(string nombre_, string fechaNac_, string sexo_, const int dni_, bool cumpleRequisitos_, string fechaExtraccion_, float volumenD_, string FDonante_, float cantF_);
    ~cDonante();

    bool getCumpleRequisitosP();
    string getFechaExtraccionP();
    float getVolumenDP();
    string getFDonanteP();
    float getCantF();
    //creo que aca no es necesario algun setter porque no deberia cambiar ningun dato

    bool puedeDonar();
    void imprimir();
};