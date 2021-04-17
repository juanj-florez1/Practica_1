#include <iostream>
/* Escriba un programa que pida dos números A y B e imprima en pantalla el mayor.
Ej: si se ingresan 7 y 3 se debe imprimir:
El mayor es 7*/

using namespace std;

int main()
{
    cout<<"primer numero a evaluar \n";
    double A;
    cin >> A;

    cout<<"segundo numero a evaluar \n";
    double B;
    cin >>B;

    if(A>B){
        cout << "el numero "<<A<<" es mayor ";
    }else{
        cout << "el numero "<<B<<" es mayor ";
    }



    return 0;
}
