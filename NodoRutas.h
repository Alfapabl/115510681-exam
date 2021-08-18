/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodoRutas.h
 * Author: Estudiante
 *
 * Created on 15 de noviembre de 2020, 03:54 PM
 */

#ifndef NODORUTAS_H
#define NODORUTAS_H
#include "Ruta.h"

class NodoRutas {
public:
    NodoRutas();
    NodoRutas(Ruta* ruta, NodoRutas* nr);
    NodoRutas(const NodoRutas& orig);
    virtual ~NodoRutas();
    void SetRuta(Ruta* ruta);
    Ruta* GetRuta() const;
    void SetSiguiente(NodoRutas* siguiente);
    NodoRutas* GetSiguiente() const;
    string toString();
private:
    NodoRutas* siguiente;
    Ruta* ruta;

};

#endif /* NODORUTAS_H */

