//
//  Materia.h
//  Proyecto 2
//
//  Created by Pato Saldivar on 27/02/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#ifndef Materia_h
#define Materia_h
class Materia{
public:
    Materia();
    Materia (int imate, string inom);
    
    void setIdMateria(int imate) {idMateria=imate;}
    void setNombre(string inom) {nombre=inom;}
    
    int getIdMateria() {return idMateria;}
    string getNombre() {return nombre;}
    
private:
    int idMateria;
    string nombre;
    
};
Materia:: Materia(){
    idMateria=0;
    nombre= "-";
}

Materia:: Materia (int imate, string inom){
    idMateria=imate;
    nombre= inom;
}

#endif /* Materia_h */
