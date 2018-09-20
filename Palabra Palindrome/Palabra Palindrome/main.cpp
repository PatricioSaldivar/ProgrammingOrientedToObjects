//
//  main.cpp
//  Palabra Palindrome
//
//  Created by Pato Saldivar on 12/01/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main() {
    string frase, invertida;
    long tam;
    getline (cin,frase);
    tam=frase.length();
    for (long i= tam-1; i>=0;i--){
       
        frase[i]=tolower(frase[i]);
        if (frase[i]!=' '){
        invertida+= frase[i];
        }
        if (frase[i]==' '){
            frase.erase(i,1);
        }
    }
    if (invertida== frase)
    cout<< "Si es palindrome"<<endl;
    else
        cout<< "No es palindrome"<<endl;
    return 0;
}
