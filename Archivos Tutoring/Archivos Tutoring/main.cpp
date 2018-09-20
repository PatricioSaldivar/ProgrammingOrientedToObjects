//
//  main.cpp
//  Archivos Tutoring
//
//  Created by Pato Saldivar on 16/01/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int    main(){
    string palabra;
    char opcion;
    cout<< "Quieres crear archivo (a) o Leer archivo (b)";
    cin>> opcion;
    if (opcion=='a'){
    ofstream archivoSalida;
    archivoSalida.open("datos.txt");
        for (int k=0; k<20; k++)
      archivoSalida << k << endl;
    archivoSalida.close();
    }
    else{
    ifstream archivoEntrada;
        archivoEntrada.open("datos.txt");
        int x;
        while(archivoEntrada >> x)
        cout<< x<<" ";
        cout<< endl;
        archivoEntrada.close();
    }
    return    0;
}
