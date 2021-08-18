/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Hora.cpp
 * Author: Estudiante
 * 
 * Created on 15 de noviembre de 2020, 09:18 AM
 */

#include "Hora.h"

Hora::Hora() {
    hora=0;
    minutos=0;
    segundos=0;
}

Hora::Hora(int hora, int minutos, int segundos){
    this->hora=hora;
    this->minutos=minutos;
    this->segundos=segundos;
}
Hora::Hora(const Hora& orig) {
}

Hora::~Hora() {
}

void Hora::SetSegundos(int segundos) {
    this->segundos = segundos;
}

int Hora::GetSegundos() const {
    return segundos;
}

void Hora::SetMinutos(int minutos) {
    this->minutos = minutos;
}

int Hora::GetMinutos() const {
    return minutos;
}

void Hora::SetHora(int hora) {
    this->hora = hora;
}

int Hora::GetHora() const {
    return hora;
}

string Hora::toStringHora(){
stringstream s;
    s << "**************" << endl;
    s << "* HORA *" << endl;
    s << "**************" << endl;
    s << "HORA:  " << this->hora << endl;
    s << "MINUTOS:  " << this->minutos << endl;
    s << "SEGUNDOS:" << this->segundos << endl;
    s << " -------------" << endl << endl;
    return s.str();

}
