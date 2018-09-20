//
//  CtaBanc.h
//  Actividad Herencia
//
//  Created by Pato Saldivar on 16/03/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#ifndef CtaBanc_h
#define CtaBanc_h
class CtaBanc
{
public:
    CtaBanc();
    CtaBanc(int n, double s);
    int getNumCuenta() {return numCuenta;};
    void setNumCuenta(int n) {numCuenta = n;};
    void setSaldo(double s) { saldo = s; };
    double getSaldo(){return saldo;};
    void deposita(double cant);
    bool retira(double cant);  // se debe redefinir en la clase Cheques
    void mostrar();           // se debe redefinir en la clase Cheques
protected:
    int numCuenta;
    double saldo;
};

CtaBanc::CtaBanc()
{    numCuenta = 0;
    saldo = 0;
}

CtaBanc::CtaBanc(int n, double s)
{    numCuenta = n;
    saldo = s;
}

void CtaBanc::deposita(double cant)
{    saldo += cant;
}

// si hay suficiente saldo resta cant del saldo de la cuenta y manda true, si no hay suficiente saldo, solo manda false
bool CtaBanc::retira(double cant)
{    if (saldo >= cant)
{    saldo -= cant;
    return true;
}
else
    return false;
}

void CtaBanc::mostrar()
{
    cout<<"Tu cuenta "<<numCuenta<< " tiene un saldo: "<<saldo<<endl<<endl;
}


#endif /* CtaBanc_h */