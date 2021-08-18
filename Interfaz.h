/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Interfaz.h
 * Author: Estudiante
 *
 * Created on 15 de noviembre de 2020, 06:51 PM
 */

#ifndef INTERFAZ_H
#define INTERFAZ_H

#include "AgenciaDeViajes.h"

class Interfaz {
public:
    Interfaz();
    static int MenuOpc();
    Interfaz(const Interfaz& orig);
    virtual ~Interfaz();
    void ingresaCliente(Cliente* r);
    void ingresaFecha(Fecha* fe);
    void ingresaHora(Hora* hr);
    void ingresaRutas(Ruta* ru);
    void ingresaTripu(Tripulante* tri);
    void ingresaGuias(Guia* gui);
    void reserva(Reservacion* reserva1, Fecha* fecha, Hora* hora, Vuelo* vuelo, Guia* guia, Cliente* cliente);
    void vuelo(Vuelo* vue,Hora* hora, Fecha* fecha, Ruta* ruta, Avion* avion,ListaTripulante* tripulante);
    void reservacionesCodigo(ListaReser* lr);
    void reservacionesCliente(ListaReser* lr);
    void reporteMonto(ListaReser* lr);
    void reporteTripulacion(ListaReser* lr);
    void destinoMas(ListaReser* lr);
    void reportePrimeraClase(ListaReser* lr);
    void reporteMasViaje(ListaReser* lr);
    
   private:
    

};

#endif /* INTERFAZ_H */

