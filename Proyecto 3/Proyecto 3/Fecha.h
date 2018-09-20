//
//  Fecha.h
//  Proyecto 3
//
//  Created by Pato Saldivar on 17/04/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#ifndef Fecha_h
#define Fecha_h
class Fecha
{
    // como friend la sobrecarga del operador >
    friend bool operator > (Fecha f, Fecha f2);
    // como friend la sobrecarga del operador >=
    friend bool operator >= (Fecha f, Fecha f2);
    
    // como friend la sobrecarga del operador <
    friend bool operator < (Fecha f, Fecha f2);
    // como friend la sobrecarga del operador <=
    friend bool operator <= (Fecha f, Fecha f2);
    
    // como friend la sobrecarga del operador ==
    friend bool operator == (Fecha f, Fecha f2);
    
    // como friend la sobrecarga del operador +
    // que recibe como parametro una fecha y un numero entero
    // que representa una cantidad de dias y regresa
    // la fecha a la que se le agregaron los dias indicados
    friend Fecha operator + (Fecha f, int i);
    
    // como friend la sobrecarga del operador <<
    // que lee 3 valores enteros: dia, mes, anio con 4 digitos
    friend ostream& operator << (ostream &os, Fecha &f);
    
    // como friend la sobrecarga del operador <<
    // que muestra la fecha en el formato dd/mm/aaaa
    // no incluyas espacios ni enter
    friend istream& operator >> (istream &is, Fecha &f);
    
    
public:
    Fecha() { dd = 0; mm = 0; aa = 0; }
    Fecha(int d, int m, int a) { dd = d; mm = m; aa = a; }
    int getDia() { return dd; }
    int getMes() { return mm; }
    int getAnio() { return aa; }
    void setFecha(int d, int m, int a) { dd = d; mm = m; aa = a; }
    string nombreMes();
    bool esBisiesto();
    void verificar();
private:
    // atributos
    int dd, mm, aa;
};

bool Fecha:: esBisiesto(){
    return ((aa%4)==0);
}

void Fecha:: verificar(){
    if (mm==1|| mm==3 || mm==5 ||mm==7 ||mm==8 || mm==10 ||mm==12){
        if (dd>31) {
            dd-=31;
            mm++;
            if (mm>12) {
                mm-=12;
                aa++;
            }
        }
    }
    if (mm==4|| mm==6 || mm==9 ||mm==11){
        if (dd>30) {
            dd-=30;
            mm++;
        }
    }
    if (mm==2){
        if (esBisiesto()&& dd>29) {
            dd-=29;
            mm++;
        }
        if (!esBisiesto() && dd>28){
            dd-=28;
            mm++;
        }
    }
}

string Fecha:: nombreMes(){
    switch (mm) {
        case 1: return "Ene";
            break;
        case 2: return "Feb";
            break;
        case 3: return "Mar";
            break;
        case 4: return "Abr";
            break;
        case 5: return "May";
            break;
        case 6: return"Jun";
            break;
        case 7: return"Jul";
            break;
        case 8: return"Ago";
            break;
        case 9: return"Sep";
            break;
        case 10: return"Oct";
            break;
        case 11: return"Nov";
            break;
        case 12: return "Dic";
            break;
            
    }
    return " ";
}
bool operator > (Fecha f, Fecha f2){
    if (f.getAnio()>f2.getAnio()) {
        return true;
    }
    if (f.getAnio()==f2.getAnio()) {
        if (f.getMes()>f2.getMes()) {
            return true;
        }
    }
    if (f.getAnio()==f2.getAnio()) {
        if (f.getMes()==f2.getMes()) {
            if (f.getDia()>f2.getDia()) {
                return true;
            }
        }
    }
    return false;
}

bool operator == (Fecha f, Fecha f2){
    if (f.getAnio()==f2.getAnio()) {
        if (f.getMes()==f2.getMes()) {
            if (f.getDia()==f2.getDia()) {
                return true;
            }
        }
    }
    return false;
}

bool operator >= (Fecha f, Fecha f2){
    return (f>f2 || f==f2);
}

bool operator < (Fecha f, Fecha f2){
    return f2> f;
}

bool operator <= (Fecha f, Fecha f2){
    return (f<f2 || f==f2);
}
Fecha operator + (Fecha f, int i){
    int m, a;
    m= f.getMes();
    a= f.getAnio();
    i+= f.getDia();
    f.setFecha(i, m, a);
    f.verificar();
    return f;
}

istream& operator >> (istream &is, Fecha &f){
    is >>f.dd;
    is >>f.mm;
    is >>f.aa;
    return is;
}
ostream& operator << (ostream &os, Fecha &f){
    os<< f.dd;
    os<< "/";
    os<< f.mm;
    os<< "/";
    os<< f.aa;
    return os;
}


#endif /* Fecha_h */
