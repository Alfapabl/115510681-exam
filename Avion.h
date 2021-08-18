/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Avion.h
 * Author: Estudiante
 *
 * Created on 15 de noviembre de 2020, 09:18 AM
 */

#ifndef AVION_H
#define AVION_H
#include <iostream>
#include <string>
#include <sstream> 


using namespace std;

class Avion {
public:
    Avion();
    Avion(string codigoAvion, int cantidadMaxPasajeros);
    Avion(const Avion& orig);
    virtual ~Avion();
    void SetCantidadMaxPasajeros(int cantidadMaxPasajeros);
    int GetCantidadMaxPasajeros() const;
    void SetCodigoAvion(string codigoAvion);
    string GetCodigoAvion() const;
    string toStringAvion();
    
private:
    string codigoAvion;
    int cantidadMaxPasajeros;
   };

#endif /* AVION_H */

