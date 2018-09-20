//
//  main.cpp
//  sobrecargaFracccion
//
//  Created by Pato Saldivar on 23/02/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
using namespace std;
#include "Fraccion.h"

int main(){
    
    Fraccion f1, f2(2,3), f3(3,4), f4;
    
    f4=f1+f2;
    f4.muestra();
    f4=f1*f2;
    f4.muestra();
    if (f3>f2)
        cout<<"Si es mayor"<<endl;
    
    f4=-f2;
    cout<<f4<<endl;
    return 0;
}

