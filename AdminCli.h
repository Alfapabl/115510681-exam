/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AdminCli.h
 * Author: Estudiante
 *
 * Created on 15 de noviembre de 2020, 11:40 PM
 */

#ifndef ADMINCLI_H
#define ADMINCLI_H
#include "Cliente.h"

class AdminCli {
public:
    AdminCli();
    void AbrirE(); // Abrir para escribir(1)
    void CerrarE(); // Cerrar para escribir(1)
    void AbrirL(); // Abrir para leer(2)    
    void CerrarL(); // Cerrar para leer(2)
    string Leer();
    void Escribir(Cliente *cli);
    AdminCli(const AdminCli& orig);
    virtual ~AdminCli();
    void SetArchivoL(ifstream *L);
    ifstream * GetArchivoL();
    void SetArchivoE(ofstream *E);
    ofstream * GetArchivoE();
private:
    ofstream *archivoE; 
    ifstream *archivoL;  

};

#endif /* ADMINCLI_H */

