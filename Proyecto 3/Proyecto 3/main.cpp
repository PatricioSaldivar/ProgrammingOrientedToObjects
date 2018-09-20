//
//  main.cpp
//  Proyecto 3
//
//  Created by Pato Saldivar on 17/04/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
#include "Fecha.h"
#include "Reserva.h"
#include "Material.h"
#include "Libro.h"
#include "Disco.h"
#include "Software.h"

int main() {
    int idMaterial, numPag, duracion, contador=0, idCliente, dd, mm, aa, sizeMaterial, sizeReservas, diasExtra=0;
    string titulo, autor, sistemaOperativo, nombreMaterial;
    char tipoMaterial, opcion;
    Fecha fechaReservacion;
    Material* materiales[20];
    Reserva reservaciones[50];
    
    //Cargo datos de materiales
    ifstream datoMaterial, datoReserva;
    ofstream archivoReservas;
    
    datoMaterial.open("Material.txt");
    while (datoMaterial>>idMaterial>>titulo>>tipoMaterial) {
        switch (tipoMaterial) {
            case 'L':
                datoMaterial>>numPag>>autor;
                materiales[contador++]= new Libro(idMaterial,titulo,numPag,autor);
                break;
            case 'D':
                datoMaterial>>duracion;
                materiales[contador++]= new Disco(idMaterial,titulo,duracion);
                break;
            case 'S':
                datoMaterial>>sistemaOperativo;
                materiales[contador++]= new Software(idMaterial,titulo,sistemaOperativo);
                break;
        }
    }
    sizeMaterial=contador;
    datoMaterial.close();
    
    
    contador=0;
    //Cargo datos de Reservaciones
    datoReserva.open("Reserva.txt");
    while (datoReserva>>dd>>mm>>aa>>idMaterial>>idCliente) {
        fechaReservacion.setFecha(dd, mm, aa);
        reservaciones[contador].setIdMaterial(idMaterial);
        reservaciones[contador].setIdCliente(idCliente);
        reservaciones[contador++].setFechaReservacion(fechaReservacion);
        
    }
    datoReserva.close();
    sizeReservas=contador;
    
    do{
        cout<<"a) Consultar la lista de Materiales\n";
        cout<<"b) Consultar la lista de reservaciones\n";
        cout<<"c) Consultar las reservaciones de un material dado\n";
        cout<<"d) Consular las reservaciones de una fecha dada\n";
        cout<<"e) Hacer una reservacion\n";
        cout<<"f) Terminar\n";
        
        cin>>opcion;
        
        switch (opcion) {
            case 'a':
                for (int i=0; i<sizeMaterial; i++) {
                    materiales[i]->muestra();
                    cout<<endl;
                }
                break;
                
            case 'b':
                for (int i=0; i<sizeReservas; i++) {
                    for(int k=0; k<sizeMaterial; k++){
                        if (materiales[k]->getIdMaterial()==reservaciones[i].getIdMaterial()){
                            
                            nombreMaterial=materiales[k]->getTitulo();
                            diasExtra=materiales[k]->cantidadDeDiasDePrestamo();
                        }
                    }
                    cout<< "La reservacion comienza "<<setw(2)<<setfill('0')<<reservaciones[i].getFechaReservacion().getDia()<<" "<<setw(2)<<setfill('0') <<reservaciones[i].getFechaReservacion().nombreMes()<<" " <<setw(4)<<setfill('0')<<reservaciones[i].getFechaReservacion().getAnio()<<" y termina el " <<setw(2)<<setfill('0')<<reservaciones[i].calculaFechaFinReserva(diasExtra).getDia()<<" " <<setw(2)<<setfill('0')<<reservaciones[i].calculaFechaFinReserva(diasExtra).nombreMes()<<" " <<setw(4)<<setfill('0')<<reservaciones[i].calculaFechaFinReserva(diasExtra).getAnio()<<" "<<nombreMaterial<<" " <<reservaciones[i].getidCliente()<<endl;
                    
                }
                break;
                
            case 'c':
                //El contador se utiliza para verificar el idMaterial, marca 0 sino se encontro y marca un 1 cuando si
                contador=0;
                do{
                    cout<< "Ingresa el id del material\n";
                    cin>> idMaterial;
                    for (int i=0; i<sizeMaterial; i++) {
                        if(materiales[i]->getIdMaterial()==idMaterial){
                            contador=1;
                            nombreMaterial=materiales[i]->getTitulo();
                            diasExtra=materiales[i]->cantidadDeDiasDePrestamo();
                            
                            for (int k=0; k<sizeReservas; k++) {
                                if (reservaciones[k].getIdMaterial()==idMaterial) {
                                    cout<< "La reservacion de "<<nombreMaterial <<" comienza "<<setw(2)<<setfill('0')<<reservaciones[k].getFechaReservacion().getDia()<<" " <<reservaciones[k].getFechaReservacion().nombreMes()<<" " <<setw(2)<<setfill('0')<<reservaciones[k].getFechaReservacion().getAnio()<<" y termina el " <<setw(2)<<setfill('0')<<reservaciones[k].calculaFechaFinReserva(diasExtra).getDia()<<" " <<setw(2)<<setfill('0')<<reservaciones[k].calculaFechaFinReserva(diasExtra).nombreMes()<<" " <<setw(4)<<setfill('0')<<reservaciones[k].calculaFechaFinReserva(diasExtra).getAnio()<<endl;
                                }
                            }
                        }
                    }
                    
                }while (contador==0);
                break;
                
            case 'd':
                //Contador se utiliza para validar
                contador=0;
                cout<< "Ingresa la fecha dd/mm/aa\n";
                cin>> dd>>mm>>aa;
                fechaReservacion.setFecha(dd, mm, aa);
                for (int i=0; i<sizeReservas; i++) {
                    for (int k=0; k<sizeMaterial; k++) {
                        if(materiales[k]->getIdMaterial()==reservaciones[i].getIdMaterial()){
                            nombreMaterial= materiales[k]->getTitulo();
                            diasExtra=materiales[k]->cantidadDeDiasDePrestamo();
                        }
                    }
                    if (fechaReservacion>=reservaciones[i].getFechaReservacion() && fechaReservacion<=reservaciones[i].calculaFechaFinReserva(diasExtra)) {
                        cout<< "En esa fecha el material "<< nombreMaterial<<" esta ocupado por el cliente "<<reservaciones[i].getidCliente()<<endl;
                        contador=1;
                    }
                    
                }
                if (contador==0) {
                    cout<<"No se encontro reserva para la fecha ingresada";
                }
                break;
                
            case 'e':
                // Utilizo contador para verificar
                contador=0;
                cout<<"Ingresa el usario del cliente\n";
                cin>> idCliente;
                do{
                    cout<<"Ingresa el id del material\n";
                    cin>> idMaterial;
                    for (int i=0; i<sizeMaterial; i++) {
                        if (idMaterial==materiales[i]->getIdMaterial()) {
                            contador=i;
                        }
                    }
                    if (contador==0) {
                        cout<< "El id del Material es invalido";
                    }
                }while(contador==0);
                cout<< "Ingresa la fecha dd/mm/aa\n";
                cin>> dd>>mm>>aa;
                fechaReservacion.setFecha(dd, mm, aa);
                diasExtra=materiales[contador]->cantidadDeDiasDePrestamo();
                nombreMaterial= materiales[contador]->getTitulo();
                for (int i=0; i<sizeReservas; i++) {
                    if (reservaciones[i].getIdMaterial()==idMaterial) {
                        if ((fechaReservacion>=reservaciones[i].getFechaReservacion() && fechaReservacion<=reservaciones[i].calculaFechaFinReserva(diasExtra))||((fechaReservacion+diasExtra)>=reservaciones[i].getFechaReservacion()&& (fechaReservacion+diasExtra)<=reservaciones[i].calculaFechaFinReserva(diasExtra))) {
                            //Utilizo contador como verificador para saber si se encontro algun empalme en la fecha
                            contador=0;
                            cout<< "La fecha se empalma";
                            
                        }
                    }
                }
                if (contador!=0) {
                    reservaciones[sizeReservas].setIdMaterial(idMaterial);
                    reservaciones[sizeReservas].setIdCliente(idCliente);
                    reservaciones[sizeReservas++].setFechaReservacion(fechaReservacion);
                    cout<<"Reservacion exitosa";
                    
                }
                break;
        }
        
        cout<<endl;
    }while(opcion!= 'f');
    
    archivoReservas.open("Reserva.txt");
    for (int i=0; i<sizeReservas; i++) {
        archivoReservas<<setw(2)<<setfill('0')<<reservaciones[i].getFechaReservacion().getDia()<<" "<<setw(2)<<setfill('0')<<reservaciones[i].getFechaReservacion().getMes()<<" "<<setw(4)<<setfill('0')<<reservaciones[i].getFechaReservacion().getAnio()<<" "<<reservaciones[i].getIdMaterial()<<" "<<reservaciones[i].getidCliente()<<endl;
        
    }
    archivoReservas.close();
    return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

