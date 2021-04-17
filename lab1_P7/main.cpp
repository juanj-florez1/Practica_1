/*En la serie de Fibonacci, cada número es la suma de los 2 anteriores e inicia con 1 y
1. Ej: 1, 1, 2, 3, 5, 8, ....
Escriba un programa que reciba un número n y halle la suma de todos los números pares en la serie
de Fibonacci menores a n.
Ej: si se ingresa 10, sería la suma de 2+8 =10
Nota: el formato de salida debe ser: El resultado de la suma es: 10
Problema 8. Escriba un programa que reciba 3 números a, b, c, y calcule*/
#include <iostream>

using namespace std;

int main()
{
    cout << "Numero de limite de la suma" << endl;
    int n;
    int primero=0;
    int siguiente=1;
    cin>>n;

    while(n<1){
        cout<<"por favor, un numero entero positivo mayor que 1: "<< endl;
        cin>>n;
    }
    while(siguiente<n){

        //x=y;
        int suma=primero+siguiente;
        primero=siguiente;
        siguiente= suma;
        cout<<suma<<endl;

        if(suma%2==0){

            int aux=suma;
            int suma2= suma+ aux;
            cout<<suma2;
        }

    }
    return 0;
}
