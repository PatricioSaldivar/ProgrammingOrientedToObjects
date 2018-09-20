//
//  main.cpp
//  Arreglos con Clases
//
//  Created by Pato Saldivar on 30/01/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;
#include "Complejo.h"
int main(){
    char opcion;
    int primer, segundo;
    int parteR,parteI;
    Complejo resultado;
    int tam;
    string nombre;
    Complejo num[20];
    //   cout<< "Cuantos objetos quieres, maximo 20 \n";
    //   cin>>tam;
    //   for (int i=0; i<tam; i++){
    //     cout<< "Valor Real ";
    //   cin>>parteR;
    // cout<<"Valor Imaginario ";
    //   cin>>parteI;
    // num[i].setReal(parteR);
    // num[i].setImag(parteI);
    //}
    
    cout<< "Teclea el nombre del archivo ";
    ifstream archivo;
    cin>> nombre;
    archivo.open(nombre.c_str());
    tam=0;
    while (archivo>>parteR>>parteI) {
        num[tam].setReal(parteR);
        num[tam].setImag(parteI);
        tam++;
    }
    for (int i=0; i<tam; i++) {
        cout<< i<<": ";
        num[i].muestra();
    }
    cout<< "\nQue opcion quieres \na) Sumar dos conjuntos \nb) Restar dos conjuntos \nc) Sumar todos los conjuntos \nd) Terminar";
    cin>> opcion;
   
    do{
    switch (opcion) {
        case 'a':
            cout<<"Primer numero ";
            cin>>primer;
            cout<< "Segundo numero ";
            cin>>segundo;
            resultado=num[primer].suma(num[segundo]);
            resultado.muestra();
            break;
            
        case 'b':
            cout<<"Primer numero ";
            cin>>primer;
            cout<< "Segundo numero ";
            cin>>segundo;
            resultado=num[primer].resta(num[segundo]);
            resultado.muestra();
            break;
            
        case 'c':
            resultado.setReal(0);
            resultado.setImag(0);
            for (int i=0; i<tam; i++) {
                resultado=resultado.suma(num[i]);
            }
            resultado.muestra();
    }
    }while(opcion!='d');

    return 0;
}
