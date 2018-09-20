//
//  Cine.h
//  Sala Cine Tarea 3
//
//  Created by Pato Saldivar on 28/01/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#ifndef Cine_h
#define Cine_h
class SalaCine{
public:
    //constructores
    SalaCine();
    SalaCine(int,string);
    //metodos de acceso
    int getLugares() {return lugares;}
    string getPelicula() {return pelicula;}
    //metodos de modificacion
    void setLugar(int asientos) {lugares=asientos;}
    void setPelicula(string peli) {pelicula=peli;}
    // funciones
    void compraBoleto(int boletos);
private:
    int lugares;
    string pelicula;
};
SalaCine:: SalaCine(){
    lugares=1;
    pelicula=" ";
}
SalaCine:: SalaCine(int asientos, string peli){
    lugares=asientos;
    pelicula=peli;
}

void SalaCine:: compraBoleto(int boletos){
    lugares-=boletos;
}

#endif /* Cine_h */
