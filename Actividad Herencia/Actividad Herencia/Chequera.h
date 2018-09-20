//
//  Chequera.h
//  Actividad Herencia
//
//  Created by Pato Saldivar on 16/03/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#ifndef Chequera_h
#define Chequera_h
#include "CtaBanc.h"

class Chequera : public CtaBanc
{
public:
    Chequera();
    Chequera(int n, double s, double com);
    double getComision() {return comision;}
    void setComision(double com) {comision=com;}
    bool retira(double cant);
    void mostrar();
    
private:
    double comision;
    
};
Chequera:: Chequera():CtaBanc(){
    comision=0;
}
Chequera:: Chequera(int n, double s,double com): CtaBanc(n,s){
    comision=com;
}

void Chequera:: mostrar(){
    cout<<"Tu cuenta "<<numCuenta<< " tiene un saldo: "<<saldo<<" y una comision de: "<<comision<<endl<<endl;
}
bool Chequera:: retira(double cant){
    {    if (saldo >= (cant+comision)){
        saldo -= (cant+comision);
        return true;
    }
    else
        return false;
    }
}
#endif /* Chequera_h */
