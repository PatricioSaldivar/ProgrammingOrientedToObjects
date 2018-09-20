//
//  esfera.h
//  Esfera_Tarea3
//
//  Created by Pato Saldivar on 28/01/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#ifndef esfera_h
#define esfera_h
class esfera{
public:
    //constructores
    esfera();
    esfera(double radio);

    //metodos de acceso
    int getRadio() {return rad;}
    //metodos de modificacion
    void setRadio(double radio) {rad=radio;}
    // funciones
    double calcArea();
    double calcVolum();
private:
    double rad,pi=3.14159, area, volumen;
};

esfera:: esfera(){
    rad=1;
}
esfera:: esfera(double radio){
    rad=radio;
}
double esfera::calcArea(){
     return (4*pow(rad,2)*pi);
}
double esfera:: calcVolum(){
    return (4*pi*pow(rad,3))/3;
}
#endif /* esfera_h */
