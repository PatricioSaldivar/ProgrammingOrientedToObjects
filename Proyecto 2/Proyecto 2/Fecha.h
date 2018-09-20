//
//  Fecha.h
//  Proyecto 2
//
//  Created by Pato Saldivar on 27/02/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#ifndef Fecha_h
#define Fecha_h
class Fecha{
public:
    Fecha();
    Fecha(int dd, int mm, int aa);
    
    void setFecha(int dd, int mm, int aa);
    
    int getDia() {return dia;}
    int getMes() {return mes;}
    int getYear() {return year;}
    
    
private:
    int dia, mes, year;
};
Fecha:: Fecha(){
    dia=1;
    mes=1;
    year=2000;
}
Fecha:: Fecha(int dd, int mm, int aa){
    dia=dd;
    mes=mm;
    year=aa;
}

void Fecha:: setFecha(int dd, int mm, int aa){
    dia=dd;
    mes=mm;
    year=aa;
}

#endif /* Fecha_h */
