//
//  CtaBanc.h
//  CuentaBanco
//
//  Created by Pato Saldivar on 26/01/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#ifndef CtaBanc_h
#define CtaBanc_h
class CtaBanc{
public:
    //constructores
    CtaBanc();
    CtaBanc(string, double);
    void deposita(double);
    bool retira(double);
    // metodos de acceso
    string getNombre() {return nombre;}
    double getSaldo() {return saldo;}
    //metodos de modificacion
    void setNombre(string nom) {nombre=nom;}
    void setSaldo(double sal) {saldo= sal;}
private:
    string nombre;
    double saldo;
};

CtaBanc:: CtaBanc(){
    nombre= " ";
    saldo= 0;
}
CtaBanc:: CtaBanc(string nom,double sal){
    nombre=nom;
    saldo=sal;
}

bool CtaBanc:: retira(double cantidad){
    if (saldo>=cantidad){
        saldo-=cantidad;
        return true;
    }
    else{
        return false;
    }
}

void CtaBanc:: deposita(double deposito){
    saldo+=deposito;
}
#endif /* CtaBanc_h */
