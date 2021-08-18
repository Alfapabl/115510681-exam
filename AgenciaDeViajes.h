/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AgenciaDeViajes.h
 * Author: Estudiante
 *
 * Created on 15 de noviembre de 2020, 10:23 AM
 */

#ifndef AGENCIADEVIAJES_H
#define AGENCIADEVIAJES_H

#include "ContenedoraAvion.h"
#include "ListaReser.h"



using namespace std;

class AgenciaDeViajes {
public:
    AgenciaDeViajes();
    AgenciaDeViajes(int telefono, string cedulaJuridica, string nombreAgen, ListaReser* reserva, ContenedoraAvion* avion);
    AgenciaDeViajes(const AgenciaDeViajes& orig);
    virtual ~AgenciaDeViajes();
    void SetNombreAgen(string nombreAgen);
    string GetNombreAgen() const;
    void SetCedulaJuridica(string cedulaJuridica);
    string GetCedulaJuridica() const;
    void SetTelefono(int telefono);
    int GetTelefono() const;
    string toStringAgencia();
    string reporteClientesVuelo();
    double montoPorVuelo(string codigoVuelo);
private:
    int telefono;
    string cedulaJuridica;
    string nombreAgen;
    ListaReser* reserva;
    ContenedoraAvion* avion;
};

#endif /* AGENCIADEVIAJES_H */

