/*Escriba un programa que pida dos números A y B e imprima en pantalla la potencia
AB, sin hacer uso de librerías matemáticas.
Ej: si se ingresan 5 y 3 se debe imprimir:
5∧3=125
*/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "numero de base A \n";
    double A;
    cin>>A;


    cout << "numero de exponente B \n";
    double B;
    cin>>B;

    double x=pow(A,B);

    cout<< A<<"^"<<B<<"="<<x <<"\n";

    return 0;
}
