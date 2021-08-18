/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Guia.h
 * Author: Estudiante
 *
 * Created on 15 de noviembre de 2020, 12:11 PM
 */

#ifndef GUIA_H
#define GUIA_H
#include "Persona.h"

class Guia: public Persona {
public:
    Guia();
    Guia(string cedula, string nombre, string apellido, string telefono, string especialidad);
    Guia(const Guia& orig);
    virtual ~Guia();
    void SetEspecialidad(string especialidad);
    string GetEspecialidad() const;
    void SetTelefono(string telefono);
    string GetTelefono() const;
    string toString();
private:
    string telefono;
    string especialidad;
};

#endif /* GUIA_H */

