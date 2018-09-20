//
//  main.cpp
//  Arreglos con objetos, E17
//
//  Created by Pato Saldivar on 09/02/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//
#include <iomanip>
#include <iostream>
#include <fstream>
using namespace std;
#include "Articulo.h"
#include "Proveedor.h"



int main(){
    Articulo articulos[20];
    Proveedor proveedores[20];
    int iclave, inumProveedor;
    double iprecio;
    string  idescripcion;
    int inumero;
    string inombre;
    int x, cantArt,cantProv;
    
    ifstream archivoA,archivoP;
    string archivoArt,archivoProv;
    cout<<"Nombre del archivo? ";
    cin>> archivoArt;
    archivoArt+=".txt";
    cout<<"Nombre del archivo de los proveedores? ";
    cin>> archivoProv;
    archivoProv+=".txt";
    archivoA.open(archivoArt.c_str());
    archivoP.open(archivoProv.c_str());
    x=0;
    while (archivoP>>inumero) {
        getline(archivoP,inombre);
        proveedores[x].setNombre(inombre);
        proveedores[x].setNumero(inumero);
        x++;
    }
    cantProv=x;
    
    x=0;
    while (archivoA>>iclave) {
        archivoA>>iprecio>>inumProveedor;
        getline(archivoA,idescripcion);
        
        articulos[x].setClave(iclave);
        articulos[x].setPrecio(iprecio);
        articulos[x].setDescripciom(idescripcion);
        articulos[x].setNumProveedor(inumProveedor);
        x++;
    }
    cantArt=x;
    cout<<endl;
    for (int i=0; i<cantArt; i++) {
        articulos[i].muestra();
    }
    cout<<endl<<endl;
    for (int i=0; i<cantProv; i++) {
        proveedores[i].muestra();
    }


    
    
    
    
    
    
    
    
    return 0;
}
