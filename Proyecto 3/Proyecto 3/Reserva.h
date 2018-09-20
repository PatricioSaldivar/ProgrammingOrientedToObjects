//
//  Reserva.h
//  Proyecto 3
//
//  Created by Pato Saldivar on 17/04/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#ifndef Reserva_h
#define Reserva_h
#include "Fecha.h"
class Reserva{
public:
    Reserva();
    Reserva( Fecha f,int iM, int iC);
    Fecha calculaFechaFinReserva(int i);
    void setIdMaterial(int i) {idMaterial=i;}
    void setIdCliente(int i) {idCliente=i;}
    void setFechaReservacion (Fecha f) {fechaReservacion=f;}
    
    int getIdMaterial() {return idMaterial;}
    int getidCliente() {return idCliente;}
    Fecha getFechaReservacion() {return fechaReservacion;}
private:
    int idMaterial;
    int idCliente;
    Fecha fechaReservacion;
};
Reserva:: Reserva(){
    Fecha f;
    idMaterial=0;
    idCliente=0;
    fechaReservacion=f;
}
Reserva:: Reserva( Fecha f,int iM, int iC ){
    idMaterial=iM;
    idCliente=iC;
    fechaReservacion=f;
}


Fecha Reserva:: calculaFechaFinReserva(int i){
    return  fechaReservacion+i;
}

#endif /* Reserva_h */
