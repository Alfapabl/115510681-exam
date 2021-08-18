/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ruta.cpp
 * Author: Estudiante
 * 
 * Created on 15 de noviembre de 2020, 09:17 AM
 */

#include "Ruta.h"

Ruta::Ruta() {
    ciudadOrigen=" ";
    paisOrigen=" ";
    ciudadDestino= " ";
    paisDestino= " ";
    precio=0;
    duracionDelViaje=0;
}

Ruta::Ruta(string ciudadOrigen,string paisOrigen, string ciudadDestino, string paisDestino,float precio,float duracionDelViaje){
    this->ciudadOrigen=ciudadOrigen;
    this->paisOrigen=paisOrigen;
    this->ciudadDestino=ciudadDestino;
    this->paisDestino=paisDestino;
    this->precio=precio;
    this->duracionDelViaje=duracionDelViaje;
}
Ruta::Ruta(const Ruta& orig) {
}

Ruta::~Ruta() {
}

void Ruta::SetDuracionDelViaje(float duracionDelViaje) {
    this->duracionDelViaje = duracionDelViaje;
}

float Ruta::GetDuracionDelViaje() const {
    return duracionDelViaje;
}

void Ruta::SetPrecio(float precio) {
    this->precio = precio;
}

float Ruta::GetPrecio() const {
    return precio;
}

void Ruta::SetPaisDestino(string paisDestino) {
    this->paisDestino = paisDestino;
}

string Ruta::GetPaisDestino() const {
    return paisDestino;
}

void Ruta::SetCiudadDestino(string ciudadDestino) {
    this->ciudadDestino = ciudadDestino;
}

string Ruta::GetCiudadDestino() const {
    return ciudadDestino;
}

void Ruta::SetPaisOrigen(string paisOrigen) {
    this->paisOrigen = paisOrigen;
}

string Ruta::GetPaisOrigen() const {
    return paisOrigen;
}

void Ruta::SetCiudadOrigen(string ciudadOrigen) {
    this->ciudadOrigen = ciudadOrigen;
}

string Ruta::GetCiudadOrigen() const {
    return ciudadOrigen;
}

string Ruta::toStringRuta(){
stringstream s;
    s << "**************" << endl;
    s << "* RUTA *" << endl;
    s << "**************" << endl;
    s << "CIUDAD DE ORIGEN:  " << this->ciudadOrigen << endl;
    s << "PAIS DE ORIGEN:  " << this->paisOrigen << endl;
    s << "CIUDAD DE DESTINO:" << this->ciudadDestino << endl;
    s << "PAIS DE DESTINO" << this->paisDestino << endl;
    s << "PRECIO DEL VUELO" << this->precio << endl;
    s << "DURACION DEL VIAJE" << this->duracionDelViaje << endl;
    s << " -------------" << endl << endl;
    return s.str();

}