//
//  main.cpp
//  Sala Cine Tarea 3
//
//  Created by Pato Saldivar on 28/01/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
#include "SalaCine.h"
int main(){
    int asientos, boletos, seguir=1;
    string peli;
    
    cout<<"Que pelicula es la de la sala? ";
    getline(cin,peli);
    cout<<"Cuantos asientos hay en la sala? ";
    cin>>asientos;
   
   
    SalaCine sala(asientos, peli);
    while(seguir==1){
    cout<<"Cuantos boeltos quiere comprar? ";
    cin>>boletos;
        cout<<endl;
    
    if (sala.getLugares()>=boletos){
        sala.compraBoleto(boletos);
    }
    else{
        cout<<"No hay suficientes boletos \n";
    }
    cout<< "Quedan "<< sala.getLugares()<<" lugares disponibles para la película "<< sala.getPelicula()<<endl;
        cout<<"\n Quieres seguir comprando boletos? \n 1) Seguir \n 2) Acabar \n";
        cin>>seguir;
        
    }
    
    return 0;
}
