//
//  Reloj.h
//  Clase Reloj
//
//  Created by Pato Saldivar on 23/01/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#ifndef Reloj_h
#define Reloj_h
class Reloj{
public:
    //Constructores
    Reloj();
    Reloj(int paraHora, int paraMinu);
    void sethora(int paraHora);
    void setminu(int paraMinu);
    int getHora();
    int getMinu();
private:
    int hora, minu;
};

Reloj:: Reloj(){
    hora=12;
    minu=0;
}
Reloj:: Reloj(int paraHora, int paraMinu){
    hora=paraHora;
    minu=paraMinu;
}
void Reloj:: sethora(int paraHora){
    hora=paraHora;
}
void Reloj:: setminu(int paraMinu){
    minu=paraMinu;
}
int Reloj:: getHora(){
    return hora;
}
int Reloj:: getMinu(){
    return minu;
}



#endif /* Reloj_h */
