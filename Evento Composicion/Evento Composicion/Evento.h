//
//  Evento.h
//  Evento Composicion
//
//  Created by Pato Saldivar on 16/02/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#ifndef Evento_h
#define Evento_h
#include "Reloj.h"
class Evento{
public:
    Evento();
    Evento(Reloj r, int d, string a);
    
   Reloj getInicio() {return inicio;}
    int getDuracion() {return duracion;}
    string getAsunto() {return asunto;}
    
    void setInicio(Reloj r) {inicio=r;}
    void setDuracion(int d) {duracion=d;}
    void setAsunto(string a) {asunto=a;}
private:
    Reloj inicio;
    int duracion;
    string asunto;
};

Evento:: Evento(){
    Reloj r(8,0);
    inicio= r;
    duracion=30;
    asunto= "Evento";
}

Evento:: Evento(Reloj r, int d, string a){
    inicio=r;
    duracion=d;
    asunto=a;
}
#endif /* Evento_h */
