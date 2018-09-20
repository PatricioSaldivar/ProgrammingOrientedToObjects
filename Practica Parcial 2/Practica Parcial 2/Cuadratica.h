//
//  Cuadratica.h
//  Practica Parcial 2
//
//  Created by Pato Saldivar on 12/03/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#ifndef Cuadratica_h
#define Cuadratica_h

class Cuadratica {
friend Cuadratica operator - (Cuadratica C,Cuadratica C2);
friend Cuadratica operator += (Cuadratica &C,Cuadratica C2);
friend Cuadratica operator ++ (Cuadratica &C);
public:
    Cuadratica();
    Cuadratica(int, int, int);
    void muestra();
    Cuadratica operator + (Cuadratica C2);
    Cuadratica operator * (int i);
    bool operator == (Cuadratica C2);
private:
    int iCoefA, iCoefB, iCoefC;
    
};
Cuadratica::Cuadratica()
{
    iCoefA = 1;
    iCoefB = 1;
    iCoefC = 1;
}
Cuadratica::Cuadratica(int iA, int iB, int iC)
{
    iCoefA = iA;
    iCoefB = iB;
    iCoefC = iC;
}
void Cuadratica::muestra()
{
    if (iCoefA != 0)
    {
        cout << iCoefA;
        cout << "x^2 ";
    }
    if (iCoefB != 0)
    {
        if (iCoefB > 0)
            cout << " + ";
        cout << iCoefB;
        cout << "x ";
    }
    if (iCoefC != 0)
    {
        if (iCoefC > 0)
            cout << " + ";
        cout << iCoefC << endl;
    }
}

Cuadratica Cuadratica:: operator + (Cuadratica C2){
        Cuadratica resp;
        resp.iCoefA= iCoefA+ C2.iCoefA;
        resp.iCoefB= iCoefB+ C2.iCoefB;
        resp.iCoefC= iCoefC+ C2.iCoefC;
        return resp;
    }
Cuadratica operator - (Cuadratica C,Cuadratica C2){
    Cuadratica f(-C2.iCoefA,-C2.iCoefB,-C2.iCoefC);
    return C+f;
}
Cuadratica Cuadratica:: operator * (int i){
    Cuadratica C;
    C.iCoefA= iCoefA*i;
    C.iCoefB= iCoefB*i;
    C.iCoefC= iCoefC*i;
    return C;
}

Cuadratica operator += (Cuadratica &C,Cuadratica C2){
    C= C+C2;
    return C;
}
bool Cuadratica:: operator == (Cuadratica C2){
    return ((iCoefA==C2.iCoefA)&&(iCoefB==C2.iCoefB)&&(iCoefC==C2.iCoefC));
}
Cuadratica operator ++ (Cuadratica &C){
    C.iCoefC= C.iCoefC+1;
    return C;
}

#endif /* Cuadratica_h */
