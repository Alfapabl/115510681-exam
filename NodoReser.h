/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodoReser.h
 * Author: Estudiante
 *
 * Created on 15 de noviembre de 2020, 04:00 PM
 */

#ifndef NODORESER_H
#define NODORESER_H
#include "Reservacion.h"

class NodoReser {
public:
    NodoReser();
    NodoReser(Reservacion* res, NodoReser* nr);
    NodoReser(const NodoReser& orig);
    virtual ~NodoReser();
    string toString();
    void setRes(Reservacion* res);
    Reservacion* getRes() const;
    void setSiguiente(NodoReser* siguiente);
    NodoReser* getSiguiente() const;
private:
    NodoReser* siguiente;
    Reservacion* res;

};

#endif /* NODORESER_H */

