/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Estudiante
 *
 * Created on 15 de noviembre de 2020, 08:59 AM
 */

#include <cstdlib>
#include "AgenciaDeViajes.h"
#include "Interfaz.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int opc;
    Interfaz in;
    ContenedoraAvion ca;
    
    Avion* avion1=new Avion("Gobi1", 290);
    Avion* avion2=new Avion("Gobi2", 290);
    Avion* avion3=new Avion("Gobi3", 290);
    Avion* avion4=new Avion("Gobi4", 290);
    Avion* avion5=new Avion("Gobi5", 290);
    Avion* avion6=new Avion("Gobi6", 290);
    Avion* avion7=new Avion("Gobi7", 290);
    
    Hora* hora1=new Hora();
    Hora* horareserva=new Hora();
    Fecha* fecha1=new Fecha();
    Fecha* fechareserva=new Fecha();   
    Ruta* ruta1=new Ruta();
    Ruta* ruta2=new Ruta();
    Ruta* rutareserva=new Ruta();
    ListaTripulante *listatest=new ListaTripulante();
    Tripulante* tripu1=new Tripulante();
    Tripulante* tripu2=new Tripulante();
    Tripulante* tripu3=new Tripulante();
    Reservacion* reserva1=new Reservacion();
    Cliente* clien1= new Cliente();
    Cliente* clienreserva= new Cliente();
    ContenedoraAvion* contavion1=new ContenedoraAvion();
    ListaTripulante* listatripulante1=new ListaTripulante();
    Guia* guia1= new Guia();
    Guia* guiareserva= new Guia();
    Vuelo* vueloReserva= new Vuelo();
    
    //DATOS DE PRUEBA*****************************************************************************
    Fecha* fechatest=new Fecha(2020,12,25);
    Hora* horatest=new Hora(2,3,4);
    Cliente *clientest= new Cliente("5412365", "Karla", "alvarez", "4587");
    Ruta* rutatest=new Ruta("San Jose","costa rica", "Lisboa", "Portugal", 4000, 21);  
    Vuelo* vuelotest=new Vuelo("4512", horatest, fechatest,rutatest, avion3,listatest);
    Guia* guiatest =new Guia("7894", "Jairo", "Gorgona", "895647", "historia");
    Tripulante* triputest1=new Tripulante("7845", "Iveth", "Salas", "2020", "piloto");
    Tripulante* triputest2=new Tripulante("98568", "Maria", "Obando", "2021", "copiloto");
    Tripulante* triputest3=new Tripulante("36521", "Juan", "Gonzalez", "2022", "azafata");   
    listatest->insertarTripulante(triputest1);
    listatest->insertarTripulante(triputest2);
    listatest->insertarTripulante(triputest3);
    Reservacion* reservaTest=new Reservacion("7845", 4, 1, fechatest, horatest, vuelotest, guiatest, clientest);
    
    Fecha* fechatest2=new Fecha(2020,12,25);
    Hora* horatest2=new Hora(2,3,4);
    Cliente *clientest2= new Cliente("1784573", "Abigail", "Herrera", "998");
    Ruta* rutatest2=new Ruta("heredia","costa rica", "Lisboa", "Portugal", 4000, 22);  
    Vuelo* vuelotest2=new Vuelo("98745", horatest, fechatest,rutatest, avion3,listatest);
    Guia* guiatest2=new Guia("65984", "Carmen", "SOto", "5687456", "Arqueologo");
    Tripulante* triputest12=new Tripulante("12345", "jorge", "mata", "2020", "piloto");
    Tripulante* triputest22=new Tripulante("12346", "Veronica", "Vargas", "2021", "copiloto");
    Tripulante* triputest32=new Tripulante("12347", "Thiago", "Montero", "2022", "azafata");   
    listatest->insertarTripulante(triputest12);
    listatest->insertarTripulante(triputest22);
    listatest->insertarTripulante(triputest32);
    Reservacion* reservaTest2=new Reservacion("475", 4, 2, fechatest2, horatest2, vuelotest2, guiatest2, clientest2);
    
    Fecha* fechatest3=new Fecha(2020,12,25);
    Hora* horatest3=new Hora(2,3,4);
    Cliente *clientest3= new Cliente("564879", "Karla", "Solis", "9457");
    Ruta* rutatest3=new Ruta("San Jose","costa rica", "Madrid", "España", 2000, 25);  
    Vuelo* vuelotest3=new Vuelo("12346", horatest, fechatest,rutatest, avion3,listatest);
    Guia* guiatest3=new Guia("12344", "alfa", "mendez", "707070", "ambiente");
    Tripulante* triputest123=new Tripulante("45698", "Charlie", "Castro", "2020", "piloto");
    Tripulante* triputest223=new Tripulante("98745", "Max", "Ground", "2021", "copiloto");
    Tripulante* triputest323=new Tripulante("14526", "Maruja", "Herrera", "2022", "azafata");   
    listatest->insertarTripulante(triputest123);
    listatest->insertarTripulante(triputest223);
    listatest->insertarTripulante(triputest323);
    Reservacion* reservaTest3=new Reservacion("471", 5, 2, fechatest3, horatest3, vuelotest3, guiatest3, clientest3);
    
    ListaReser* listr=new ListaReser();
    listr->insertarReser(reservaTest);
    listr->insertarReser(reservaTest2);
    listr->insertarReser(reservaTest3);
    
    
    do{
    opc = Interfaz::MenuOpc();
    switch(opc){
        case 1:
        {
            in.ingresaFecha(fecha1);
            in.ingresaHora(hora1);
            in.ingresaRutas(ruta1);
            
            in.vuelo(vueloReserva,hora1, fecha1, ruta1, avion4,listatripulante1); 
        }
        break;
        case 2:
        {
            ca.insertaElemento(avion1);
            ca.insertaElemento(avion2);
            ca.insertaElemento(avion3);
            ca.insertaElemento(avion4);
            ca.insertaElemento(avion5);
            ca.insertaElemento(avion6);
            ca.insertaElemento(avion7);
        }
        break;
        case 3:
        {
            in.ingresaCliente(clien1);
        }
        break;
        case 4:
        {
            in.ingresaGuias(guia1);
        }
        break;
        
        case 5:
        {
            in.ingresaTripu(tripu2);
            in.ingresaTripu(tripu1);
            in.ingresaTripu(tripu3);
            listatripulante1->insertarTripulante(tripu1);
            listatripulante1->insertarTripulante(tripu2);
            listatripulante1->insertarTripulante(tripu3);
                    
        }
        break;
        case 6: 
        {
            in.ingresaRutas(ruta2);
        }
        break;
        case 7:
        {
            
            in.ingresaFecha(fechareserva);
            in.ingresaHora(horareserva);
            in.ingresaCliente(clienreserva);
            in.ingresaGuias(guiareserva);
            in.ingresaRutas(rutareserva);
            in.vuelo(vueloReserva,horareserva, fechareserva, rutareserva, avion4,listatripulante1);            
            in.reserva(reserva1,fechareserva,horareserva,vueloReserva, guiareserva, clienreserva);
            listr->insertarReser(reserva1);
        }
        break;
        case 8:
        {
            in.reservacionesCodigo(listr);
        }
        break;
        case 9:
        {
            in.reservacionesCliente(listr);
        }
        break;
        case 10:
        {
            in.reporteMonto(listr);
        }
        break;
        case 11:
        {
            in.reporteTripulacion(listr);
        }
        break;
        case 12:
        {
            in.destinoMas(listr);
        }
        break;
        case 13:
        {
            in.reportePrimeraClase(listr);
        }
        break;
        case 14:
        {
            in.reporteMasViaje(listr);
        }
        break;    
            
            
        
    }
    } while (opc != 15);
    
    return 0;
}



  

