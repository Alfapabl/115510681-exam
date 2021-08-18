/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Fecha.cpp
 * Author: Estudiante
 * 
 * Created on 15 de noviembre de 2020, 09:18 AM
 */

#include "Fecha.h"

Fecha::Fecha() {
    dia=0;
    mes=0;
    anio=0;
}

Fecha::Fecha(int dia, int mes, int anio){
    this->dia=dia;
    this->mes=mes;
    this->anio=anio;
}

Fecha::Fecha(const Fecha& orig) {
}

Fecha::~Fecha() {
}

void Fecha::SetAnio(int anio) {
    this->anio = anio;
}

int Fecha::GetAnio() const {
    return anio;
}

void Fecha::SetMes(int mes) {
    this->mes = mes;
}

int Fecha::GetMes() const {
    return mes;
}

void Fecha::SetDia(int dia) {
    this->dia = dia;
}

int Fecha::GetDia() const {
    return dia;
}

string Fecha::toStringFe(){
stringstream s;
    s << "**************" << endl;
    s << "* FECHA *" << endl;
    s << "**************" << endl;
    s << "DIA:  " << this->dia << endl;
    s << "MES:  " << this->mes << endl;
    s << "ANIO:" << this->anio << endl;
    s << " -------------" << endl << endl;
    return s.str();

}