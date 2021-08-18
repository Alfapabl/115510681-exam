/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaTripulante.cpp
 * Author: Estudiante
 * 
 * Created on 15 de noviembre de 2020, 03:19 PM
 */

#include "ListaTripulante.h"

ListaTripulante::ListaTripulante() {
}

ListaTripulante::ListaTripulante(const ListaTripulante& orig) {
}

ListaTripulante::~ListaTripulante() {
}

void ListaTripulante::setActual(NodoTripulante* actual) {
    this->actual = actual;
}

NodoTripulante* ListaTripulante::getActual() const {
    return actual;
}

void ListaTripulante::setPrimero(NodoTripulante* primero) {
    this->primero = primero;
}

NodoTripulante* ListaTripulante::getPrimero() const {
    return primero;
}

void ListaTripulante::insertarTripulante(Tripulante* t){
    
 actual = primero; 
    if (primero == NULL) 
    {
        primero = new NodoTripulante(t, NULL);
    } else {
        
        while (actual->GetSiguiente() != NULL) 
        { 
            actual = actual->GetSiguiente();
        }
        actual->SetSiguiente(new NodoTripulante(t, NULL));
    }
    
}

string ListaTripulante::toString(){
    actual=primero;
    stringstream s;
    while(actual!=NULL){
        s<<actual->GetTripulante()->toString()<<endl;
        actual=actual->GetSiguiente();
    }
    return s.str();
}