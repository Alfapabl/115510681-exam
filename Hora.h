/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Hora.h
 * Author: Estudiante
 *
 * Created on 15 de noviembre de 2020, 09:18 AM
 */

#ifndef HORA_H
#define HORA_H
#include <iostream>
#include <string>
#include <sstream> 


using namespace std;

class Hora {
public:
    Hora();
    Hora(int hora, int minutos, int segundos);
    Hora(const Hora& orig);
    virtual ~Hora();
    void SetSegundos(int segundos);
    int GetSegundos() const;
    void SetMinutos(int minutos);
    int GetMinutos() const;
    void SetHora(int hora);
    int GetHora() const;
    string toStringHora();
private:
    int hora;
    int minutos;
    int segundos;
};

#endif /* HORA_H */

