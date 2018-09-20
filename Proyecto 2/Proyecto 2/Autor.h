//
//  Autor.h
//  Proyecto 2
//
//  Created by Pato Saldivar on 27/02/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#ifndef Autor_h
#define Autor_h
class Autor{
public:
    Autor();
    Autor (int iautor, string inom);
    
    void setIdAutor(int iaut) {idAutor= iaut;}
    void setNombre(string inom) {nombre=inom;}
    
    int getIdAutor() {return idAutor;}
    string getNombre() {return nombre;}
    
private:
    int idAutor;
    string nombre;
    
};
Autor:: Autor(){
    idAutor=0;
    nombre= "-";
}
Autor:: Autor(int iautor, string inom){
    idAutor=iautor;
    nombre=inom;
}

#endif /* Autor_h */
