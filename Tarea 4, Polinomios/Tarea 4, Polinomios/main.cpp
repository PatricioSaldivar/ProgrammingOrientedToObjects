//
//  main.cpp
//  Tarea 4, Polinomios
//
//  Created by Pato Saldivar on 21/02/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
#include "Fraccion.h"
#include "Termino.h"

int main() {
    Termino equacion[8];
    int contador, iexp, inum, iden, var;
    Fraccion icoef;
    char ivar;
    double valorFinal=0;
    
    cout<<"Cuantos terminos tiene la equacion? ";
    cin>>contador;
    cout<<"Que variable utilizaras? ";
    cin>>ivar;
    for (int i=0; i<contador; i++) {
        cout<<"Cual es el valor del numerador para el Termino "<<i<<" ";
        cin>>inum;
        cout<<"Cual es el valor del denominador para el Termino "<<i<<" ";
        cin>>iden;
        cout<<"Cual es el valor del exponente para el Termino "<<i<<" ";
        cin>>iexp;
        icoef.setDen(iden);
        icoef.setNum(inum);
        equacion[i].setExponente(iexp);
        equacion[i].setCoeficiente(icoef);
        equacion[i].setVariable(ivar);
    }
    
    for (int i=0; i<contador; i++) {
        equacion[i].muestra();
        if((i+1)<contador){
        if (equacion[i+1].getCoeficiente().getNum()>=0) {
            cout<<" +";
        }
            else {
               cout<<" ";
                
            }
        }
    }
    cout<<endl<<"Que valor tiene la variable? ";
    cin>>var;
    for (int i=0; i<contador; i++) {
        valorFinal+= equacion[i].getCoeficiente().calculaValorReal()*pow(var,equacion[i].getExponente());
    }
    cout<<endl<<"El valor con con el valor de la variable sutistuida es de "<<valorFinal<<endl;
        return 0;
}
