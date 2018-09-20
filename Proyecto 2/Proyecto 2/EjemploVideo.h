//
//  EjemploVideo.h
//  Proyecto 2
//
//  Created by Pato Saldivar on 27/02/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#ifndef EjemploVideo_h
#define EjemploVideo_h
class EjemploVideo{
public:
    EjemploVideo();
    //Metodos de acceso
    int getIdVideo() {return idVideo;}
    string getNombre() {return nombre;}
    int getIdTema() {return idTema;}
    Fecha getFechaElaboracion() {return fechaElaboracion;}
    int getListaAutores(int listaAut) {return listaAutores[listaAut];}
    int getCantidadAutores() {return cantidadAutores;}
    
    //Metodos de modificacion
    void setIdVideo(int idv) {idVideo=idv;}
    void setNombre(string nom) {nombre=nom;}
    void setIdTema(int idt) {idTema=idt;}
    void setFechaElaboracion(Fecha fElab) {fechaElaboracion=fElab;}
   
    //Funcion
    bool agregaAutor(int listAut);
    
private:
    int idVideo, idTema, cantidadAutores, listaAutores[10];
    string nombre;
    Fecha fechaElaboracion;
    
};

EjemploVideo:: EjemploVideo(){
    Fecha f;
    idVideo=0;
    idTema=0;
    cantidadAutores=0;
    nombre= "-";
    fechaElaboracion=f;
}

bool EjemploVideo::agregaAutor(int listAut){
    
    if (cantidadAutores==10){
    return false;
    }
    
    for (int i=0; i<cantidadAutores; i++) {
        if(listAut==listaAutores[i]){
            return false;
        }
    }
    listaAutores[cantidadAutores]=listAut;
    cantidadAutores++;
    return true;
}

#endif /* EjemploVideo_h */
