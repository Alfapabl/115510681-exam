/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Reservacion.h
 * Author: Estudiante
 *
 * Created on 15 de noviembre de 2020, 11:20 AM
 */

#ifndef RESERVACION_H
#define RESERVACION_H
#include "Vuelo.h"
#include "Fecha.h"
#include "Hora.h"
#include "Cliente.h"
#include "Guia.h"


class Reservacion {
public:
    Reservacion();
    Reservacion(string codReservacion,int cantBoletos, int categoria, Fecha* fecha, Hora* hora, Vuelo* vuelo, Guia* guia, Cliente* cliente);
    Reservacion(const Reservacion& orig);
    virtual ~Reservacion();
    void SetMontoTotal(double montoTotal);
    double GetMontoTotal() const;
    void SetCategoria(int categoria);
    int GetCategoria() const;
    void SetCantBoletos(int cantBoletos);
    int GetCantBoletos() const;
    void SetCodReservacion(string codReservacion);
    string GetCodReservacion() const;
    string toStringRes();
    void SetVuelo(Vuelo* vuelo);
    Vuelo* GetVuelo() const;
    void SetFe(Fecha* fe);
    Fecha* GetFe() const;
    void SetGuia(Guia* guia);
    Guia* GetGuia() const;
    void SetCli(Cliente* cli);
    Cliente* GetCli() const;
    double montoTotal();
    double iva(double precio);
    void SetHora(Hora* hora);
    Hora* GetHora() const;
private:
    string codReservacion;
    int cantBoletos;
    int categoria;
    Vuelo * vuelo;
    Cliente * cli;
    Guia * guia;
    Fecha * fe;
    Hora * hora;
};

#endif /* RESERVACION_H */

