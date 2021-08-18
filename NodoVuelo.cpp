/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodoVuelo.cpp
 * Author: Estudiante
 * 
 * Created on 15 de noviembre de 2020, 01:16 PM
 */

#include "NodoVuelo.h"

NodoVuelo::NodoVuelo() {
    this->vuelo=NULL;
    this->siguiente=NULL;
}

NodoVuelo::NodoVuelo(Vuelo* vue, NodoVuelo* nv){
    this->vuelo=vue;
    this->siguiente=nv;
}

void NodoVuelo::setVuelo(Vuelo* vuelo) {
    this->vuelo = vuelo;
}

Vuelo* NodoVuelo::getVuelo() const {
    return vuelo;
}

void NodoVuelo::setSiguiente(NodoVuelo* siguiente) {
    this->siguiente = siguiente;
}

NodoVuelo* NodoVuelo::getSiguiente() const {
    return siguiente;
}

NodoVuelo::NodoVuelo(const NodoVuelo& orig) {
}

NodoVuelo::~NodoVuelo() {
 delete this->vuelo;
}

string NodoVuelo::toString(){
    return this->vuelo->toSting();
}