//
//  main.cpp
//  Proyecto 2
//
//  Created by Pato Saldivar on 27/02/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;
#include "Autor.h"
#include "Fecha.h"
#include "Materia.h"
#include "Tema.h"
#include "EjemploVideo.h"

void MuestraVideosTema(EjemploVideo videos[],int cont, int idTema, int icantAutores, int idAutor, Autor autores[], Tema temas[], Materia materias[]  ){
    int IdMateria;
    for (int i=0; i<cont; i++) {
        //Busca el idTema en los videos
        if (videos[i].getIdTema()==idTema) {
            cout<< videos[i].getIdVideo()<<"  ";
            cout<< videos[i].getNombre()<<"  ";
            //Busca el nombre del Tema
            for(int y=0; y<10; y++){
                if (idTema==temas[y].getIdTema()) {
                    cout<< temas[y].getNombre()<<"  ";
                    IdMateria=temas[y].getIdMateria();
                    for (int m=0; m<5; m++) {
                        if (IdMateria==materias[m].getIdMateria()) {
                            cout<<materias[m].getNombre()<<"  ";
                        }
                    }
                   
                    
                }
            }
            cout<<videos[i].getFechaElaboracion().getDia()<<"  ";
            cout<<videos[i].getFechaElaboracion().getMes()<<"  ";
            cout<<videos[i].getFechaElaboracion().getYear()<<"  ";
            cout<<videos[i].getCantidadAutores()<<"  ";
            
            //Busca todos los autores del video
            icantAutores=videos[i].getCantidadAutores();
            for (int k=0; k<icantAutores; k++) {
                idAutor=videos[i].getListaAutores(k);
                
                //Busca el nombre de cada autor
                for (int x=0; x<10; x++) {
                    if (idAutor==autores[x].getIdAutor()){
                        cout<<autores[x].getNombre()<<"  ";
                    }
                }
            }
            cout<<endl;
        }
        
    }
    
}

bool ValidarTema(Tema tema[], int IdTema){
    for( int i=0; i<10; i++){
        if (tema[i].getIdTema()==IdTema) {
            return true;
        }
    }
    return false;
}

bool ValidarAutor(Autor autores[], int Autores[], int cantidadAutores){
    int x=0;
    for (int k=0; k<cantidadAutores; k++) {
        for( int i=0; i<10; i++){
            if (Autores[k]==autores[i].getIdAutor()){
                x++;
            }
        }
    }
    return (x==cantidadAutores);
}
bool ValidarVideo(EjemploVideo videos[20], int idVideo){
    for(int i=0; i<20; i++){
        if (idVideo==videos[i].getIdVideo()) {
            return false;
        }
    }
    return true;
}

int main(){
    Materia materias[5];
    Tema temas[10];
    Autor autores[10];
    EjemploVideo videos[20];
    Fecha f;
    ifstream materia, tema, autor, video;
    string nom;
    int cont, idMateria, idTema, idAutor,idVideo, dia, mes, year, icantAutores, AutoresVideos[10];
    int cantTemas, cantMaterias, cantAutores;
    char opcion;
    
    cout<<"Teclea el nombre del archivo para las materias ";
    cin>>nom;
    nom+=".txt";
    materia.open(nom.c_str());
    
    cout<<"Teclea el nombre del archivo para las temas ";
    cin>>nom;
    nom+=".txt";
    tema.open(nom.c_str());
    
    cout<<"Teclea el nombre del archivo para los autores ";
    cin>>nom;
    nom+=".txt";
    autor.open(nom.c_str());
    
    cout<<"Teclea el nombre del archivo para los videos ";
    cin>>nom;
    nom+=".txt";
    video.open(nom.c_str());
    
    cont=0;
    while(materia>>idMateria){
        getline (materia,nom);
        materias[cont].setIdMateria(idMateria);
        materias[cont].setNombre(nom);
        cont++;
    }
    cantMaterias=cont;
    cont=0;
    while(tema>>idTema>>idMateria){
        getline (tema,nom);
        temas[cont].setIdTema(idTema);
        temas[cont].setNombre(nom);
        temas[cont].setIdMateria(idMateria);
        cont++;
    }
    cantTemas=cont;
    cont=0;
    while(autor>>idAutor){
        getline (autor,nom);
        autores[cont].setNombre(nom);
        autores[cont].setIdAutor(idAutor);
        cont++;
    }
    cantAutores=cont;
    cont=0;
    
    
    while(video>>idVideo>>nom>>idTema>>dia>>mes>>year>>icantAutores){
        for (int i=0;i<icantAutores; i++) {
            video>>AutoresVideos[i];
        }
        //VAlidar con funciones bool
        if(ValidarTema(temas, idTema)&&ValidarAutor(autores, AutoresVideos, icantAutores)&&ValidarVideo(videos, idVideo)){
            videos[cont].setIdVideo(idVideo);
            videos[cont].setNombre(nom);
            videos[cont].setIdTema(idTema);
            f.setFecha(dia, mes, year);
            videos[cont].setFechaElaboracion(f);
            for (int i=0;i<icantAutores; i++) {
                videos[cont].agregaAutor(AutoresVideos[i]);
            }
            cont++;
        }
        else
            cout<< "El video "<<nom<<" no se pudo agregar\n";
        
    }
    
    do{
        cout<<endl;
        cout<<"Teclea la opcion deseada\n";
        cout<<"a) Consultar informacion de Materias, Temas y Autores\n";
        cout<<"b) Dar de alta Videos de Ejemplo\n";
        cout<<"c) Consultar la lista de Videos por tema\n";
        cout<<"d) Consultar la lista de Videos por materia\n";
        cout<<"e) Consultar lista de Videos\n";
        cout<<"f) Consulta videos por autor\n";
        cout<<"g) Terminar\n";
        cin>>opcion;
        cout<<endl;
        
        switch (opcion) {
            case 'a':
                cout<< "Materias:\n";
                for (int i=0; i<cantMaterias; i++) {
                    cout<<materias[i].getIdMateria()<<"\t"<<materias[i].getNombre()<<endl;
                }
                cout<< "\nTemas:\n";
                for (int i=0; i<cantTemas; i++) {
                    cout<<temas[i].getIdTema()<<"\t"<<temas[i].getIdMateria()<<"\t"<<temas[i].getNombre()<<endl;
                }
                cout<<"\nAutores:\n";
                for (int i=0; i<cantAutores; i++) {
                    cout<<autores[i].getIdAutor()<<"\t"<<autores[i].getNombre()<<endl;
                }
                break;
                
            case 'b':
                cout<<"Teclea los valores  (idVideo), (Nombre), (idTema), (dd) (mm) (aa), (cantAutores), (listaAutores)"<<endl;
                cin>> idVideo >> nom >> idTema >> dia>> mes >> year >> cantAutores;
                for (int i=0; i<cantAutores; i++) {
                    cin>>AutoresVideos[i];
                }
                if(ValidarTema(temas, idTema)&&ValidarAutor(autores, AutoresVideos, icantAutores)&&ValidarVideo(videos, idVideo)){
                    videos[cont].setIdVideo(idVideo);
                    videos[cont].setNombre(nom);
                    videos[cont].setIdTema(idTema);
                    f.setFecha(dia, mes, year);
                    videos[cont].setFechaElaboracion(f);
                    for (int i=0;i<cantAutores; i++) {
                        videos[cont].agregaAutor(AutoresVideos[i]);
                    }
                    cont++;
                }
                else
                    cout<< "El video no se pudo agregar\n";
                
                break;
                
                
            case 'c':
                cout<< "Teclea el id del tema\n";
                cin>>idTema;
                MuestraVideosTema(videos, cont, idTema, icantAutores, idAutor, autores, temas, materias);
                
                break;
            case 'd':
                cout<< "Teclea el id de la materia\n";
                cin>>idMateria;
                for (int i=0; i<cantTemas; i++) {
                    if(idMateria==temas[i].getIdMateria()){
                        idTema=temas[i].getIdTema();
                        MuestraVideosTema(videos, cont, idTema, icantAutores, idAutor, autores, temas, materias);
                    }
                }
                
                break;
            case 'e':
                for (int i=0; i<cont; i++) {
                    cout<< videos[i].getIdVideo()<<"  ";
                    cout<< videos[i].getNombre()<<"  ";
                    idTema=videos[i].getIdTema();
                    for(int y=0; y<10; y++){
                        if (idTema==temas[y].getIdTema()) {
                            cout<< temas[y].getNombre()<<"  ";
                            idMateria=temas[y].getIdMateria();
                            for (int m=0; m<5; m++) {
                                if (idMateria==materias[m].getIdMateria()) {
                                    cout<<materias[m].getNombre()<<"  ";
                                }
                            }
                        }
                    }
                    cout<<videos[i].getFechaElaboracion().getDia()<<"  ";
                    cout<<videos[i].getFechaElaboracion().getMes()<<"  ";
                    cout<<videos[i].getFechaElaboracion().getYear()<<"  ";
                    cout<<videos[i].getCantidadAutores()<<"  ";
                    
                    icantAutores=videos[i].getCantidadAutores();
                    for (int k=0; k<icantAutores; k++) {
                        idAutor=videos[i].getListaAutores(k);
                        
                        //Busca el nombre de cada autor
                        for (int x=0; x<10; x++) {
                            if (idAutor==autores[x].getIdAutor()){
                                cout<<autores[x].getNombre()<<"  ";
                                
                            }
                        }
                    }
                    cout<<endl;
                }
                
                break;
                
                
                // Consulta videos por autor, debe preguntar al usuario el id del autor y mostrar el id y
                //nombre de todos los videos en los que colaboró el autor dado.
            case 'f':
                cout<<"Teclea el id del autor\n";
                cin>> idAutor;
                for (int i=0; i<cont; i++) {
                    cantAutores=videos[i].getCantidadAutores();
                    for (int x=0; x<cantAutores; x++) {
                        if (idAutor==videos[i].getListaAutores(x)){
                            cout<<videos[i].getIdTema()<<"\t"<< videos[i].getNombre()<<endl;
                        }
                    }
                }
                break;
                
        }
    }while (opcion!='g');
    
    return 0;
    
}










