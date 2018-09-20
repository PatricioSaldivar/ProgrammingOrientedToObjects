//
//  Tema.h
//  Proyecto 2
//
//  Created by Pato Saldivar on 27/02/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#ifndef Tema_h
#define Tema_h
class Tema{
public:
    Tema();
    Tema (int itema, string inom, int imate);
    
    void setIdTema(int itema)  {idTema=itema;}
    void setIdMateria(int imate) {idMateria=imate;}
    void setNombre(string inom) {nombre=inom;}
    
    int getIdTema() {return idTema;}
    int getIdMateria() {return idMateria;}
    string getNombre() {return nombre;}
    
private:
    int idTema,idMateria;
    string nombre;
    
};
Tema:: Tema(){
    idTema=0;
    idMateria=0;
    nombre= "-";
}

Tema:: Tema(int itema, string inom, int imate){

    idTema=itema;
    nombre= inom;
    idMateria=imate;
    
}

#endif /* Tema_h */
