//
//  main.cpp
//  ClaseFraccion
//
//  Created by Pato Saldivar on 26/01/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
using namespace std;
#include "Fraccion.h"

int main() {
    Fraccion f2(3,4);
    Fraccion f1;
    
    //Desplega la info
    cout<<"El valor de la fraccion ";
    f1.muestra();
    cout<<" es "<<f1.calculaValorReal()<<endl;
    
    cout<<"El valor de la fraccion ";
    f2.muestra();
    cout<<" es "<<f2.calculaValorReal()<<endl;
    return 0;
}
