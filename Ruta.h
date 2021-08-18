/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ruta.h
 * Author: Estudiante
 *
 * Created on 15 de noviembre de 2020, 09:17 AM
 */

#ifndef RUTA_H
#define RUTA_H
#include <iostream>
#include <string>
#include <sstream> 


using namespace std;

class Ruta {
public:
    Ruta();
    Ruta(string ciudadOrigen,string paisOrigen, string ciudadDestino, string paisDestino,float precio,float duracionDelViaje);
    Ruta(const Ruta& orig);
    virtual ~Ruta();
    void SetDuracionDelViaje(float duracionDelViaje);
    float GetDuracionDelViaje() const;
    void SetPrecio(float precio);
    float GetPrecio() const;
    void SetPaisDestino(string paisDestino);
    string GetPaisDestino() const;
    void SetCiudadDestino(string ciudadDestino);
    string GetCiudadDestino() const;
    void SetPaisOrigen(string paisOrigen);
    string GetPaisOrigen() const;
    void SetCiudadOrigen(string ciudadOrigen);
    string GetCiudadOrigen() const;
    string toStringRuta();
private:
    string ciudadOrigen;
    string paisOrigen;
    string ciudadDestino;
    string paisDestino;
    float precio;
    float duracionDelViaje;

};

#endif /* RUTA_H */

