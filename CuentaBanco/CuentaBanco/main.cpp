//
//  main.cpp
//  CuentaBanco
//
//  Created by Pato Saldivar on 26/01/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
using namespace std;
#include "CtaBanc.h"
int main() {
    CtaBanc cuenta;
    string nombreCliente;
    double saldoIni, cant;
    char opcion;
    
    cout<<"Nombre del cliente? ";
    cin>> nombreCliente;
    cout<<"Cual es el saldo inicial? ";
    cin>> saldoIni;
    
    cuenta.setSaldo(saldoIni);
    cuenta.setNombre(nombreCliente);
    
    do{
        cout<<endl;
        cout<< "M E N U "<<endl;
        cout<<"a) Depositar \n";
        cout<<"b) Retirar \n";
        cout<<"c) Consultar Saldo \n";
        cout<<"d) Terminar \n";
        cout<< "Opcion? ";
        cin>>opcion;
        
        //atender opcion
        switch (opcion) {
            case 'a':
                cout<< "Cantidad a depositar? ";
                cin>>cant;
                cuenta.deposita(cant);
                break;
            case 'b':
                cout<< "Cantidad a retirar? ";
                cin>> cant;
                if (cuenta.retira(cant))
                    cout<<"Retiro exitoso";
                else
                    cout<<"Retiro incompleto, saldo insuficiente";
                break;
                
            case 'c':
               cout<< cuenta.getSaldo();
                break;
                
        }
    }while(opcion!='d');
    
    return 0;
}
