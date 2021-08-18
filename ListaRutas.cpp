/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaRutas.cpp
 * Author: Estudiante
 * 
 * Created on 15 de noviembre de 2020, 03:54 PM
 */

#include "ListaRutas.h"

ListaRutas::ListaRutas() {
}

ListaRutas::ListaRutas(const ListaRutas& orig) {
}

ListaRutas::~ListaRutas() {
}

void ListaRutas::SetActual(NodoRutas* actual) {
    this->actual = actual;
}

NodoRutas* ListaRutas::GetActual() const {
    return actual;
}

void ListaRutas::SetPrimero(NodoRutas* primero) {
    this->primero = primero;
}

NodoRutas* ListaRutas::GetPrimero() const {
    return primero;
}

void ListaRutas::insertarRuta(Ruta* r){
    
 actual = primero; 
    if (primero == NULL) 
    {
        primero = new NodoRutas(r, NULL);
    } else {
        
        while (actual->GetSiguiente() != NULL) 
        { 
            actual = actual->GetSiguiente();
        }
        actual->SetSiguiente(new NodoRutas(r, NULL));
    }
    
}

string ListaRutas::toString(){
    actual=primero;
    stringstream s;
    while(actual!=NULL){
        s<<actual->GetRuta()->toStringRuta()<<endl;
        actual=actual->GetSiguiente();
    }
    return s.str();
}