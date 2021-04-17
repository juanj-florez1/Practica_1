/*Escriba un programa que pida dos números A y B e imprima en pantalla la división
A/B con redondeo.
Ej: si se ingresan 8 y 3 se debe imprimir:
8/3=3
Si se ingresan 7 y 3 se debe imprimir:
7/3=2*/
#include <iostream>

using namespace std;

int main()
{
    cout<<"numerador A \n";
    double A;
    cin >> A;

    cout<<"denominador B distinto de 0 \n";
    double B;
    cin >>B;

    if (B==0){
        cout<<"denominador B distinto de 0 \n";
        double B;
        cin >>B;


    }
    double x= A/B;

    cout << A<<"/"<<B<<"="<<int(x);
    return 0;
}
