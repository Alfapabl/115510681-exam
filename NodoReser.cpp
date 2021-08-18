/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodoReser.cpp
 * Author: Estudiante
 * 
 * Created on 15 de noviembre de 2020, 04:00 PM
 */

#include "NodoReser.h"

NodoReser::NodoReser() {
    this->res=NULL;
    this->siguiente=NULL;
}

NodoReser::NodoReser(Reservacion* res, NodoReser* nr) {
   this->res=res;
    this->siguiente=nr;
}
void NodoReser::setRes(Reservacion* res) {
    this->res = res;
}

Reservacion* NodoReser::getRes() const {
    return res;
}

void NodoReser::setSiguiente(NodoReser* siguiente) {
    this->siguiente = siguiente;
}

NodoReser* NodoReser::getSiguiente() const {
    return siguiente;
}

NodoReser::NodoReser(const NodoReser& orig) {
}

NodoReser::~NodoReser() {
}

string NodoReser::toString(){
    return this->res->toStringRes();
}
