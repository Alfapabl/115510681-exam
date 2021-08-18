/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaCliente.h
 * Author: Estudiante
 *
 * Created on 15 de noviembre de 2020, 02:47 PM
 */

#ifndef LISTACLIENTE_H
#define LISTACLIENTE_H
#include "NodoCliente.h"

class ListaCliente {
public:
    ListaCliente();
    ListaCliente(NodoCliente* primero,NodoCliente* actual);
    void insertarCliente(Cliente* c);
    void setActual(NodoCliente* actual);
    NodoCliente* getActual() const;
    void setPrimero(NodoCliente* primero);
    NodoCliente* getPrimero() const;
    ListaCliente(const ListaCliente& orig);
    virtual ~ListaCliente();
    string toString();
private:
    NodoCliente* primero;
    NodoCliente* actual;
};

#endif /* LISTACLIENTE_H */

