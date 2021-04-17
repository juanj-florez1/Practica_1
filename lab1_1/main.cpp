/*Escriba un programa que pida dos números A y B e imprima en pantalla el residuo
de la división A/B */
#include <iostream>

using namespace std;
int main()
{
    int numerador;
    int denominator;
    cout << "Agregue un valor numerico al numerador de la división \n" << endl;

    cin >> numerador;

    cout << "Agregue un valor numerico al denominador de la división  diferente de 0 \n" << endl;
    //int denominator;
    cin >> denominator;
    while(denominator==0){
        cout << "Agregue un valor numerico al denominador de la división  diferente de 0 \n" << endl;

        cin >> denominator;
    }
    int resultado = numerador % denominator;
    cout<< "el residuo de la division es: "<< resultado;
    return 0;
}
