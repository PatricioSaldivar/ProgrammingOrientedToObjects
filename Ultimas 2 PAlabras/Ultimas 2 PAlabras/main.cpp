//
//  main.cpp
//  Ultimas 2 PAlabras
//
//  Created by Pato Saldivar on 12/01/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string frase, frase_final;
    long largo;
    int contador=0;
    getline (cin,frase);
    largo= frase.length();
    for (long i=largo-1; i>=0;i--){
        if (frase[i]==' '){
            contador++;
            
        if (contador==2){
            frase_final=frase.substr(i+1);
            }
        }
    }
    if (contador==1){
        frase_final= frase;
    }
    cout<< frase_final;
    return 0;
}
