/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaReser.h
 * Author: Estudiante
 *
 * Created on 15 de noviembre de 2020, 04:00 PM
 */

#ifndef LISTARESER_H
#define LISTARESER_H
#include "NodoReser.h"

class ListaReser {
public:
    ListaReser();
    ListaReser(NodoReser* primero, NodoReser* actual);
    ListaReser(const ListaReser& orig);
    virtual ~ListaReser();
    void insertarReser(Reservacion* c);
    string toString();
    bool listaVacia();
    bool eliminaFinal();
    void setActual(NodoReser* actual);
    NodoReser* getActual() const;
    void setPrimero(NodoReser* primero);
    NodoReser* getPrimero() const;
    string reserCodigoVuelo(string);
    string reporteClienteVuelo(string);
    string reporteMontoVuelo(string);
    string reporteTripu(string);
    string reporteDestino();
    string reportePrimera();
    string reporteMasViaje();
private:
    NodoReser* primero;
    NodoReser* actual;
};

#endif /* LISTARESER_H */

