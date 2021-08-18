/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Reservacion.cpp
 * Author: Estudiante
 * 
 * Created on 15 de noviembre de 2020, 11:20 AM
 */

#include "Reservacion.h"

Reservacion::Reservacion() {
    codReservacion= " ";
    cantBoletos=0;
    categoria=0;
    this->fe=NULL;
    this->hora=NULL;
    this->vuelo=NULL;
    this->guia=NULL;
    this->cli=NULL;
    
}

Reservacion::Reservacion(string codReservacion,int cantBoletos, int categoria,  Fecha* fecha, Hora* hora, Vuelo* vuelo, Guia* guia, Cliente* cliente){
    this->codReservacion=codReservacion;
    this->cantBoletos=cantBoletos;
    this->codReservacion=codReservacion;
     this->fe=fecha;
    this->hora=hora;
    this->vuelo=vuelo;
    this->guia=guia;
    this->cli=cliente;
}
Reservacion::Reservacion(const Reservacion& orig) {
}

Reservacion::~Reservacion() {
}


void Reservacion::SetCategoria(int categoria) {
    this->categoria = categoria;
}

int Reservacion::GetCategoria() const {
    return categoria;
}

void Reservacion::SetCantBoletos(int cantBoletos) {
    this->cantBoletos = cantBoletos;
}

int Reservacion::GetCantBoletos() const {
    return cantBoletos;
}

void Reservacion::SetCodReservacion(string codReservacion) {
    this->codReservacion = codReservacion;
}

string Reservacion::GetCodReservacion() const {
    return codReservacion;
}

string Reservacion::toStringRes(){
stringstream s;
    s << "**************" << endl;
    s << "* RESERVACION *" << endl;
    s << "**************" << endl;
    s << "CODIGO DE RESERVACION:  " << this->codReservacion << endl;
    s << "CANTIDAD DE BOLETOS:  " << this->cantBoletos << endl;
    s << "CATEGORIA:" << this->categoria << endl;
    s<<"Fecha: "<<fe->toStringFe()<<endl;
    s<<"Hora: "<<hora->toStringHora()<<endl;
    s<<"Vuelo: "<<vuelo->toSting() <<endl;
    s<<"Guia: "<<guia->toString()<<endl;
    s<<"Cliente: "<<cli->toString()<<endl;
    
    s << " -------------" << endl << endl;
    return s.str();
}

void Reservacion::SetVuelo(Vuelo* vuelo) {
    this->vuelo = vuelo;
}

Vuelo* Reservacion::GetVuelo() const {
    return vuelo;
}

void Reservacion::SetFe(Fecha* fe) {
    this->fe = fe;
}

Fecha* Reservacion::GetFe() const {
    return fe;
}

void Reservacion::SetGuia(Guia* guia) {
    this->guia = guia;
}

Guia* Reservacion::GetGuia() const {
    return guia;
}

void Reservacion::SetCli(Cliente* cli) {
    this->cli = cli;
}

Cliente* Reservacion::GetCli() const {
    return cli;
}
double Reservacion::montoTotal(){
    double precio;
    if(categoria==1){
        precio=iva(vuelo->GetRuta()->GetPrecio());
    }
    else if(categoria==2){
        precio=iva(vuelo->GetRuta()->GetPrecio())+(vuelo->GetRuta()->GetPrecio()*30)/100;
    }
    else if(categoria==3){
        precio=iva(vuelo->GetRuta()->GetPrecio())-(vuelo->GetRuta()->GetPrecio()*10)/100;
    }
    else if(categoria==4){
        precio=iva(vuelo->GetRuta()->GetPrecio())-(vuelo->GetRuta()->GetPrecio()*50)/100;
    }
    
    return precio*cantBoletos;
}

double Reservacion::iva(double precio){
    double aux;
    double total;
    aux=(13*precio)/100;
    total=aux+precio;
    
    return total;
}

void Reservacion::SetHora(Hora* hora) {
    this->hora = hora;
}

Hora* Reservacion::GetHora() const {
    return hora;
}