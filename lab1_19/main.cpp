/*Escriba un programa que pida un número N e imprima si es o no un número primo.
Ej: si se ingresa 7 se debe imprimir:
7 es un numero primo.
y si se ingresa 8 se debe imprimir:
8 NO es un numero primo*/
#include <iostream>

using namespace std;

int main()
{
    cout << "Número a evaluar, recuerde que  tinen que ser mayor a uno." << endl;
    int N;
    cin>> N;

    while(N<=1){
        cout << "Número a evaluar, recuerde que  tinen que ser mayor a uno." << endl;
        cin>> N;

    }

    for(int i=2;i<=(N-1);i=i+1){
        int P=N%i;


        if (P==0){
            cout <<N<<" No es primo";
            break;
        }else{
            cout <<N<<"  es primo";
            break;
        }
    }

    return 0;
}
