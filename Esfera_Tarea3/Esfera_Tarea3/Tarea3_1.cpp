//
//  main.cpp
//  Esfera_Tarea3
//
//  Created by Pato Saldivar on 28/01/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
#include "esfera.h"
int main(){
    esfera sphere;
    double radio;
    cout<<"El radio es de "<<sphere.getRadio()<<endl;
    cout<<"El area es de "<<sphere.calcArea()<<endl;
    cout<<"El volumen es de "<<sphere.calcVolum()<<endl<<endl;
    
    cout<<"Cual es el valor del radio? ";
    cin>> radio;
    cout<<endl;
    
    sphere.setRadio(radio);
    cout<<"El radio es de "<<sphere.getRadio()<<endl;
    cout<<"El area es de "<<sphere.calcArea()<<endl;
    cout<<"El volumen es de "<<sphere.calcVolum()<<endl;
    
    return 0;
}
