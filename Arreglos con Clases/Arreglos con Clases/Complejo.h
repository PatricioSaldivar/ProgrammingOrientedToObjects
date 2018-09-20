//
//  Complejo.h
//  Arreglos con Clases
//
//  Created by Pato Saldivar on 30/01/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#ifndef Complejo_h
#define Complejo_h
class Complejo{
public:
    //constructores
    Complejo();
    Complejo(int r, int i);
    
    //metodos de acceso
    int getReal() {return real;}
    int getImag() {return imag;}
    //metodos de modificacion
    void setReal(int r) {real=r;}
    void setImag(int i) {imag=i;}
    // funciones
    void muestra ();
    Complejo suma(Complejo c2);
    Complejo resta(Complejo c2);
private:
    double real, imag;
};

Complejo:: Complejo(){
    real=0;
    imag=0;
}
Complejo:: Complejo(int r, int i){
    real=r;
    imag=i;
}
Complejo Complejo:: suma(Complejo c2) {
    Complejo resu;
    resu.real= real + c2.real;
    resu.imag= imag +c2.imag;
    return resu;
}
Complejo Complejo:: resta(Complejo c2){
    Complejo result;
    result.real= real - c2.real;
    result.imag= imag - c2.imag;
    return result;
}

void Complejo:: muestra(){
    cout<<"("<<real<<","<<imag<<"i)\n";
}

#endif /* Complejo_h */
