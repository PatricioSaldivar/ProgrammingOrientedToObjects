//
//  main.cpp
//  Archivos Clase
//
//  Created by Pato Saldivar on 16/01/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main(){
    int clave, cantidad;
    double precio;
    char otro, opcion;
    
    cout<< "(a) Leer datos (b)Crear factura \n";
    cin>> opcion;
    
    if (opcion=='b') {
    ofstream factura;
    factura.open("factura.txt");
    
    do{
        cout <<"Teclea clave \n";
        cin >> clave;
        cout <<"Teclea la cantidad \n";
        cin >> cantidad;
        cout << "Teclea el precio \n";
        cin >> precio;
        factura<< clave <<"\t"<< cantidad<< "\t" <<precio<<endl;
        
        cout << "Otro articulo? ";
        cin >> otro;
    }while (otro== 's');
    factura.close();
    }
    
    
    else if (opcion=='a'){
        int clave_leer, cantidad_leer, precio_leer;
        int costo, total=0;
        ifstream datos;
        datos.open("factura.txt");
        cout<< "Clave   Cantidad   Precio Unitario   Precio \n";
        while (datos>> clave_leer >> cantidad_leer >>precio_leer) {
            costo= precio_leer*cantidad_leer;
            total+=costo;
            cout<<clave_leer<< setfill(' ')<< setw(11)<< cantidad_leer<< setfill(' ')<< setw(15)<< precio_leer<<setfill(' ')<< setw(12)<< costo<<endl;
        }
        cout<< endl<<setfill(' ')<< setw(29)<<"Total"<<setfill(' ')<< setw(11)<<total<<endl<<endl;
    }
    
    return 0;
}

