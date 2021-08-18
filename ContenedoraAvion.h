/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ContenedoraAvion.h
 * Author: Estudiante
 *
 * Created on 15 de noviembre de 2020, 5:20 PM
 */

#ifndef CONTENEDORAAVION_H
#define CONTENEDORAAVION_H
#include "Avion.h"

class ContenedoraAvion {
public:
    ContenedoraAvion();
    ContenedoraAvion(const ContenedoraAvion& orig);
    virtual ~ContenedoraAvion();
    void insertaElemento(Avion* av);
    void toString();
    void setTamano(int tamano);
    int getTamano() const;
    void setCantidad(int cantidad);
    int getCantidad() const;
   
   
    
private:
    Avion* avion[7];
    int cantidad;
    int tamano;


};

#endif /* CONTENEDORAAVION_H */

