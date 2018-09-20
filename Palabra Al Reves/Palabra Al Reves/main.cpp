//
//  main.cpp
//  Palabra Al Reves
//
//  Created by Pato Saldivar on 12/01/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string frase, frase_al_reves;
    long tam;
    getline(cin,frase);
    tam=frase.length();
    for (long i=tam-1; i>=0; i--){
        if (frase[i]==' '){
            frase_al_reves+=frase.substr(i+1)+' ';
            frase.erase(i);
        }
    if (i==0)
        frase_al_reves+=frase.substr(i);

    }
    cout<< frase_al_reves<<endl;
    return 0;
}
