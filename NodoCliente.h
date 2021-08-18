/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodoCliente.h
 * Author: Estudiante
 *
 * Created on 15 de noviembre de 2020, 02:46 PM
 */

#ifndef NODOCLIENTE_H
#define NODOCLIENTE_H
#include "Cliente.h"

class NodoCliente {
public:
    NodoCliente();
    NodoCliente(Cliente* cl, NodoCliente* nc);
    NodoCliente(const NodoCliente& orig);
    virtual ~NodoCliente();
    void SetClient(Cliente* client);
    Cliente* GetClient() const;
    void SetSiguiente(NodoCliente* siguiente);
    NodoCliente* GetSiguiente() const;
    string toString();
private:
    NodoCliente* siguiente;
    Cliente* client;

};

#endif /* NODOCLIENTE_H */

