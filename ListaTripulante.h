/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaTripulante.h
 * Author: Estudiante
 *
 * Created on 15 de noviembre de 2020, 03:19 PM
 */

#ifndef LISTATRIPULANTE_H
#define LISTATRIPULANTE_H
#include "NodoTripulante.h"

class ListaTripulante {
public:
    ListaTripulante();
    ListaTripulante(NodoTripulante* primero,NodoTripulante* actual);
    void insertarTripulante(Tripulante* t);
    ListaTripulante(const ListaTripulante& orig);
    string toString();
    virtual ~ListaTripulante();
    void setActual(NodoTripulante* actual);
    NodoTripulante* getActual() const;
    void setPrimero(NodoTripulante* primero);
    NodoTripulante* getPrimero() const;
private:
    NodoTripulante* primero;
    NodoTripulante* actual;
};

#endif /* LISTATRIPULANTE_H */

