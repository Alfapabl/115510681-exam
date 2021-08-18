/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ContenedoraAvion.cpp
 * Author: Estudiante
 * 
 * Created on 15 de noviembre de 2020, 5:21 PM
 */

#include "ContenedoraAvion.h"

ContenedoraAvion::ContenedoraAvion() {
    cantidad = 0;
	tamano = 7;
	for (int i=0; i<tamano; i++)
		avion[i] = NULL;
}

ContenedoraAvion::ContenedoraAvion(const ContenedoraAvion& orig) {
}

ContenedoraAvion::~ContenedoraAvion() {
    for (int i=0; i<cantidad; i++)
		 delete avion[i];
	 cantidad = 0;
}

void ContenedoraAvion::insertaElemento(Avion* av){
    if (cantidad < tamano)
    {	
    avion[cantidad] = av;
    cout<<"Avion ingresado con exito"<<endl;
	cantidad++;
    }   
}

void ContenedoraAvion::toString(){
    for (int i=0; i<cantidad; i++){
		cout<<"Avion "<<i+1<<endl;
		cout<<avion[i]->toStringAvion();
	}
}

void ContenedoraAvion::setTamano(int tamano) {
    this->tamano = tamano;
}

int ContenedoraAvion::getTamano() const {
    return tamano;
}

void ContenedoraAvion::setCantidad(int cantidad) {
    this->cantidad = cantidad;
}

int ContenedoraAvion::getCantidad() const {
    return cantidad;
}

