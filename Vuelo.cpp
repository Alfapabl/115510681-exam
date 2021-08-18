/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Vuelo.cpp
 * Author: Estudiante
 * 
 * Created on 15 de noviembre de 2020, 09:00 AM
 */

#include "Vuelo.h"

Vuelo::Vuelo() {
    codigoVuelo= " ";
    this->hora=NULL;
    this->fecha=NULL;
    this->ruta=NULL;
    this->avion=NULL;
    this->tripulante=NULL;
}

Vuelo::Vuelo(string codigoVuelo, Hora* hora, Fecha* fecha, Ruta* ruta, Avion* avion,ListaTripulante* tripulante) {
    this->codigoVuelo=codigoVuelo;
    this->hora=hora;
    this->fecha=fecha;
    this->ruta=ruta;
    this->avion=avion;
    this->tripulante=tripulante;
}


Vuelo::Vuelo(const Vuelo& orig) {
}

Vuelo::~Vuelo() {
}
void Vuelo::setTripulante(ListaTripulante* tripulante) {
    this->tripulante = tripulante;
}

ListaTripulante* Vuelo::getTripulante() const {
    return tripulante;
}

void Vuelo::SetCodigoVuelo(string codigoVuelo) {
    this->codigoVuelo = codigoVuelo;
}

string Vuelo::GetCodigoVuelo() const {
    return codigoVuelo;
}

string Vuelo::toSting(){
stringstream s;
    s << "**************" << endl;
    s << "* VUELO *" << endl;
    s << "**************" << endl;
    s << "Codigo del vuelo:  " << this->codigoVuelo << endl;
    s<<"Hora: "<<hora->toStringHora()<<endl;
    s<<"Fecha: "<<fecha->toStringFe()<<endl;
    s<<"Ruta: "<<ruta->toStringRuta()<<endl;
    s<<"Avion: "<<avion->toStringAvion()<<endl;
    s<<"Tripulante: "<<tripulante->toString()<<endl;
    
    return s.str();

}

void Vuelo::SetHora(Hora* hora) {
    this->hora = hora;
}

Hora* Vuelo::GetHora() const {
    return hora;
}

void Vuelo::SetFecha(Fecha* fecha) {
    this->fecha = fecha;
}

Fecha* Vuelo::GetFecha() const {
    return fecha;
}

void Vuelo::SetAvion(Avion* avion) {
    this->avion = avion;
}

Avion* Vuelo::GetAvion() const {
    return avion;
}

void Vuelo::SetRuta(Ruta* ruta) {
    this->ruta = ruta;
}

Ruta* Vuelo::GetRuta() const {
    return ruta;
}