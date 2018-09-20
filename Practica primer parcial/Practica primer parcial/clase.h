//
//  clase.h
//  Practica primer parcial
//
//  Created by Pato Saldivar on 05/02/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#ifndef clase_h
#define clase_h
class clase{
public:
    //constructores
    clase();
    clase(int g,char l);
    //metodos de modificacion
   void setGrado(int g) {grado=g;}
    void setLetra(char l) {letra=l;}
    //metodos de acceso
    int getGrado(){return grado;};
    char getLetra() {return letra;};
    //otros
    void muestra();
private:
    int grado;
    char letra;
};
clase:: clase(){
    grado=0;
    letra=' ';
}
clase:: clase(int g, char l){
    grado=g;
    letra=l;
}
void clase:: muestra(){
    cout<<grado<<letra;
}

#endif /* clase_h */
