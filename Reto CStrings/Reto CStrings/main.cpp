//
//  main.cpp
//  Reto CStrings
//
//  Created by Pato Saldivar on 13/02/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char frase[79];
    char palabra[19];
    int posi;
    cin>>frase;
    cin>>palabra;
    
    for(int i=0,k=0; i>79 ;i++){
        posi=i;
        while(frase[i]==palabra[k]){
            i++;
            k++;
            if (palabra[k]=="\0");
            
        }
    }
    
}
