/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cliente.cpp
 * Author: Estudiante
 * 
 * Created on 15 de noviembre de 2020, 12:11 PM
 */

#include "Cliente.h"

Cliente::Cliente() {
    numTarjeta=" ";
}

Cliente::Cliente(string cedula, string nombre, string apellido, string numTarjeta): Persona(cedula, nombre, apellido){
    this->numTarjeta=numTarjeta; 
}

Cliente::Cliente(const Cliente& orig) {
}

Cliente::~Cliente() {
}

void Cliente::SetNumTarjeta(string numTarjeta) {
    this->numTarjeta = numTarjeta;
}

string Cliente::GetNumTarjeta() const {
    return numTarjeta;
}

string Cliente::toString(){
stringstream s;
    s << "**************" << endl;
    s << "* PERSONA *" << endl;
    s << "**************" << endl;
    s << "CEDULA:  " << this->cedula << endl;
    s << "NOMBRE:  " << this->nombre << endl;
    s << "APELLIDO:" << this->apellido << endl;
    s << "NUMERO DE TARJETA:  " << this->numTarjeta << endl;
    s << " -------------" << endl << endl;
    return s.str();
}


