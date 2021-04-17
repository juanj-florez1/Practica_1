/*Escriba un programa que pida un número N e imprima el perímetro y área de un
círculo con radio N. Nota: use 3.1416 como una aproximación de pi.
Ej: si se ingresa 1 se debe imprimir:
Perimetro: 6.28352
Area: 3.1416
*/#include <iostream>

using namespace std;

int main()
{
    cout<< "Radio del circulo \n"<<"tenga en cuenta de pi=3.1416\n";
    double N;
    float pi=3.1416;
    cin>> N;
    cout<< "El area es: "<< (pi*(N*N))<<" y perimetro es: "<<(2*pi*N);
    return 0;
}
