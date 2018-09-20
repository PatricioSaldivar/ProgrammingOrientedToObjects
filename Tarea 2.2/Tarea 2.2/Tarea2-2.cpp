//
//  main.cpp
//  Tarea 2.2
//
//  Created by Pato Saldivar on 25/01/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    ofstream Modificado;
    Modificado.open("Datos.txt");
    ifstream datos;
    datos.open("textoOriginal.txt");
    string linea, subLinea;
    long largo,space,contador=0,espacio=0,cant,cant2,verificador;
    while (getline(datos,linea)) {
        largo=linea.length();
        subLinea.erase(0);
        espacio=0;
        contador=0;
       
        if (largo<25){
            space=25-largo;
            while(espacio>=0){
                contador++;
                espacio=linea.find(' ');
                subLinea+=linea.substr(0,espacio+1);
                linea.erase(0,espacio+1);
            }
            if (contador>=2){
            subLinea+=linea;
            linea=subLinea;
            subLinea.erase(0);
            cant=space/(contador-1);
            cant2=space%(contador-1);
            for(long i=contador;i>0;i--){
                espacio=linea.find(' ');
                if(espacio>=0){
                subLinea+=linea.substr(0,espacio+1);
                linea.erase(0,espacio+1);
                }
                else
                    subLinea+=linea;
                
                verificador=cant2;
                for(int k=0;k<cant;k++)
                    if (i!=1)
                    subLinea+=" ";
                        if(cant2!=0)
                            if(cant2==verificador){
                        subLinea+=" ";
                        cant2--;
                            
                    }
            }
            linea=subLinea;
            }
        }
        
        
        Modificado<<linea<<endl;
    
        }
    Modificado.close();
    datos.close();
    
    
    
}
