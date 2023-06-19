#pragma once
#include <string>
#include <iostream>
using namespace std;

enum class ePrioridad { Urgente = 0, Alta, Media, Baja, Muy_baja };
enum class eSexo { Masculino = 0, Femenino };
enum class eTipoDeSangre { AB+ = 0, AB-, A+, A-, B+, B-, O+, O- };
enum class eEstadoReceptor { Estable = 0, Inestable, Recibio };
enum class eFluido {Sangre, Plasma, Medula};


string PrioridadToString(ePrioridad prioridad);
string SexoToString(eSexo sexo);
string TipoDeSangreToString(eTipoDeSangre sangre);
string EstadoReceptorToString(eEstadoReceptor estadoreceptor);
string FluidoToString(eFluido fluido);
