/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaReser.cpp
 * Author: Estudiante
 * 
 * Created on 15 de noviembre de 2020, 04:00 PM
 */

#include "ListaReser.h"

ListaReser::ListaReser() {
    primero = NULL;
    actual = NULL;
}

ListaReser::ListaReser(NodoReser* primero, NodoReser* actual) {
    this->primero = primero;
    this->actual = actual;
}

ListaReser::ListaReser(const ListaReser& orig) {
}

ListaReser::~ListaReser() {
      while (!listaVacia()) {
        eliminaFinal();
}
}

bool ListaReser::listaVacia(){
    
 if(this->primero == NULL) {
        return true;
    } else 
    {
        return false;
    }
}

bool ListaReser::eliminaFinal(){
    actual = primero;
    if (primero == NULL) {
        return false;
    } else {
        
        if (primero->getSiguiente() == NULL) {
            delete primero;
            primero = NULL;
        } else {

            while (actual->getSiguiente()->getSiguiente() != NULL) {
                actual = actual->getSiguiente();
            }
            delete actual->getSiguiente();
            actual->setSiguiente(NULL);
        }
        return true;
    }
}

void ListaReser::setActual(NodoReser* actual) {
    this->actual = actual;
}

NodoReser* ListaReser::getActual() const {
    return actual;
}

void ListaReser::setPrimero(NodoReser* primero) {
    this->primero = primero;
}

NodoReser* ListaReser::getPrimero() const {
    return primero;
}

string ListaReser::toString(){
    actual=primero;
    stringstream s;
    while(actual!=NULL){
        s<<actual->getRes()->toStringRes()<<endl;
        actual=actual->getSiguiente();
    }
    return s.str();
}

void ListaReser::insertarReser(Reservacion* c){  
            
    actual = primero; 
    if (primero == NULL) 
    {
        primero = new NodoReser(c, NULL);
    } else {
        
        while (actual->getSiguiente() != NULL) 
        { 
            actual = actual->getSiguiente();
        }
        actual->setSiguiente(new NodoReser(c, NULL));
    }
   
}

string ListaReser::reserCodigoVuelo(string codigo){
    actual=primero;
    stringstream s;
    while(actual!=NULL){
    if(actual->getRes()->GetVuelo()->GetCodigoVuelo() == codigo){
          s<<actual->getRes()->toStringRes()<<endl;
    }
    actual=actual->getSiguiente();
    }
    return s.str();
}

string ListaReser::reporteClienteVuelo(string codigo){
    actual=primero;
    stringstream s;
    while(actual!=NULL){
    if(actual->getRes()->GetVuelo()->GetCodigoVuelo() == codigo){
          s<<actual->getRes()->GetCli()->toString()<<endl;
    }
    actual=actual->getSiguiente();
    }
    return s.str();
}

string ListaReser::reporteMontoVuelo(string codigoVuelo){
    actual=primero;
    stringstream s;
    while(actual!=NULL){
    if(actual->getRes()->GetVuelo()->GetCodigoVuelo() == codigoVuelo){
          s<<"Monto total de Vuelo: "<<actual->getRes()->montoTotal()<<endl;
    }
    actual=actual->getSiguiente();
    }
    return s.str();
}

string ListaReser::reporteTripu(string codigoVuelo){
    actual=primero;
    stringstream s;
    while(actual!=NULL){
    if(actual->getRes()->GetVuelo()->GetCodigoVuelo() == codigoVuelo){
          s<<"Tripulacion: "<<actual->getRes()->GetVuelo()->getTripulante()->toString()<<endl;
    }
    actual=actual->getSiguiente();
    }
    return s.str();
    
}

string ListaReser::reporteDestino(){
     actual = primero;
     int max=-1;
     string res;
    while(actual != NULL){
        actual= actual->getSiguiente();
        int count=1;
        
        while(actual !=NULL){
            if(primero->getRes()->GetVuelo()->GetRuta()->GetPaisDestino() == actual->getRes()->GetVuelo()->GetRuta()->GetPaisDestino()){
                count++;}
            actual=actual->getSiguiente();
        }
        if(max<count){
         res= primero->getRes()->GetVuelo()->GetRuta()->GetPaisDestino(); 
         max=count;
        }
        primero=primero->getSiguiente();
    }
     return res;
     
 }

string ListaReser::reportePrimera(){
    actual=primero;
    stringstream s;
    while(actual!=NULL){
    if(actual->getRes()->GetCategoria() == 2){
          s<<"Clientes primera clase: "<<actual->getRes()->GetCli()->toString()<<endl;
    }
    actual=actual->getSiguiente();
    }
    return s.str();
}

string ListaReser::reporteMasViaje(){
    actual = primero;
     int max=-1;
     string res;
    while(actual != NULL){
        actual= actual->getSiguiente();
        int count=1;
        
        while(actual !=NULL){
            if(primero->getRes()->GetCli()->GetCedula() == actual->getRes()->GetCli()->GetCedula()){
                count++;}
            actual=actual->getSiguiente();
        }
        if(max<count){
         res= primero->getRes()->GetCli()->GetNombre(); 
         max=count;
        }
        primero=primero->getSiguiente();
    }
     return res;
     
}