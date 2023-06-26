#pragma once
#ifndef _ENUMS_H
#define _ENUMS_H


#include <string>
#include <iostream>
using namespace std;

//enum class ePrioridad { Urgente = 0, Alta, Media, Baja, Muy_baja };
typedef enum  eSexo { Masculino = 0, Femenino }eSexo;
typedef enum  eTipoDeSangre { AB_Positivo = 0, AB_Negativo, A_Positivo, A_Negativo, B_Positivo, B_Negativo, O_Positivo, O_Negativo }eTipoDeSangre;
typedef enum  eEstadoReceptor { Estable = 0, Inestable, Recibio }eEstadoReceptor;
typedef enum  eFluido {Sangre, Plasma, Medula}eFluido;


//string PrioridadToString(ePrioridad prioridad);
string SexoToString(eSexo sexo);
string TipoDeSangreToString(eTipoDeSangre sangre);
string EstadoReceptorToString(eEstadoReceptor estadoreceptor);
string FluidoToString(eFluido fluido);

#endif // !_ENUMS_H