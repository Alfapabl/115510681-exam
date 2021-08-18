/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodoCliente.cpp
 * Author: Estudiante
 * 
 * Created on 15 de noviembre de 2020, 02:46 PM
 */

#include "NodoCliente.h"

NodoCliente::NodoCliente() {
    this->client=NULL;
    this->siguiente=NULL;
}

NodoCliente::NodoCliente(Cliente* cl, NodoCliente* nc) {
    this->client=cl;
    this->siguiente=nc;
}

NodoCliente::NodoCliente(const NodoCliente& orig) {
}

NodoCliente::~NodoCliente() {
    delete this->client;
}

void NodoCliente::SetClient(Cliente* client) {
    this->client = client;
}

Cliente* NodoCliente::GetClient() const {
    return client;
}

void NodoCliente::SetSiguiente(NodoCliente* siguiente) {
    this->siguiente = siguiente;
}

NodoCliente* NodoCliente::GetSiguiente() const {
    return siguiente;
}

string NodoCliente::toString(){
    return this->client->toString();
}
