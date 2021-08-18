/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tripulante.cpp
 * Author: Estudiante
 * 
 * Created on 15 de noviembre de 2020, 12:11 PM
 */

#include "Tripulante.h"

Tripulante::Tripulante(){
    numCarnet=" ";
    rol=" ";
}
Tripulante::Tripulante(string cedula, string nombre, string apellido, string numCarnet, string rol): Persona(cedula, nombre, apellido){
    this->numCarnet=numCarnet; 
    this->rol=rol;
}

Tripulante::Tripulante(const Tripulante& orig) {
}

Tripulante::~Tripulante() {
}

void Tripulante::SetRol(string rol) {
    this->rol = rol;
}

string Tripulante::GetRol() const {
    return rol;
}

void Tripulante::SetNumCarnet(string numCarnet) {
    this->numCarnet = numCarnet;
}

string Tripulante::GetNumCarnet() const {
    return numCarnet;
}

string Tripulante::toString(){
stringstream s;
    s << "**************" << endl;
    s << "* Tripulante *" << endl;
    s << "**************" << endl;
    s << "CEDULA:  " << this->cedula << endl;
    s << "NOMBRE:  " << this->nombre << endl;
    s << "APELLIDO:" << this->apellido << endl;
    s << "NUMERO DE CARNET:" << this->numCarnet << endl;
    s << "ROL:" << this->rol << endl;
    s << " -------------" << endl << endl;
    return s.str();
}
