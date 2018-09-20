//
//  main.cpp
//  Tarea 1
//
//  Created by Pato Saldivar on 10/01/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
// se define el tablero
int matriz[4][4]=
{{0,2,3,4}
    ,{1,7,5,6}
    ,{8,9,15,14}
    ,{10,11,12,13}};
int mueve,cero, columna_mueve, renglon_mueve, columna_cero, renglon_cero, finalizar=0;
// Funcion para mostrar el tablero ya definido
void Mostrar_Tablero (int matriz[4][4]){
    for(int c=0;c<4;c++){
        for(int r=0;r<4;r++){
            if (matriz[c][r]==0)
                cout<< setfill(' ')<<setw(3)<< " ";
            else
            cout<< setfill(' ')<<setw(3)<< matriz[c][r];
            
                
            if (r==3)
                cout<<endl;
        }
    }
   
}
// Funcion para terminar el juego si es que se quiere y si no sacar las cordenadas de los numero indicados a mover
void Movimiento (int &mueve, int cero){
    int col, ren;
    cin>> mueve;
    if (mueve==0) {
        finalizar=1;
    }
    for(int c=0;c<4;c++){
        for(int r=0;r<4;r++){
            if (mueve== matriz[c][r]){
                columna_mueve=c;
                renglon_mueve=r;
            }
            if (0==matriz[c][r]){
                columna_cero=c;
                renglon_cero=r;
            }
        }
    }
    col=columna_cero;
    columna_cero=columna_mueve;
    columna_mueve=col;
    ren=renglon_cero;
    renglon_cero=renglon_mueve;
    renglon_mueve=ren;

    
}
//Funcion para verificar si son validas las cordenadas y si es valido el movimiento, si lo es realizarlo
void Validacion (){
    if (columna_cero==columna_mueve){
        if ((renglon_mueve==(renglon_cero+1)) || (renglon_mueve==(renglon_cero-1))){
            matriz[columna_cero][renglon_cero]=0;
            matriz[columna_mueve][renglon_mueve]=mueve;
        }

    }
    if (renglon_cero==renglon_mueve){
        if ((columna_mueve==(columna_cero+1)) || (columna_mueve==(columna_cero-1))){
            matriz[columna_cero][renglon_cero]=0;
            matriz[columna_mueve][renglon_mueve]=mueve;
        }
        
    }
}
// Realiza un loop para llamar las funciones
int main(){
    do{
        do{
           Mostrar_Tablero(matriz);
           Movimiento(mueve, cero);
        }while(mueve>15 || mueve<0);
        Validacion();
}while(finalizar==0);
    
    return 0;
}
