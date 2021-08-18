/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Persona.h
 * Author: Estudiante
 *
 * Created on 15 de noviembre de 2020, 11:00 AM
 */

#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <string>
#include <sstream> 

using namespace std;
class Persona {
public:
    Persona();
    Persona(string cedula, string nombre, string apellido);
    Persona(const Persona& orig);
    virtual ~Persona();
    void SetApellido(string apellido);
    string GetApellido() const;
    void SetNombre(string nombre);
    string GetNombre() const;
    void SetCedula(string cedula);
    string GetCedula() const;
    virtual string toString()= 0;
protected:
    string cedula;
    string nombre;
    string apellido;

};

#endif /* PERSONA_H */

