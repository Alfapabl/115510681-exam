/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Vuelo.h
 * Author: Estudiante
 *
 * Created on 15 de noviembre de 2020, 09:00 AM
 */

#ifndef VUELO_H
#define VUELO_H
#include "Avion.h"
#include "Fecha.h"
#include "Hora.h"
#include "Ruta.h"
#include "ListaTripulante.h"

class Vuelo {
public:
    Vuelo();
    Vuelo(string codigoVuelo, Hora* hora, Fecha* fecha, Ruta* ruta, Avion* avion,ListaTripulante* tripulante);
    Vuelo(const Vuelo& orig);
    virtual ~Vuelo();
    void SetCodigoVuelo(string codigoVuelo);
    string GetCodigoVuelo() const;
    string toSting();
    void SetHora(Hora* hora);
    Hora* GetHora() const;
    void SetFecha(Fecha* fecha);
    Fecha* GetFecha() const;
    void SetAvion(Avion* avion);
    Avion* GetAvion() const;
    void SetRuta(Ruta* ruta);
    Ruta* GetRuta() const;
    void setTripulante(ListaTripulante* tripulante);
    ListaTripulante* getTripulante() const;
private:
    string codigoVuelo;
    Ruta * ruta;
    Avion * avion;
    Fecha * fecha;
    Hora * hora;
    ListaTripulante* tripulante;
};

#endif /* VUELO_H */

