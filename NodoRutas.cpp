/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodoRutas.cpp
 * Author: Estudiante
 * 
 * Created on 15 de noviembre de 2020, 03:54 PM
 */

#include "NodoRutas.h"

NodoRutas::NodoRutas() {
    this->ruta=NULL;
    this->siguiente=NULL;
}
NodoRutas::NodoRutas(Ruta* ruta, NodoRutas* nr){
    this->ruta=ruta;
    this->siguiente=nr;
}

NodoRutas::NodoRutas(const NodoRutas& orig) {
}

NodoRutas::~NodoRutas() {
}

void NodoRutas::SetRuta(Ruta* ruta) {
    this->ruta = ruta;
}

Ruta* NodoRutas::GetRuta() const {
    return ruta;
}

void NodoRutas::SetSiguiente(NodoRutas* siguiente) {
    this->siguiente = siguiente;
}

NodoRutas* NodoRutas::GetSiguiente() const {
    return siguiente;
}

string NodoRutas::toString(){
    return this->ruta->toStringRuta();
}