/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaGuia.h
 * Author: Estudiante
 *
 * Created on 15 de noviembre de 2020, 03:09 PM
 */

#ifndef LISTAGUIA_H
#define LISTAGUIA_H
#include "NodoGuia.h"
class ListaGuia {
public:
    ListaGuia();
    ListaGuia(NodoGuia* primero,NodoGuia* actual);
    void insertarGuia(Guia* g);
    ListaGuia(const ListaGuia& orig);
    string toString();
    virtual ~ListaGuia();
    void setActual(NodoGuia* actual);
    NodoGuia* getActual() const;
    void setPrimero(NodoGuia* primero);
    NodoGuia* getPrimero() const;
private:
    NodoGuia* primero;
    NodoGuia* actual;
};

#endif /* LISTAGUIA_H */

