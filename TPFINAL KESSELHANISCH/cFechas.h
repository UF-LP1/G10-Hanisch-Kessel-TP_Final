#pragma once
#ifndef _CFECHAS_H
#define _CFECHAS_H


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <string>
#include "cPaciente.h"
using namespace std;

class cFechas
{
private:
	tm fecha;
public:
	cFechas();
	cFechas(int dia, int mes, int anio, int hora, int minutos);
	~cFechas();

	tm getFecha1();
	cFechas* CompararFechas(cReceptor* fecha1, cReceptor* fecha2);
	static int HorasEntreFechas(cFechas* inicio, cFechas aux_fin);
	void setHoy();
	bool FechaCompleta();
	tm getFechaHoy();
	int getDia() const { return fecha.tm_mday; }
	int getMes() const { return fecha.tm_mon; }
	int getAnio() const { return fecha.tm_year; }
	int getHora() const { return fecha.tm_hour; }
	int getMinutos() const { return fecha.tm_min; }
	string to_stringFecha() const;
	void imprimir() const;
};

#endif // !_CFECHAS_H