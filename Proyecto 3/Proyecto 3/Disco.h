//
//  Disco.h
//  Proyecto 3
//
//  Created by Pato Saldivar on 17/04/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#ifndef Disco_h
#define Disco_h
#include "Material.h"
class Disco: public Material{
    
public:
    Disco();
    Disco(int iM, string s, int dur);
    void setDuracion(int i) {duracion=i;}
    int getDuracion() {return duracion;}
    int cantidadDeDiasDePrestamo();
    void muestra();
    
private:
    int duracion;
};
Disco:: Disco(): Material(){
    duracion=0;
}

Disco:: Disco(int iM, string s, int dur):Material(iM, s){
    duracion=dur;
}

int Disco:: cantidadDeDiasDePrestamo(){
    return 3;
}

void Disco:: muestra(){
    cout<<"Dico "<< idMaterial<<" "<< titulo <<" "<< duracion;
}

#endif /* Disco_h */
