//
//  main.cpp
//  Vectores, Ejercico Extra
//
//  Created by Pato Saldivar on 27/04/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main(){
    vector <int> vec;
    vector <int>::reverse_iterator r_iter;
    vector <int>:: iterator iter;
    char opcion;
    int datos;
    ifstream archivo;
    archivo.open("vector.txt");
    while (archivo>>datos) {
        vec.push_back(datos);
    }
    do{
        cout<<"a) Shift a la izquierda\nb) Shift a la derecha\nc) Invertir orden\nd) Terminar\n";
        cin>> opcion;
        switch (opcion) {
            case 'a':
                iter=vec.begin();
                vec.push_back(*iter);
                vec.erase(vec.begin());
                break;
                
            case 'b':
                iter=vec.end()-1;
                vec.insert(vec.begin(), *iter);
                vec.pop_back();
                break;
                
            case 'c':
                vector <int> R_vec;
                for (r_iter=vec.rbegin(); r_iter!=vec.rend(); r_iter++) {
                    R_vec.push_back(*r_iter);
                }
                vec=R_vec;
                break;
        }
        for (iter=vec.begin(); iter!=vec.end(); iter++) {
            cout<<*iter<<"  ";
        }
         cout<<endl;
    }while (opcion!='d');
    
    
    return 0;
}
