//
//  Termino.h
//  Tarea 4, Polinomios
//
//  Created by Pato Saldivar on 21/02/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#ifndef Termino_h
#define Termino_h
class Termino{
private:
    char variable;
    Fraccion coeficiente;
    int exponente;
    
public:
    Termino();
    Termino(Fraccion, char, int);
    void muestra();
    
    void setVariable(char ivar) {variable=ivar;}
    void setExponente(int iexp) {exponente=iexp;}
    void setCoeficiente (Fraccion icoef) {coeficiente= icoef;}
    
    char getVariable() {return variable;}
    int getExponente() {return exponente;}
    Fraccion getCoeficiente() {return coeficiente;}
};

Termino:: Termino(){
    Fraccion icoef;
    
    variable='x';
    exponente=1;
    coeficiente=icoef;
}

Termino:: Termino(Fraccion icoef,char ivar, int iexp){
    coeficiente= icoef;
    variable=ivar;
    if (iexp>=0){
        exponente=iexp;
    }
    else{
        exponente=1;
    }
}

void Termino:: muestra(){
    if (exponente>1) {
        cout<<coeficiente.getNum()<<"/"<<coeficiente.getDen()<<variable<<"^"<<exponente;
    } else {
        cout<<coeficiente.getNum()<<"/"<<coeficiente.getDen()<<variable;
    }
    
}



#endif /* Termino_h */
