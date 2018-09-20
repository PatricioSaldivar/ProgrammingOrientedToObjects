//
//  main.cpp
//  Tarea 1.2
//
//  Created by Pato Saldivar on 15/01/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;


int main() {
    int resultados[13]={0,0,0,0,0,0,0,0,0,0,0,0,0};
    int mayor, menor, num_menor=2, num_mayor=2;
    int dado1, dado2, suma;
    srand(time(0));
    //Realiza el lanzamiento de los dados 200 veces y cuenta en cada numero la frecuencia con la que cae
    for (int i=0; i<200; i++){
        dado1= rand()%6 +1;
        dado2= rand()%6 +1;
        suma= dado1+dado2;
        switch (suma) {
            case 2:
                resultados[2]++;
                break;
            case 3:
                resultados[3]++;
                break;
            case 4:
                resultados[4]++;
                break;
            case 5:
                resultados[5]++;
                break;
            case 6:
                resultados[6]++;
                break;
            case 7:
                resultados[7]++;
                break;
            case 8:
                resultados[8]++;
                break;
            case 9:
                resultados[9]++;
                break;
                
            case 10:
                resultados[10]++;
                break;
            case 11:
                resultados[11]++;
                break;
            case 12:
                resultados[12]++;
                break;
        }
    }
    //Imprime los resultados en tabla de barras
    cout<<"02 |";
    for (int i=0; i<resultados[2]; i++)
        cout<<'*';
    cout<<endl<<"03 |";
    for (int i=0; i<resultados[3]; i++)
        cout<<'*';
    cout<<endl<<"04 |";
    for (int i=0; i<resultados[4]; i++)
        cout<<'*';
    cout<<endl<<"05 |";
    for (int i=0; i<resultados[5]; i++)
        cout<<'*';
    cout<<endl<<"06 |";
    for (int i=0; i<resultados[6]; i++)
        cout<<'*';
    cout<<endl<<"07 |";
    for (int i=0; i<resultados[7]; i++)
        cout<<'*';
    cout<<endl<<"08 |";
    for (int i=0; i<resultados[8]; i++)
        cout<<'*';
    cout<<endl<<"09 |";
    for (int i=0; i<resultados[9]; i++)
        cout<<'*';
    cout<<endl<<"10 |";
    for (int i=0; i<resultados[10]; i++)
        cout<<'*';
    cout<<endl<<"11 |";
    for (int i=0; i<resultados[11]; i++)
        cout<<'*';
    cout<<endl<<"12 |";
    for (int i=0; i<resultados[12]; i++)
        cout<<'*';
    cout<<endl;
    
    
    //Clasifica el numero qeu mas frecuento y el que menos salio
    menor=resultados[2];
    mayor=resultados[2];
    for (int i=3; i<=12;i++ ) {
        if (resultados[i]>mayor){
            mayor=resultados[i];
            num_mayor=i;
        }
        
        if (resultados[i]<menor){
            menor=resultados[i];
            num_menor=i;
        }
    }
    cout<< "La suma que salio mas veces es "<<num_mayor<<" con un total de "<<mayor<<" veces\n";
    cout<< "La suma que salio menos veces es "<<num_menor<<" con un total de "<<menor<<" veces\n";
    
    return 0;
}
