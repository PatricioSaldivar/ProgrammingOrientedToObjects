//
//  main.cpp
//  Tarea 2.1
//
//  Created by Pato Saldivar on 23/01/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main() {
    ofstream Promedios;
    Promedios.open("promedios.txt");
    ifstream Datos;
    Datos.open("tiempos.txt");
    int matricula,num;
    double tiempo, total=0;
    while (Datos>>matricula>>num) {
    for (int i=num;i>0 ; i--) {
        Datos>>tiempo;
        total+=tiempo;
        }
        total/=num;
        Promedios<<matricula<<"\t"<<total<<"\n";
        matricula=0;
        tiempo=0;
        total=0;
    }
    Promedios.close();
    Datos.close();
    
    
    return 0;
}

