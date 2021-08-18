/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cliente.h
 * Author: Estudiante
 *
 * Created on 15 de noviembre de 2020, 12:11 PM
 */

#ifndef CLIENTE_H
#define CLIENTE_H
#include "Persona.h"

class Cliente: public Persona {
public:
    Cliente();
    Cliente(string cedula, string nombre, string apellido, string numTarjeta);
    Cliente(const Cliente& orig);
    virtual ~Cliente();
    void SetNumTarjeta(string numTarjeta);
    string GetNumTarjeta() const;
    string toString();
private:
    string numTarjeta;
    
};

#endif /* CLIENTE_H */

