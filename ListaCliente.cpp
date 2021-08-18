/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaCliente.cpp
 * Author: Estudiante
 * 
 * Created on 15 de noviembre de 2020, 02:47 PM
 */

#include "ListaCliente.h"

ListaCliente::ListaCliente() {
    primero = NULL;
    actual = NULL;
}

void ListaCliente::setActual(NodoCliente* actual) {
    this->actual = actual;
}
NodoCliente* ListaCliente::getActual() const {
    return actual;
}

void ListaCliente::setPrimero(NodoCliente* primero) {
    this->primero = primero;
}

NodoCliente* ListaCliente::getPrimero() const {
    return primero;
}

ListaCliente::ListaCliente(NodoCliente* primero,NodoCliente* actual) {
    this->primero = primero;
    this->actual = actual;
}


ListaCliente::ListaCliente(const ListaCliente& orig) {
}

ListaCliente::~ListaCliente() {
}

string ListaCliente::toString(){
    actual=primero;
    stringstream s;
    while(actual!=NULL){
        s<<actual->GetClient()->toString()<<endl;
        actual=actual->GetSiguiente();
    }
    return s.str();
}

void ListaCliente::insertarCliente(Cliente* c){
    
 actual = primero; 
 
    if (primero == NULL) 
    {
        primero = new NodoCliente(c, NULL);
    } else {
        
        while (actual->GetSiguiente() != NULL) 
        { 
            actual = actual->GetSiguiente();
        }
        actual->SetSiguiente(new NodoCliente(c, NULL));
    }
    
}