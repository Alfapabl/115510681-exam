/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Guia.cpp
 * Author: Estudiante
 * 
 * Created on 15 de noviembre de 2020, 12:11 PM
 */

#include "Guia.h"

Guia::Guia() {
    telefono= " ";
    especialidad= " ";
}

Guia::Guia(string cedula, string nombre, string apellido, string telefono, string especialidad): Persona(cedula, nombre, apellido){
    this->telefono=telefono;
    this->especialidad=especialidad;
}

Guia::Guia(const Guia& orig) {
}

Guia::~Guia() {
}

void Guia::SetEspecialidad(string especialidad) {
    this->especialidad = especialidad;
}

string Guia::GetEspecialidad() const {
    return especialidad;
}

void Guia::SetTelefono(string telefono) {
    this->telefono = telefono;
}

string Guia::GetTelefono() const {
    return telefono;
}

string Guia::toString(){
stringstream s;
    s << "**************" << endl;
    s << "* PERSONA *" << endl;
    s << "**************" << endl;
    s << "CEDULA:  " << this->cedula << endl;
    s << "NOMBRE:  " << this->nombre << endl;
    s << "APELLIDO:" << this->apellido << endl;
    s << "TELEFONO:  " << this->telefono << endl;
    s << "ESPECIALIDAD:  " << this->especialidad << endl;
    s << " -------------" << endl << endl;
    return s.str();
}