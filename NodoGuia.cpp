/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodoGuia.cpp
 * Author: Estudiante
 * 
 * Created on 15 de noviembre de 2020, 03:09 PM
 */

#include "NodoGuia.h"

NodoGuia::NodoGuia() {
    this->guia=NULL;
    this->siguiente=NULL;
}

NodoGuia::NodoGuia(Guia* gui, NodoGuia* ng) {
    this->guia=gui;
    this->siguiente=ng;
}

NodoGuia::NodoGuia(const NodoGuia& orig) {
}

NodoGuia::~NodoGuia() {
    delete this->guia;
}

void NodoGuia::SetGuia(Guia* gui) {
    this->guia = gui;
}

Guia* NodoGuia::GetGuia() const {
    return guia;
}

void NodoGuia::SetSiguiente(NodoGuia* siguiente) {
    this->siguiente = siguiente;
}

NodoGuia* NodoGuia::GetSiguiente() const {
    return siguiente;
}

string NodoGuia::toString(){
    return this->guia->toStringGuia();
}
