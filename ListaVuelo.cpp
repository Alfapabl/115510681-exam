/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaVuelo.cpp
 * Author: Estudiante
 * 
 * Created on 15 de noviembre de 2020, 01:16 PM
 */

#include "ListaVuelo.h"

ListaVuelo::ListaVuelo() {
    primero = NULL;
    actual = NULL;
}

ListaVuelo::ListaVuelo(const ListaVuelo& orig) {
}

ListaVuelo::~ListaVuelo() {
}

void ListaVuelo::setActual(NodoVuelo* actual) {
    this->actual = actual;
}

NodoVuelo* ListaVuelo::getActual() const {
    return actual;
}

void ListaVuelo::setPrimero(NodoVuelo* primero) {
    this->primero = primero;
}

NodoVuelo* ListaVuelo::getPrimero() const {
    return primero;
}

void ListaVuelo::insertarVuelo(Vuelo* v){
    
 actual = primero; 
    if (primero == NULL) 
    {
        primero = new NodoVuelo(v, NULL);
    } else {
        
        while (actual->getSiguiente() != NULL) 
        { 
            actual = actual->getSiguiente();
        }
        actual->setSiguiente(new NodoVuelo(v, NULL));
    }
    
}

string ListaVuelo::toString(){
    actual=primero;
    stringstream s;
    while(actual!=NULL){
        s<<actual->getVuelo()->toSting()<<endl;
        actual=actual->getSiguiente();
    }
    return s.str();
}