//
//  main.cpp
//  Ejercicio 6 Archivos
//
//  Created by Pato Saldivar on 19/01/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int dia, clientes, cantidad;
    int dia_mayor, dia_menor, cantidad_mayor, clientes_menor;
ifstream ventas;
ventas.open("ventas.txt");
    ventas>>dia_mayor>>clientes_menor>>cantidad_mayor;
    dia_menor=dia_mayor;
    while(ventas>>dia>>clientes>>cantidad){
        if(cantidad_mayor<cantidad){
            cantidad_mayor=cantidad;
            dia_mayor=dia;
        }
        if(clientes_menor>clientes){
            clientes_menor=clientes;
            dia_menor=dia;
        }
    }
    ventas.close();
    cout<< "El dia "<<dia_mayor<<" se obtuvieron las ventas mas altas y la cantidad vendida fue de "<< cantidad_mayor<<" y el dia en el cual se atendieron menos clientes fue el dia "<<dia_menor<<" que se atendieron a "<<clientes_menor<<" clientes."<<endl;
    return 0;
}
