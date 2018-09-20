//
//  Fraccion.h
//  ClaseFraccion
//
//  Created by Pato Saldivar on 26/01/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.

#ifndef Fraccion_h
#define Fraccion_h
class Fraccion{
public:
    Fraccion();
    Fraccion(int inum, int iden);
    void setNum(int inum);
    void setDen(int iden);
    int getNum();
    int getDen();
    double calculaValorReal();
    void muestra();
private:
    int num, den;
};
Fraccion:: Fraccion(){
    num=1;
    den=2;
}

Fraccion:: Fraccion( int inum, int iden){
    num=inum;
    den=iden;
}
void Fraccion:: setNum(int inum){
    num=inum;
}
void Fraccion:: setDen( int iden){
    den= iden;
}
int Fraccion:: getNum(){
    return num;
}
int Fraccion:: getDen(){
    return den;
}
double Fraccion:: calculaValorReal(){
    return (double)num/den;
}
void Fraccion:: muestra(){
    cout<< num<<"/"<<den;
}
#endif /* Fraccion_h */
