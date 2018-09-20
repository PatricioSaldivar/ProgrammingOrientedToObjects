//
//  main.cpp
//  Proyecto Primer Parcial
//
//  Created by Pato Saldivar on 06/02/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
string imprime;


void progName(string texto){
    imprime="<h1> "+texto+" </h2> </font> <br> <p>";
}
void desc(string texto){
    imprime="<strong> Descripcion: </strong> "+texto+" <br> \n";
}
void author(string texto){
    imprime= "<strong> Autor: </strong> " + texto +" <br> \n";
}
void date(string texto){
    imprime="<strong> Fecha: </strong> " + texto+" <br> \n";
}
void param(string texto){
    imprime="<strong> Parametro: </strong> "+texto+" <br> \n ";
}
void funcName(string texto){
    imprime="<h3> Funcion: "+texto+" </h3> <br> <p>\n";
}
void retorno(string texto){
    imprime="<strong> Retorna: </strong> "+texto+" <br> \n ";
}

void identificar(string fun,string texto){
    if (fun=="@progName"){
        progName(texto);
    }
    if (fun=="@desc"){
        desc(texto);
    }
    if (fun=="@author"){
        author(texto);
    }
    if (fun=="@date"){
        date(texto);
    }
    if (fun=="@param"){
        param(texto);
    }
    if (fun=="@funcName"){
        funcName(texto);
    }
    if (fun=="@return"){
        retorno(texto);
    }
}

int main(){
    ifstream archEnt;
    ofstream archSal;
    string code, fun,texto,archivo,pagina;
    cout<< "Como se llama el archivo que va a leer? \n";
    cin>> archivo;
    pagina=archivo+".html";
    archivo+=".cpp";
    archEnt.open(archivo.c_str());
    archSal.open(pagina.c_str());
//                          Inicio del codigo de la web page
// <!DOCTYPE html>
// <html>
// <head>
// <title>
// Documentacion del archivo programa.cpp
// </title>
// <style>
// body{background-color :LightGoldenRodYellow ;}
// p { border: 15px solid IndianRed;
// padding: 10px;
// border-radius: 10px;
// } </style>
// </head>
// <body>
    
    archSal<<"<!DOCTYPE html>\n<html>\n<head>\n<title>\nDocumentacion del archivo programa.cpp\n</title>\n<style>\n body{background-color :LightGoldenRodYellow ;}\n p { border: 15px solid IndianRed;\n padding: 10px;\n border-radius: 10px; \n } </style>\n </head>\n<body> ";
    //Mi firma
    archSal<<"<h4> Patricio Andres Saldivar Flores </h4>\n";
    
    while(getline(archEnt,code)){
        if (code=="/**"){
            while (code!="*/"){
            archEnt>>fun;
                if(fun!="*/"){
            getline(archEnt,texto);
            identificar(fun,texto);
            archSal<<imprime;
                }
                else{
                    code=fun;
                    //Agrea una linea
                    archSal<<"</p> \n <hr><hr>";
                }
            }
        }
    }
    archSal<<"</body> \n </html>";
    archSal.close();
    archEnt.close();
    return 0;
}
