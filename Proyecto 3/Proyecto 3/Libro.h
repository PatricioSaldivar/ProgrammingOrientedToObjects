//
//  Libro.h
//  Proyecto 3
//
//  Created by Pato Saldivar on 17/04/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#ifndef Libro_h
#define Libro_h
#include "Material.h"
class Libro: public Material{
  
public:
    Libro();
    Libro(int iM, string s, int num, string a);
    void setNumPag(int i) {numPag=i;}
    void setAutor(string i) {autor=i;}
    int getNumPag() {return numPag;}
    string getAutor() {return autor;}
    
    int cantidadDeDiasDePrestamo();
    void muestra();
    
private:
    int numPag;
    string autor;
};
Libro:: Libro(): Material(){
    numPag=0;
    autor=" ";
}

Libro:: Libro(int iM, string s, int num, string a):Material(iM, s){
    numPag=num;
    autor=a;
}

int Libro:: cantidadDeDiasDePrestamo(){
    return 10;
}

void Libro:: muestra(){
    cout<<"Libro "<< idMaterial<<" "<< titulo <<" "<< numPag <<" "<< autor;
}


#endif /* Libro_h */
