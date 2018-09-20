//
//  main.cpp
//  Sort 3 Words
//
//  Created by Pato Saldivar on 13/02/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//
#include <iostream>
#include <cstring>
using namespace std;
 char menor[11], medio[11], mayor[11];

void compara(char a[10],char b[10],char c[10]){
    if (strcmp(a,b)>=0){
        strcpy(menor,b);
        strcpy(mayor,a);
    }
        else if (strcmp(a,b)<=0){
            strcpy(menor,a);
            strcpy(mayor,b);
        }
    
    if (strcmp(mayor,c)>=0)
        strcpy(medio, c);
    
    else if (strcmp(mayor,c)<=0){
        strcpy(medio,mayor);
        strcpy(mayor,c);
        }
    
    if (strcmp(menor,medio)>=0){
        strcpy(a, menor);
        strcpy(menor, medio);
        strcpy(medio,a);
        
    }
}



int main() {
    char palabra1[11],palabra2[11],palabra3[11];
    int n;
    cin>>n;
    for(;n>0;n--){
        cin>>palabra1;
        cin>>palabra2;
        cin>>palabra3;

        compara(palabra1, palabra2, palabra3);
        cout<<menor<<" "<<medio<<" "<<mayor<<endl;
        
    }
        return 0;
    }
