//
//  main.cpp
//  Actividad Poliformismo
//
//  Created by Pato Saldivar on 20/03/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
using namespace std;

#include "Chequera.h"

int Encontrar(CtaBanc *listaCtas[20],int numCta){
    int x=0;
    while (listaCtas[x]->getNumCuenta()!=numCta) {
        x++;
    }
    return x;
}

int main()
{
    CtaBanc *listaCtas[20];
    int sizeCtas;
    char tipoCta;
    int numCta;
    double saldoI, com, dinero;
    char opcion;
    
    cout << "Cuantas cuentas bancarias hay? ";
    cin >> sizeCtas;
    
    for (int c = 0; c < sizeCtas; c++)
    {
        cout << "quieres una cuenta bancaria o de cheques? (b ó c) ";
        cin >> tipoCta;
        
        cout << "Numero de cuenta? ";
        cin >> numCta;
        
        cout << "Saldo inicial? ";
        cin >> saldoI;
        
        if (tipoCta == 'c')
        {
            cout << "Comision por hacer retiro? ";
            cin >> com;
            listaCtas[c]= new Chequera(numCta, saldoI, com);
        }
        else
            listaCtas[c]= new CtaBanc(numCta, saldoI);
        
        
    }
    
    
    do
    {
        cout << "Menu de opciones " << endl;
        cout << endl;
        cout << "a) depositar " << endl;
        cout << "b) retirar " << endl;
        cout << "c) consultar saldo " << endl;
        cout << "d) terminar " << endl;
        cout << "opcion ->";
        cin >> opcion;
        
        switch (opcion) {
            case 'a':
            {
                cout << "teclea el numero de cuenta ";
                cin >> numCta;
                cout << "cuando vas a depositar? ";
                cin >> dinero;
                numCta= Encontrar(listaCtas, numCta);
                listaCtas[numCta]->deposita(dinero);
                break;
            }
                
            case 'b':
            {
                cout << "teclea el numero de cuenta ";
                cin >> numCta;
                cout << "cuando vas a retirar? ";
                cin >> dinero;
                numCta= Encontrar(listaCtas, numCta);
                if (!listaCtas[numCta]->retira(dinero)){
                    cout<<"\nRetiro Invalido\n";
                }
                break;
            }
                
            case 'c':
            {
                cout << "teclea el numero de cuenta ";
                cin >> numCta;
                numCta= Encontrar(listaCtas, numCta);
                listaCtas[numCta]->mostrar();
                break;
            }
        }
        
    } while (opcion != 'd');
    
    return 0;
}

