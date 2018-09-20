//
//  main.cpp
//  Evento Composicion
//
//  Created by Pato Saldivar on 16/02/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

#include "Evento.h"
int main(){
    Evento eventos[2];
    Reloj hora;
    int duracion, ihora, imin;
    string asunto;
    
    for (int i=0; i<2; i++) {
        
        cout<<"Teclea la hora de inicio (hora *espacio* minutos)"<<endl;
        cin>>ihora>>imin;
        cout<<"Teclea la duracion del evento"<<endl;
        cin>>duracion;
        cout<<"Teclea el nombre del evento"<<endl;
        cin.ignore();
        getline(cin,asunto);
       
        hora.sethora(ihora);
        hora.setminu(imin);
        eventos[i].setAsunto(asunto);
        eventos[i].setInicio(hora);
        eventos[i].setDuracion(duracion);
    }
    for (int i=0; i<2; i++) {
        hora=eventos[i].getInicio();
        cout<<hora.getHora()<<":"<<hora.getMinu()<<"\t";
        cout<<eventos[i].getDuracion()<<"\t";
        cout<<eventos[i].getAsunto()<<endl;
    }
}


















