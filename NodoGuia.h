/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodoGuia.h
 * Author: Estudiante
 *
 * Created on 15 de noviembre de 2020, 03:09 PM
 */

#ifndef NODOGUIA_H
#define NODOGUIA_H
#include "Guia.h"

class NodoGuia {
public:
    NodoGuia();
    NodoGuia(Guia* gui, NodoGuia* ng);
    NodoGuia(const NodoGuia& orig);
    virtual ~NodoGuia();
    void SetGuia(Guia* guia);
    Guia* GetGuia() const;
    void SetSiguiente(NodoGuia* siguiente);
    NodoGuia* GetSiguiente() const;
    string toString();
private:
    NodoGuia* siguiente;
    Guia* guia;
};

#endif /* NODOGUIA_H */

