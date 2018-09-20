//
//  Software.h
//  Proyecto 3
//
//  Created by Pato Saldivar on 17/04/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#ifndef Software_h
#define Software_h
#include "Material.h"
class Software: public Material{
    
public:
    Software();
    Software(int iM, string s,string sis);
 
    void setSistemaOperativo(string i) {sistemaOper=i;}
    
    string getSistemaOperativo() {return sistemaOper;}
    
    int cantidadDeDiasDePrestamo();
    void muestra();
    
private:
    string sistemaOper;
};
Software:: Software(): Material(){
    sistemaOper=" ";
}

Software:: Software(int iM, string s, string sis):Material(iM, s){
    sistemaOper=sis;
}

int Software:: cantidadDeDiasDePrestamo(){
    return 1;
}

void Software:: muestra(){
    cout<<"Software "<< idMaterial<<" "<< titulo <<" "<< sistemaOper;
}

#endif /* Software_h */
