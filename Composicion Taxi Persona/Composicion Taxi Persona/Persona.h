//
//  Persona.h
//  PersonaTaxi
//
//  Created by Patricio Saldivar on 20/2/15.
//  Copyright (c) 2015 Yolanda MartÃ­nez. All rights reserved.
//

#ifndef PersonaTaxi_Persona_h
#define PersonaTaxi_Persona_h

class Persona
{
public:
    Persona();
    Persona(string, string);
    void setNombre(string nom) { nombre = nom; }
    void setNumCel(string num) { numCel = num; }
    
    string getNombre() { return nombre; }
    string getNumCel() { return numCel; }
private:
    string nombre;
    string numCel;
};

Persona :: Persona() {
    nombre = "-";
    numCel = "0";
}

Persona :: Persona(string sNom, string sNum){
    nombre = sNom;
    numCel = sNum;
}

#endif
