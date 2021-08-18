/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Persona.cpp
 * Author: Estudiante
 * 
 * Created on 15 de noviembre de 2020, 11:00 AM
 */

#include "Persona.h"

Persona::Persona() {
    cedula= " ";
    nombre=" ";
    apellido=" ";
}

Persona::Persona(string cedula, string nombre, string apellido){
    this->cedula=cedula;
    this->nombre=nombre;
    this->apellido=apellido;
}
Persona::Persona(const Persona& orig) {
}

Persona::~Persona() {
}

void Persona::SetApellido(string apellido) {
    this->apellido = apellido;
}

string Persona::GetApellido() const {
    return apellido;
}

void Persona::SetNombre(string nombre) {
    this->nombre = nombre;
}

string Persona::GetNombre() const {
    return nombre;
}

void Persona::SetCedula(string cedula) {
    this->cedula = cedula;
}

string Persona::GetCedula() const {
    return cedula;
}

