//
//  main.cpp
//  Vectores Clase
//
//  Created by Pato Saldivar on 20/04/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> vec;
    vector <int>:: iterator iter;
    int dato;
    char opcion;
    
    do{
        cout<< "a. Insertar al inicio\nb. Insertar al final\nc. Borrar del inicio\nd. Borrar del final\ne. Ordenar\nf. Buscar un dato\ng. Terminar\n ";
    cin>> opcion;
    
    switch (opcion) {
        case 'a':
            cout << "Que dato quieres agregar al principio?\n";
            cin>> dato;
            vec.insert(vec.begin(), dato);
            for (iter=vec.begin(); iter!=vec.end(); iter++) {
                cout<<*iter<<endl;
            }
            break;
        case 'b':
            cout << "Que dato quieres agregar al final?\n";
            cin>> dato;
            vec.insert(vec.end(), dato);
            for (iter=vec.begin(); iter!=vec.end(); iter++) {
                cout<<*iter<<endl;
            }
            break;
        case 'c':
            vec.erase(vec.begin());
            for (iter=vec.begin(); iter!=vec.end(); iter++) {
                cout<<*iter<<endl;
            }
            break;
        case 'd':
            vec.pop_back();
            for (iter=vec.begin(); iter!=vec.end(); iter++) {
                cout<<*iter<<endl;
            }
            break;
        case 'e':
            sort(vec.begin(), vec.end());
            break;
        
        case 'f':
            cout<< "Que dato quieres buscar?";
            cin>> dato;
            iter= find(vec.begin(), vec.end(), dato);
    
            cout<< ((iter!=vec.end())? "Se encontro el dato\n": "No se encontro el dato\n");
            for (iter=vec.begin(); iter!=vec.end(); iter++) {
                cout<<*iter<<endl;
            }
            break;
    }
        
    }while (opcion!='g');
        
    
    
    
    return 0;
}

