//
//  main.cpp
//  Perros y Gatos (Polifor)
//
//  Created by Pato Saldivar on 23/03/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
using namespace std;
#include "Perros.h"
#include "Gatos.h"

int main(){
    Animal *animales[10];
    
    Gatos g1("Silvestre", 1947);
    Perros p1("Fido", 2000);
    Gatos g2("Tom", 1940);
    
    animales[0]= &g1;
    animales[1]= &p1;
    animales[2]= &g2;
    
    for (int i=0; i<3; i++) {
        animales[i]->habla();
        animales[i]->muestra();
    }
    
    return 0;
}
