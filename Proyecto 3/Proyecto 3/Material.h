//
//  Material.h
//  Proyecto 3
//
//  Created by Pato Saldivar on 17/04/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#ifndef Material_h
#define Material_h
// La clase Material es una clase abstracta que tendrá los constructores y los métodos de
//acceso y modificación para cada uno de sus atributos. Además debe contar con los
//métodos:
//o muestraDatos que no recibe parámetros ni tiene valor de retorno y muestra todos
//los datos del objeto. Este método debe ser abstracto.
//o cantidadDiasPrestamo que no recibe parámetros y regresa como valor de retorno
//la cantidad de días que se puede prestar el material. Este método debe ser
//abstracto


class Material{
public:
    Material();
    Material(int iM, string s);
    void setIdMaterial(int i) {idMaterial=i;}
    void setTitulo(string i) {titulo=i;}
    int getIdMaterial() {return idMaterial;}
    string getTitulo() {return titulo;}
    
    virtual void muestra()=0;
    virtual int cantidadDeDiasDePrestamo()=0;
protected:
    string titulo;
    int idMaterial;
    
};
Material:: Material(){
    titulo=" ";
    idMaterial=0;
}
Material:: Material(int iM, string s){
    titulo=s;
    idMaterial=iM;
}



#endif /* Material_h */
