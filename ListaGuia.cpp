/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaGuia.cpp
 * Author: Estudiante
 * 
 * Created on 15 de noviembre de 2020, 03:09 PM
 */

#include "ListaGuia.h"

ListaGuia::ListaGuia() {
    primero = NULL;
    actual = NULL;
}

ListaGuia::ListaGuia(NodoGuia* primero,NodoGuia* actual) {
    primero = NULL;
    actual = NULL;
}

ListaGuia::ListaGuia(const ListaGuia& orig) {
}

ListaGuia::~ListaGuia() {
}

void ListaGuia::setActual(NodoGuia* actual) {
    this->actual = actual;
}

NodoGuia* ListaGuia::getActual() const {
    return actual;
}

void ListaGuia::setPrimero(NodoGuia* primero) {
    this->primero = primero;
}

NodoGuia* ListaGuia::getPrimero() const {
    return primero;
}

void ListaGuia::insertarGuia(Guia* g){
    
 actual = primero; 
    if (primero == NULL) 
    {
        primero = new NodoGuia(g, NULL);
    } else {
        
        while (actual->GetSiguiente() != NULL) 
        { 
            actual = actual->GetSiguiente();
        }
        actual->SetSiguiente(new NodoGuia(g, NULL));
    }
    
}

string ListaGuia::toString(){
    actual=primero;
    stringstream s;
    while(actual!=NULL){
        s<<actual->GetGuia()->toString()<<endl;
        actual=actual->GetSiguiente();
    }
    return s.str();
}