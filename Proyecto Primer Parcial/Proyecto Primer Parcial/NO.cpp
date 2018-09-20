/**
 @progName Formatiar Fechas
 @desc Programa que tiene 3 funciones para poner formato a dos fechas indicadas.
 @author Patricio Saldivar
 @date 31 de Enero de 2018
 */


#include <iostream>
#include <cmath>
using namespace std;

string MonthName;
// Funcion para obtener el nombre del mes//
/**
 @funcName ObtenerNombreMes
 @desc Obtiene el nombre del mes indicado
 Este es el segundo Renglon
 @param month valor para el numero del mes
 @return MonthName recibe el nombre del mes de la variable month
 */

string obtenerNombreMes(int month) {
    
    switch (month) {
        case 1: MonthName="Enero";
            break;
        case 2: MonthName="Febrero";
            break;
        case 3: MonthName="Marzo";
            break;
        case 4: MonthName="Abril";
            break;
        case 5: MonthName="Mayo";
            break;
        case 6: MonthName="Junio";
            break;
        case 7: MonthName="Julio";
            break;
        case 8: MonthName="Agosto";
            break;
        case 9: MonthName="Septiembre";
            break;
        case 10: MonthName="Octubre";
            break;
        case 11: MonthName="Noviembre";
            break;
        case 12: MonthName="Diciembre";
            break;
            
    }
    return MonthName;
}
// Funcion para mostrar en la terminal la fecha en un formato de numeros//
/**
 @funcName muestraFechaNumeros
 @desc Muestra la fecha indicada en numeros con el formato dd/mm/yyyy
 @param days valor numerico de el dia, month valor numerico, years valor numerico del año
 */
void muestraFechaNumeros(int days,int month, int year){
    
    cout << days <<"/" << month <<"/" << year<< endl;
    
}
// Funcion para desplegar la fecha con el mes en palabra//
/**
 @funcName muestraFechaNombres
 @desc Muestra la fecha indicada en palabras en formato Dia de Mes de Año
 @param days valor numerico de el dia, years valor numerico del año
 */
void muestraFechaNombres(int days, int year){
    
    cout<< days<< " de "<< MonthName << " de "<< year<< endl;
}

/**
 @funcName main
 @desc Pide al usuario los valores de la fecha y despues de eso le pregunta en que formato la quiere y se lo muestra en la pantalla
 */
int main() {
    
    int dia1, mes1, ano1;
    char OpcionNombreNumero;
    string nombre_mes1, nombre_mes2;
    
    cout << "Teclea el dia ";
    cin >> dia1;
    
    cout << "Teclea el mes ";
    cin >> mes1;
    
    cout << "Teclea el año ";
    cin >> ano1;
    
    cout << "Deseas ver el mes en numero (a) o deseas verlo en nombre (tecle cualquier otra tecla) ";
    cin >> OpcionNombreNumero;
    
    // Depende del valor de la variable OpcionNombreNumero se sabe que funciones ejectuar//
    switch (OpcionNombreNumero) {
        case 'a':
            muestraFechaNumeros(dia1, mes1, ano1);
            break;
            
        default:
            nombre_mes1 = obtenerNombreMes(mes1);
            muestraFechaNombres(dia1, ano1);
            break;
    }
    return 0;
}
