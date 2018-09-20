//
//  Gatos.h
//  Perros y Gatos (Polifor)
//
//  Created by Pato Saldivar on 23/03/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#ifndef Gatos_h
#define Gatos_h
#include "Animal.h"
class Gatos: public Animal
{
public:
    Gatos();
    Gatos(string, int);
    void    habla() {cout<< "MIAU\n";}
    void    muestra();
};
    Gatos:: Gatos(string nom, int edad): Animal(nom, edad){
    }
    
    void Gatos:: muestra(){
        cout<< "Soy el gato "<< sNombre <<" y tengo "<<this->calculaEdad()<< " años\n";
    }

#endif /* Gatos_h */
