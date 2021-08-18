/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Fecha.h
 * Author: Estudiante
 *
 * Created on 15 de noviembre de 2020, 09:18 AM
 */

#ifndef FECHA_H
#define FECHA_H
#include <iostream>
#include <string>
#include <sstream> 


using namespace std;

class Fecha {
public:
    Fecha();
    Fecha(int dia, int mes, int anio);
    Fecha(const Fecha& orig);
    virtual ~Fecha();
    void SetAnio(int anio);
    int GetAnio() const;
    void SetMes(int mes);
    int GetMes() const;
    void SetDia(int dia);
    int GetDia() const;
    string toStringFe();
private:
    int dia;
    int mes;
    int anio;
};

#endif /* FECHA_H */

