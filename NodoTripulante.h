/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodoTripulante.h
 * Author: Estudiante
 *
 * Created on 15 de noviembre de 2020, 03:19 PM
 */

#ifndef NODOTRIPULANTE_H
#define NODOTRIPULANTE_H
#include "Tripulante.h"

class NodoTripulante {
public:
    NodoTripulante();
    NodoTripulante(Tripulante* tripu, NodoTripulante* nt);
    NodoTripulante(const NodoTripulante& orig);
    virtual ~NodoTripulante();
    void SetTripulante(Tripulante* tripu);
    Tripulante* GetTripulante() const;
    void SetSiguiente(NodoTripulante* siguiente);
    NodoTripulante* GetSiguiente() const;
    string toString();
private:
    NodoTripulante* siguiente;
    Tripulante* tripu;

};

#endif /* NODOTRIPULANTE_H */

