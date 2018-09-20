//
//  main.cpp
//  PersonaTaxi
//
//  Created by Yolanda MartÃ­nez on 5/4/15.
//  Copyright (c) 2015 Yolanda MartÃ­nez. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
#include "Persona.h"
#include "Taxi.h"

int main()
{
    // crea el arreglo de objetos de tipo Taxi
    
    int sizeTaxis=0;
    int ide;
    string cel;
    string nomb;
    Persona chof;
    char opcion;
    Taxi taxis[20];
    ifstream archTaxis;
    archTaxis.open("Taxis.txt");
    
    // lee los datos del archivo de taxis y los agrega al arreglo de objetos
    //while (   )
    while (archTaxis>>ide>>cel && getline(archTaxis,nomb)){
        chof.setNombre(nomb);
        chof.setNumCel(cel);
        taxis[sizeTaxis].setIdent(ide);
        taxis[sizeTaxis].setChofer(chof);
        sizeTaxis++;
        // verifico que el nombre no tenga espacios al inicio ni al final
        
        
    }
    archTaxis.close();
    
    do
    {
        cout << endl << "M E N U " << endl;
        cout << "a. ver lista de taxis" << endl;
        cout << "b. buscar taxi por chofer " << endl;
        cout << "c. agregar taxis a la lista " << endl;
        cout << "d. modificar el num de celular del chofer " << endl;
        cout << "e. Terminar" << endl;
        cout << "Opcion -> ";
        cin >> opcion;
        
        switch (opcion) {
            case 'a':
                cout<<endl;
                for(int k=0;k<sizeTaxis;k++){
                    cout<<setw(3)<<taxis[k].getIdent()<<setw(12)<<taxis[k].getChofer().getNumCel()<<setw(15)<<taxis[k].getChofer().getNombre()<<endl;
                }
                
                break;
                
            case 'b':
                cout << "\nTeclea el nombre de persona que vas a buscar ";
                cin.ignore();
                getline(cin, nomb);
                for(int k=0; k<sizeTaxis;k++){
                    chof=taxis[k].getChofer();
                    if(chof.getNombre().find(nomb)!=-1){
                        cout<<endl;
                        cout<<setw(3)<<taxis[k].getIdent()<<setw(12)<<chof.getNumCel()<<setw(15)<<chof.getNombre()<<endl;
                    }
                    else if (k== sizeTaxis-1){
                        cout<<"No se encontro a "<<nomb<<endl;
                        
                    }

                }
                break;
            case 'c':
                cout << "\nTeclea el numero de taxi ";
                cin >> ide;
                cout << "Teclea el nombre del chofer ";
                cin.ignore();
                getline(cin, nomb);
                cout << "Teclea el numero de celular del chofer ";
                cin >> cel;
                chof.setNombre(nomb);
                chof.setNumCel(cel);
                taxis[sizeTaxis].setChofer(chof);
                taxis[sizeTaxis].setIdent(ide);
                sizeTaxis++;
                
                
                break;
            case 'd':
                cout << "\nTeclea el nombre del chofer ";
                cin.ignore();
                getline(cin, nomb);
                for(int k=0; k<sizeTaxis;k++){
                    chof=taxis[k].getChofer();
                    if(chof.getNombre().find(nomb)!=-1){
                        cout<< "Tecelea el numero modificado ";
                        cin>>cel;
                        chof.setNumCel(cel);
                        taxis[k].setChofer(chof);
                        }
                    }
                break;
        }
    
                
        } while (opcion != 'e');  // e es terminar
    
    return 0;
}

