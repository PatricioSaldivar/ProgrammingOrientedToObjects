//
//  Articulo.h
//  Arreglos con objetos, E17
//
//  Created by Pato Saldivar on 09/02/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#ifndef Articulo_h
#define Articulo_h
class Articulo{
public:
    Articulo();
    Articulo(int c,double p,int numProv,string d);
    
    int getClave(){return clave;}
    double getPrecio(){return precio;}
    int getNumProveedor(){return numProveedor;}
    string getDescripcion(){return descripcion;}
    
    void setClave(int c){clave=c;}
    void setPrecio(double p){precio=p;}
    void setNumProveedor(int numProv){numProveedor=numProv;}
    void setDescripciom(string d){descripcion=d;}
    
    void muestra();
    
private:
    int clave, numProveedor;
    double precio;
    string  descripcion;
    
};

Articulo:: Articulo(){
    clave=0;
    precio=0;
    numProveedor=0;
    descripcion=" ";
}

Articulo:: Articulo(int c,double p,int numProv,string d){
    clave=c;
    precio=p;
    numProveedor=numProv;
    descripcion=d;
}

void Articulo:: muestra(){
    cout<<setw(4)<<clave<<setw(7)<<precio<<setw(7)<<numProveedor<<descripcion<<endl;
                        
}

#endif /* Articulo_h */















