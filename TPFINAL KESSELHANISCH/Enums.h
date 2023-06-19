#pragma once
#include <string>
#include <iostream>
using namespace std;

enum class ePrioridad { Urgente = 0, Alta, Media, Baja, Muy_baja };
enum class eSexo { Masculino = 0, Femenino };
enum class eTipoDeSangre { AB_Positivo = 0, AB_Negativo, A_Positivo, A_Negativo, B_Positivo, B_Negativo, O_Positivo, O_Negativo };
enum class eEstadoReceptor { Estable = 0, Inestable, Recibio };
enum class eFluido {Sangre, Plasma, Medula};


string PrioridadToString(ePrioridad prioridad);
string SexoToString(eSexo sexo);
string TipoDeSangreToString(eTipoDeSangre sangre);
string EstadoReceptorToString(eEstadoReceptor estadoreceptor);
string FluidoToString(eFluido fluido);
