/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AgenciaDeViajes.cpp
 * Author: Estudiante
 * 
 * Created on 15 de noviembre de 2020, 10:23 AM
 */

#include "AgenciaDeViajes.h"

AgenciaDeViajes::AgenciaDeViajes() {
    telefono=0;
    cedulaJuridica=" ";
    nombreAgen= " ";
    reserva=NULL;
    avion=NULL;    
}

AgenciaDeViajes::AgenciaDeViajes(int telefono, string cedulaJuridica, string nombreAgen, ListaReser* reserva, ContenedoraAvion* avion){
    this->telefono=telefono;
    this->cedulaJuridica=cedulaJuridica;
    this->nombreAgen= nombreAgen;
    this->reserva=reserva;
    this->avion=avion;
}
AgenciaDeViajes::AgenciaDeViajes(const AgenciaDeViajes& orig) {
}

AgenciaDeViajes::~AgenciaDeViajes() {
    
}

void AgenciaDeViajes::SetNombreAgen(string nombreAgen) {
    this->nombreAgen = nombreAgen;
}

string AgenciaDeViajes::GetNombreAgen() const {
    return nombreAgen;
}

void AgenciaDeViajes::SetCedulaJuridica(string cedulaJuridica) {
    this->cedulaJuridica = cedulaJuridica;
}

string AgenciaDeViajes::GetCedulaJuridica() const {
    return cedulaJuridica;
}

void AgenciaDeViajes::SetTelefono(int telefono) {
    this->telefono = telefono;
}

int AgenciaDeViajes::GetTelefono() const {
    return telefono;
}

string AgenciaDeViajes::toStringAgencia(){
stringstream s;
    s << "**************" << endl;
    s << "* AGENCIA DE VIAJES *" << endl;
    s << "**************" << endl;
    s << "NOMBRE DE AGENCIA:  " << this->nombreAgen << endl;
    s << "CEDULA JURIDICA:  " << this->cedulaJuridica << endl;
    s << "TELEFONO:" << this->telefono << endl;
    s << " -------------" << endl << endl;
    return s.str();

}