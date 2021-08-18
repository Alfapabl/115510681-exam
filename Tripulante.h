/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tripulante.h
 * Author: Estudiante
 *
 * Created on 15 de noviembre de 2020, 12:11 PM
 */

#ifndef TRIPULANTE_H
#define TRIPULANTE_H
#include "Persona.h"

class Tripulante: public Persona {
public:
    Tripulante();
    Tripulante(string cedula, string nombre, string apellido, string numCarnet, string rol);
    Tripulante(const Tripulante& orig);
    virtual ~Tripulante();
    void SetRol(string rol);
    string GetRol() const;
    void SetNumCarnet(string numCarnet);
    string GetNumCarnet() const;
    string toString();
private:
    string numCarnet;
    string rol;
};

#endif /* TRIPULANTE_H */

