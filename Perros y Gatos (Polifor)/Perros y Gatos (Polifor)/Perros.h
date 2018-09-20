//
//  Perros.h
//  Perros y Gatos (Polifor)
//
//  Created by Pato Saldivar on 23/03/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#ifndef Perros_h
#define Perros_h
#include "Animal.h"
class Perros: public Animal
{
public:
    Perros(string, int);
    void    habla() {cout<< "GUAU\n";}
    void    muestra();
};

Perros:: Perros(string nom, int edad): Animal(nom, edad){
}

void Perros:: muestra(){
    cout<< "Soy el perro "<< sNombre <<" y tengo "<<this->calculaEdad()<< "años\n";
}

#endif /* Perros_h */
