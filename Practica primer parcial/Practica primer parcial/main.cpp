//
//  main.cpp
//  Practica primer parcial
//
//  Created by Pato Saldivar on 05/02/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;
#include "clase.h"

int main(){
    clase salon;
    clase salon2(5,'C');
    int grade;
    char letter;
    
    cout<<"En que grado esta ?";
    cin>> grade;
    cout<<"Que letra tiene ?";
    cin>> letter;
    
    salon.setGrado(grade);
    salon.setLetra(letter);
    if (letter<48)
        cout<<"XD";
    ofstream archivo;
    archivo.open("LOL.txt");
    archivo<<salon.getGrado()<<" "<<salon.getLetra();
    archivo.close();
    salon.muestra();
    cout<<endl;
    salon2.muestra();
    return 0;
}
