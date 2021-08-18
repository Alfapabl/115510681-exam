/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Avion.cpp
 * Author: Estudiante
 * 
 * Created on 15 de noviembre de 2020, 09:18 AM
 */

#include "Avion.h"

Avion::Avion() {
    codigoAvion= " ";
    cantidadMaxPasajeros=0;
    
}

Avion::Avion(string codigoAvion, int cantidadMaxPasajeros) {
    
    this->cantidadMaxPasajeros=cantidadMaxPasajeros;
    this->codigoAvion=codigoAvion;
}

Avion::Avion(const Avion& orig) {
}

Avion::~Avion() {
    cout << "Se ha destruido un Avion" << endl;
}

void Avion::SetCantidadMaxPasajeros(int cantidadMaxPasajeros) {
    this->cantidadMaxPasajeros = cantidadMaxPasajeros;
}

int Avion::GetCantidadMaxPasajeros() const {
    return cantidadMaxPasajeros;
}

void Avion::SetCodigoAvion(string codigoAvion) {
    this->codigoAvion = codigoAvion;
}

string Avion::GetCodigoAvion() const {
    return codigoAvion;
}

string Avion::toStringAvion(){
stringstream s;
    s << "**************" << endl;
    s << "* AVION *" << endl;
    s << "**************" << endl;
    s << "CODIGO DEL AVION:  " << this->codigoAvion << endl;
    s << "CANTIDAD MAXIMA DE PASAJEROS:  " << this->cantidadMaxPasajeros << endl;
    s << " -------------" << endl << endl;
    
    return s.str();
}

