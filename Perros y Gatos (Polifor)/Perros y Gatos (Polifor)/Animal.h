//
//  Animal.h
//  Perros y Gatos (Polifor)
//
//  Created by Pato Saldivar on 23/03/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#ifndef Animal_h
#define Animal_h
class Animal
{
public:
    Animal(string,    int);
    int    calculaEdad();
    virtual    void    habla()    =    0;   //Nota    que    son    funciones    virtual    pura.
    virtual    void    muestra()    =    0; //    ENTONCES    la    clase    es    abstracta.
protected:
    string    sNombre;
    int    iAnioNacim;
};

Animal::Animal(string sNom,  int iANac)
{
    sNombre    =    sNom;
    iAnioNacim    =    iANac;
}
int    Animal::calculaEdad()
{
    return    2015 - iAnioNacim;
}

#endif /* Animal_h */
