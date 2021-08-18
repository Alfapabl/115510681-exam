/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodoVuelo.h
 * Author: Estudiante
 *
 * Created on 15 de noviembre de 2020, 01:16 PM
 */

#ifndef NODOVUELO_H
#define NODOVUELO_H
#include "Vuelo.h"

class NodoVuelo {
public:
    NodoVuelo();
    NodoVuelo(Vuelo* vue, NodoVuelo* nv);
    NodoVuelo(const NodoVuelo& orig);
    virtual ~NodoVuelo();
    string toString();
    void setVuelo(Vuelo* vuelo);
    Vuelo* getVuelo() const;
    void setSiguiente(NodoVuelo* siguiente);
    NodoVuelo* getSiguiente() const;
private:
    NodoVuelo* siguiente;
    Vuelo* vuelo;

};

#endif /* NODOVUELO_H */

