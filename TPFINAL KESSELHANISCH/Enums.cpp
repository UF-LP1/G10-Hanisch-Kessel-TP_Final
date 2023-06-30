
#include"Enums.h"



string SexoToString(eSexo sexo) {
	switch (sexo)
	{
	case eSexo::Masculino:
		return"Masculino";
		break;
	case eSexo::Femenino:
		return"Femenino";
		break;
	default:
		return "";
		break;
	}
}



string TipoDeSangreToString(eTipoDeSangre sangre) {
	switch (sangre)
	{
	case eTipoDeSangre::AB_Positivo:
		return"Tipo de sangre: AB + ";
		break;
	case eTipoDeSangre::AB_Negativo:
		return"Tipo de sangre: AB - ";
		break;
	case eTipoDeSangre::A_Positivo:
		return"Tipo de sangre: A + ";
		break;
	case eTipoDeSangre::A_Negativo:
		return"Tipo de sangre: A- ";
		break;
	case eTipoDeSangre::B_Positivo:
		return"Tipo de sangre: B + ";
		break;
	case eTipoDeSangre::B_Negativo:
		return"Tipo de sangre: B - ";
		break;
	case eTipoDeSangre::O_Positivo:
		return"Tipo de sangre: O + ";
		break;
	case eTipoDeSangre::O_Negativo:
		return"Tipo de sangre: O - ";
		break;
	default:
		return "";
		break;
	}
}

string EstadoReceptorToString(eEstadoReceptor estadoreceptor) {
	switch (estadoreceptor)
	{
	case eEstadoReceptor::Estable:
		return"Estable";
		break;
	case eEstadoReceptor::Inestable:
		return"Inestable";
		break;
	case eEstadoReceptor::Recibio:
		return"Recibio";
		break;
	default:
		return "";
		break;
	}
}
string FluidoToString(eFluido fluido) {
	switch (fluido)
	{
	case eFluido::Sangre:
		return"Sangre";
		break;
	case eFluido::Plasma:
		return"Plasma";
		break;
	case eFluido::Medula:
		return"Medula";
		break;
	default:
		return "";
		break;
	}
}
