/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaRutas.h
 * Author: Estudiante
 *
 * Created on 15 de noviembre de 2020, 03:54 PM
 */

#ifndef LISTARUTAS_H
#define LISTARUTAS_H
#include "NodoRutas.h"

class ListaRutas {
public:
    ListaRutas();
    ListaRutas(NodoRutas* primero,NodoRutas* actual);
    void insertarRuta(Ruta* r);
    ListaRutas(const ListaRutas& orig);
    virtual ~ListaRutas();
    void SetActual(NodoRutas* actual);
    NodoRutas* GetActual() const;
    void SetPrimero(NodoRutas* primero);
    NodoRutas* GetPrimero() const;
    string toString();
private:
    NodoRutas* primero;
    NodoRutas* actual;
};

#endif /* LISTARUTAS_H */

