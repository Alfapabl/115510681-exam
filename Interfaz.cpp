/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Interfaz.cpp
 * Author: Estudiante
 * 
 * Created on 15 de noviembre de 2020, 06:51 PM
 */

#include "Interfaz.h"

Interfaz::Interfaz() {
}

int Interfaz::MenuOpc(){
    int opc = 0;
        system("clear");
        cout << "MENU:"<<endl;
        cout << "1. Ingresar Vuelos" << endl;
        cout << "2. Ingresar Aviones" << endl;
        cout << "3. Ingresar Clientes"<< endl;
        cout << "4. Ingresar Guias"<< endl;
        cout << "5. Ingresar Tripulantes"<< endl;
        cout << "6. Ingresar Rutas"<< endl;
        cout << "7. Crear Reservaciones"<< endl;
        cout << "8. Reporte de reservaciones segun codigo de vuelo"<< endl;
        cout << "9. Reportar clientes de un determinado vuelo"<< endl;
        cout << "10. Reporta y calcula monto total de tal vuelo"<< endl;
        cout << "11. Reporte de la tripulacion de tal vuelo"<< endl;
        cout << "12. Reporta clientes que viajan en primera clase"<< endl;
        cout << "13. Reporta el destino mas solicitado"<< endl;
        cout << "14. Reporta el cliente viajero"<< endl;
        cout << "15. Salir"<< endl;
        cout << "Digite una opción:" << endl;
        fflush(stdin);
        cin>>opc;    
    return opc;

}

Interfaz::Interfaz(const Interfaz& orig) {
}

Interfaz::~Interfaz() {
}

void Interfaz::ingresaCliente(Cliente* cli){
    string cedula,  nombre,  apellido,  numTarjeta;
    
    cout<<"REGISTRO DE CLIENTE"<<endl;
    cout<<"***********"<<endl;
    
    cout<<"Digite Cedula: "<<endl;
    cin>>cedula;
    cli->SetCedula(cedula);
    
    cout<<"Digite el nombre: "<<endl;
    cin>>nombre;
    cli->SetNombre(nombre);
    
    cout<<"Digite Apellido: "<<endl;
    cin>>apellido;
    cli->SetApellido(apellido);
    
    cout<<"Digite Tarjeta: "<<endl;
    cin>>numTarjeta;
    cli->SetApellido(numTarjeta);
    
    
    
    
}

void Interfaz::ingresaFecha(Fecha* fech){
    int dia, anio,mes;
    
    cout<<"REGISTRO DE FECHA"<<endl;
    cout<<"***********"<<endl;
    
    cout<<"Digite el dia: "<<endl;
    cin>>dia;
    fech->SetDia(dia);
    
    cout<<"Digite el mes: "<<endl;
    cin>>mes;
    fech->SetMes(mes);
    
    cout<<"Digite el anio: "<<endl;
    cin>>anio;
    fech->SetAnio(anio);
    
    
    
}

void Interfaz::ingresaHora(Hora* hor){
    
    int hora, minuto,segundo;
    
    cout<<"REGISTRO DE HORA"<<endl;
    cout<<"***********"<<endl;
    
    cout<<"Digite La hora: "<<endl;
    cin>>hora;
    hor->SetHora(hora);
    
    cout<<"Digite el minuto: "<<endl;
    cin>>minuto;
    hor->SetMinutos(minuto);
    
    cout<<"Digite el segundo: "<<endl;
    cin>>segundo;
    hor->SetSegundos(segundo);
}

void Interfaz::ingresaRutas(Ruta* ru){
    string ciudadOrigen;
    string paisOrigen;
    string ciudadDestino;
    string paisDestino;
    double precio;
    double duracionViaje;
    
    cout<<"PROCESO DE RUTA"<<endl;
    cout<<"***********"<<endl;
    
    cout<<"Digite La Ciudad De Origen: "<<endl;
    cin>>ciudadOrigen;
    ru->SetCiudadOrigen(ciudadOrigen);
    
    cout<<"Digite Pais De Origen: "<<endl;
    cin>>paisOrigen;
    ru->SetPaisOrigen(paisOrigen);
    
    cout<<"Digite La Ciudad Destino: "<<endl;
    cin>>ciudadDestino;
    ru->SetCiudadDestino(ciudadDestino);
    
    cout<<"Digite el pais destino: "<<endl;
    cin>>paisDestino;
    ru->SetCiudadOrigen(paisDestino);
    
    cout<<"Digite el precio: "<<endl;
    cin>>precio;
    ru->SetPrecio(precio);
    
    cout<<"Digite Duracion del viaje: "<<endl;
    cin>>duracionViaje;
    ru->SetDuracionDelViaje(duracionViaje);
    
    
}

void Interfaz::ingresaTripu(Tripulante* tri){
    string cedula,  nombre,  apellido,  numCarnet,  rol;
    
    cout<<"REGISTRO DE TRIPULACION"<<endl;
    cout<<"***********"<<endl;
        
    cout<<"Digite Carnet: "<<endl;
    cin>>numCarnet;
    tri->SetNumCarnet(numCarnet);
    
    cout<<"Digite el nombre: "<<endl;
    cin>>nombre;
    tri->SetNombre(nombre);
    
    cout<<"Digite Cedula: "<<endl;
    cin>>cedula;
    tri->SetCedula(cedula);
    
    cout<<"Digite Apellido: "<<endl;
    cin>>apellido;
    tri->SetApellido(apellido);
        
    cout<<"Digite Rol: "<<endl;
    cin>>rol;
    tri->SetRol(rol);
    
    
}

 void Interfaz::ingresaGuias(Guia* gui){
      string cedula,  nombre,  apellido,  numTarjeta;
      string telefono;
      string especialidad;
      
    cout<<"INFORMACION DE GUIAS"<<endl;
    cout<<"*************"<<endl;
              
    cout<<"Digite el nombre: "<<endl;
    cin>>nombre;
    gui->SetNombre(nombre);
    
    cout<<"Digite Cedula: "<<endl;
    cin>>cedula;
    gui->SetCedula(cedula);
    
    cout<<"Digite Apellido: "<<endl;
    cin>>apellido;
    gui->SetApellido(apellido);
    
    cout<<"Digite Telefono: "<<endl;
    cin>>telefono;
    gui->SetTelefono(telefono);
    
    cout<<"Digite Especialidad: "<<endl;
    cin>>especialidad;
    gui->SetEspecialidad(especialidad);
 }
 
 void Interfaz::reserva(Reservacion* reserva1, Fecha* fecha, Hora* hora, Vuelo* vuelo, Guia* guia, Cliente* cliente){
    string codigoReservacion;
    int cantBoletos;
    int categoria;
    cout<<"PROCESO DE RESERVA"<<endl;
    cout<<"***********"<<endl;
    
    cout<<"Ingrese el codigo que tendra la reserva: "<<endl;
    cin>>codigoReservacion;
    reserva1->SetCodReservacion(codigoReservacion);
    
    cout<<"Ingrese Categoria de 1 a 3 "<<endl;
    cin>>categoria;
    reserva1->SetCategoria(categoria);
    
    cout<<"Ingrese cantidad de boletos: "<<endl;
    cin>>cantBoletos;
    reserva1->SetCantBoletos(cantBoletos);
    
    reserva1->SetCategoria(categoria);
    reserva1->SetCli(cliente);
    reserva1->SetGuia(guia);
    reserva1->SetVuelo(vuelo);
    reserva1->SetHora(hora);
    reserva1->SetFe(fecha);
    
    
 }
 
 void Interfaz::vuelo(Vuelo* vue,Hora* hora, Fecha* fecha, Ruta* ruta, Avion* avion,ListaTripulante* tripulante){
    string cod;
    cout<<"REGISTRO DE VUELO"<<endl;
    cout<<"***********"<<endl;
    cout<<"Digite el codigo de vuelo: "<<endl;
    cin>>cod;
    vue->SetCodigoVuelo(cod);
    vue->SetRuta(ruta);
    vue->SetHora(hora);
    vue->SetFecha(fecha);
    vue->SetAvion(avion);
    vue->setTripulante(tripulante);
    
 }
 
 void Interfaz::reservacionesCodigo(ListaReser* listr){
     string codigo;
     cout<<"Digite codigo de vuelo"<<endl;
     cin>>codigo;
     cout<<"Resarvaciones de este codigo: "<<endl;
     cout<<listr->reporteClienteVuelo(codigo)<<endl;
     
 }
 
 void Interfaz::reservacionesCliente(ListaReser* listr){
      cout<<"Buscar Cliente por codigo de vuelo"<<endl;
      cout<<"**********"<<endl;
      string codigo;
      cout<<"Digite el codigo de vuelo: "<<endl;
      cin>>codigo;
      cout<<listr->reporteClienteVuelo(codigo)<<endl;
  }
  
 void Interfaz::reporteMonto(ListaReser* listr){
     string codigo;
     cout<<"Digite el Codigo de vuelo para conocer el monto total: "<<endl;
     cin>>codigo;
     cout<<listr->reporteMontoVuelo(codigo)<<endl;
 }
 
 void Interfaz::reporteTripulacion(ListaReser* listr){
     string codigo;
     cout<<"Digite el Codigo de vuelo para conocer la tripulacion: "<<endl;
     cin>>codigo;
     cout<<listr->reporteTripu(codigo)<<endl;
 }
 
 void Interfaz::destinoMas(ListaReser* listr){
     cout<<"Destino MAS visitado: "<<endl;
     cout<<listr->reporteDestino()<<endl;
     
 }
 
 void Interfaz::reportePrimeraClase(ListaReser* listr){
     cout<<"REPORTE CLIENTES PRIMERA CLASE"<<endl;
     cout<<"********************"<<endl;
     cout<<listr->reportePrimera()<<endl;
 }
 
 void Interfaz::reporteMasViaje(ListaReser* listr){
     cout<<"Cliente con MAS viajes: "<<endl;
     cout<<"*************************"<<endl;
     cout<<listr->reporteMasViaje()<<endl;
 }