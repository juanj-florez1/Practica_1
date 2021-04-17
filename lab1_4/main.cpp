/* Escriba un programa que pida dos números A y B e imprima en pantalla el menor.
Ej: si se ingresan 7 y 3 se debe imprimir:
El menor es 3*/
#include <iostream>

using namespace std;

int main()
{
    cout<<"primer numero a evaluar \n";
        double A;
        cin >> A;

        cout<<"segundo numero a evaluar \n";
        double B;
        cin >>B;

        if(A<B){
            cout << "el numero "<<A<<" es menor ";
        }else{
            cout << "el numero "<<B<<" es menor ";

        }




    return 0;
}
