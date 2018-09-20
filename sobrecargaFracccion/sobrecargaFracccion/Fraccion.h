//
//  Fraccion.h
//  sobrecargaFracccion
//
//  Created by Pato Saldivar on 23/02/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#ifndef Fraccion_h
#define Fraccion_h
class Fraccion{
    
    friend Fraccion operator + (Fraccion f1, Fraccion f2);  // fraccion mas fraccion
    friend bool operator >(Fraccion f1, Fraccion f2);       // mayor que
    friend Fraccion operator + (int e,Fraccion f);          // int mas fraccion
    friend Fraccion operator ++(Fraccion &f);               // mas 1
    friend void operator +=(Fraccion &f1, Fraccion f2);
    friend istream& operator >> (istream &is, Fraccion &f); // cin
    friend ostream& operator << (ostream &os, Fraccion &f); // cout
public:
    Fraccion();
    Fraccion(int inum, int iden);
    void setNum(int inum);
    void setDen(int iden);
    int getNum();
    int getDen();
    double calculaValorReal();
    void muestra();
    Fraccion operator *(Fraccion f);        //multiplicacion
    Fraccion operator - ();                 // Negativo
    Fraccion operator - (Fraccion f);       //Menos
    bool operator < (Fraccion f);           //Menor que
    Fraccion operator + (int e);            //Fraccion mas entero
    Fraccion operator --();                 //MEnor Menor
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
    cout<< num<<"/"<<den<<endl;
}
Fraccion operator + (Fraccion f1, Fraccion f2){
    Fraccion res;
    res.num= f1.num * f1.den + f2.num *f1.den;
    res.den= f1.den*f2.den;
    return res;
}

Fraccion Fraccion:: operator * (Fraccion f){
    Fraccion res;
    res.num= num*f.num;
    res.den= den*f.den;
    return res;
}

bool operator >(Fraccion f1, Fraccion f2){
    return f1.calculaValorReal()>f2.calculaValorReal();
   
}

Fraccion Fraccion:: operator - (){
    Fraccion res(-num,den);
    return res;
}
Fraccion Fraccion:: operator - (Fraccion f){
    f=-f;
    return *this + f;
}
Fraccion Fraccion:: operator + (int e){
    Fraccion f1(e,1);
    return *this+f1;
}
Fraccion operator ++(Fraccion &f){
    f= f+1;
    return f;
}
bool Fraccion:: operator <(Fraccion f){
    return this->calculaValorReal()<f.calculaValorReal();
}

Fraccion operator + (int e,Fraccion f){
    return f+e;
}

Fraccion Fraccion:: operator --(){
    *this= *this+ -1;
    return *this;
}

void operator +=(Fraccion &f1, Fraccion f2){
    f1= f1+f2;
}
istream& operator >> (istream &is, Fraccion &f){
    is >>f.num;
    is >>f.den;
    return is;
}
ostream& operator << (ostream &os, Fraccion &f){
    os<< f.num;
    os<< "/";
    os<< f.den;
    return os;
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    


#endif /* Fraccion_h */
