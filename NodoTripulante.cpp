/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodoTripulante.cpp
 * Author: Estudiante
 * 
 * Created on 15 de noviembre de 2020, 03:19 PM
 */

#include "NodoTripulante.h"



NodoTripulante::NodoTripulante() {
    this->tripu=NULL;
    this->siguiente=NULL;
}

NodoTripulante::NodoTripulante(Tripulante* tripu, NodoTripulante* nt) {
    this->tripu=tripu;
    this->siguiente=nt;
}

NodoTripulante::NodoTripulante(const NodoTripulante& orig) {
}

NodoTripulante::~NodoTripulante() {
    delete this->tripu;
}

void NodoTripulante::SetTripulante(Tripulante* tripu) {
    this->tripu = tripu;
}

Tripulante* NodoTripulante::GetTripulante() const {
    return tripu;
}

void NodoTripulante::SetSiguiente(NodoTripulante* siguiente) {
    this->siguiente = siguiente;
}

NodoTripulante* NodoTripulante::GetSiguiente() const {
    return siguiente;
}

string NodoTripulante::toString(){
    return this->tripu->toString();
}