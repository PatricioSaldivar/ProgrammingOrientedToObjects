//
//  Taxi.h
//  Composicion Taxi Persona
//
//  Created by Pato Saldivar on 20/02/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#ifndef Taxi_h
#define Taxi_h
class Taxi{
public:
    Taxi();
    Taxi(int,Persona);
    
    void setChofer(Persona ichofer) {chofer=ichofer;}
    void setIdent(int iident) {ident=iident;}
    void print();
    
    int getIdent() {return ident;}
    Persona getChofer() {return chofer;}

    private:
        Persona chofer;
        int ident;
    };
    
    Taxi:: Taxi(){
        Persona i;
        chofer= i;
        ident=0;
    }
    Taxi:: Taxi(int iident,Persona ichofer){
        chofer=ichofer;
        ident=iident;
    }
void Taxi:: print(){
   chofer.getNombre()
}


#endif /* Taxi_h */
