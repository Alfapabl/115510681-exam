/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaVuelo.h
 * Author: Estudiante
 *
 * Created on 15 de noviembre de 2020, 01:16 PM
 */

#ifndef LISTAVUELO_H
#define LISTAVUELO_H
#include "NodoVuelo.h"
class ListaVuelo {
public:
    ListaVuelo();
    ListaVuelo(NodoVuelo* primero,NodoVuelo* actual);
    void insertarVuelo(Vuelo* v);
    ListaVuelo(const ListaVuelo& orig);
    string toString();   
    virtual ~ListaVuelo();
    void setActual(NodoVuelo* actual);
    NodoVuelo* getActual() const;
    void setPrimero(NodoVuelo* primero);
    NodoVuelo* getPrimero() const;
private:
    NodoVuelo* primero;
    NodoVuelo* actual;

};

#endif /* LISTAVUELO_H */

