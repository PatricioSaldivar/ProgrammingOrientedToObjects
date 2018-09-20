//
//  Proveedor.h
//  Arreglos con objetos, E17
//
//  Created by Pato Saldivar on 09/02/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#ifndef Proveedor_h
#define Proveedor_h
class Proveedor{
public:
    Proveedor();
    Proveedor(int num, string nom);
    
    int getNumero(){return numero;}
    string getNombre(){return nombre;}
    
    void setNumero(int num){numero=num;}
    void setNombre(string nom){nombre=nom;}
    
    void muestra();
    
    
private:
    int numero;
    string nombre;
};

Proveedor:: Proveedor(){
    nombre=" ";
    numero=0;
}
Proveedor:: Proveedor(int num, string nom){
    nombre=nom;
    numero=num;
}

void Proveedor:: muestra(){
    cout<<numero<<"\t"<<nombre<<endl;
}

#endif /* Proveedor_h */
