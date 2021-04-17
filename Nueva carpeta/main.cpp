
#include <iostream>
#include <time.h> //Libreria necesaria caso 30
#include <cstdlib>//Libreria necesaria caso 30
using namespace std;

int main()
{
    int l;

    cout <<"Bienvenido a la sustentacion de la practica 1"<<endl<<"Ingrese el numero del ejercicio o del problema:" << endl;
    cin >>l;
    switch (l) {

    case 1:{
        int a,b;
        cout << "Ingrese dos numeros A y B: ";
        cin >> a >> b;
        cout<< endl << "El residuo de la division "<<a<<"/"<<b<<" es: "<< a%b <<endl;
        break;
    }

    case 2:{
        int n;
        cout << "Ingrese un numero: ";
        cin >> n;
        if (n%2 == 0){cout<< endl << "El numero ingresado "<<n<<" es par"<<endl;}
        else{cout<< endl << "El numero ingresado "<<n<<" es impar"<<endl;}
        break;
    }

    case 3:{
        int x,y;
        cout <<"Ingrese dos numeros: ";
        cin >>x>>y;
        if(x>y){cout<< endl <<"El mayor es: "<<x<<endl;}
        else {cout<< endl <<"El mayor es: "<<y<<endl;}
        break;
    }

    case 4:{
        int f,g;
        cout <<"Ingrese dos numeros: ";
        cin >>f>>g;
        if(f<g){
            cout<< endl <<"El menor es: "<<f<<endl;
        }
        else {
            cout<< endl <<"El menor es: "<<g<<endl;
        }
        break;
    }

    case 5:{
        float n1,n2;
        double decimal;
        float resultado_parcial;
        cout<<"Ingrese dos numeros: ";
        cin >>n1>>n2;
        resultado_parcial = n1/n2;
        int resultado_f = int(n1)/int(n2);
        decimal = resultado_parcial - int(resultado_parcial);
        if(decimal >= 0.5){
            resultado_f ++;
        }
         cout<< endl <<int(n1)<<"/"<<int(n2)<<" = "<<resultado_f<<endl;
        break;

    }

    case 6:{
        int numero, potencia;
        int resultado = 0;
        cout <<"Ingrese dos numeros: ";
        cin >>numero>>potencia;
        for(int i=1;i<potencia;i++){
            if (resultado<numero){
                resultado = numero * numero;
            }
            else {
                resultado = resultado *numero;
            }
        }
        cout << endl << "El resultado de: " <<numero<<"^"<<potencia<<" es: "<<resultado <<endl;
        break;
    }

    case 7:{
        int n;
        int resultado;
        cout<<"--> Ingrese un numero N: ";
        cin>>n;
        resultado = (n*(n+1))/2;
        cout<< endl <<"La sumatoria desde 0 hasta "<<n<<" es: "<<resultado<<endl;
        break;
    }

    case 8:{
        int n,i;
        long double factorial;
        cout << "--> Introduce un numero: ";
        cin >> n;
        factorial=1;
        for(i=1;i<=n;i++){
            factorial = factorial * i;
        }
        cout << endl << "Factorial de " << n << " -> " << factorial << endl;
        break;
    }

    case 9:{
        float pi = 3.1416,area,perimetro;
        int N;
        int exponente=2;
        int potencia=0;
        cout<<"Ingrese el radio del circulo: ";
        cin >>N;
        for(int i=1;i<exponente;i++){
            if(potencia<N){
                potencia = N * N;
            }
            else {
                potencia = potencia * N;
            }
        }
        area = pi * potencia;
        perimetro = 2 * pi * N;
        cout<<endl<<"El perimetro es: "<<perimetro<<endl;
        cout<<"El area es: "<<area<<endl;
        break;
    }

    case 10:{
        int N,multiplos=1,i=0;
        cout<<"Ingrese un numero: "<<endl;
        cin >>N;
        cout<<"Multiplos de: "<<N<<" menores que 100"<<endl;
        while (multiplos < 99) {
            i++;
            multiplos = N*i;
            cout<<multiplos<<endl;
        }
        break;
    }

    case 11:{
        int N,i,producto;
        cout<<"Ingrese un numero: "<<endl;
        cin>>N;
        for (i=1;i <= 10;i++){
            producto = N*i;
            cout<<i<<" x "<<N<<" = ";
            cout<<producto<<endl;
        }
        break;
    }

    case 12:{
        short base,exponente = 1;
        int long resultado =0;
        cout<<"Ingrese un numero para calcular sus potencias: ";
        cin>>base;
        cout<<base<<"^"<<exponente<<" = "<<base<<endl;
        for(exponente =2;exponente <= 5;exponente++){
            if (resultado<base){
               resultado = base * base;
               cout<<base<<"^"<<exponente<<" = "<<resultado<<endl;
            }
            else {
                resultado = resultado *base;
                cout<<base<<"^"<<exponente<<" = "<<resultado<<endl;
            }
        }
        break;
    }

    case 13:{
        short num,div,i;
        cout<<"Ingrese un numero para calcular sus divisores: ";
        cin>>num;
        for (i =1;i<=num ;i++){
            if( num%i==0){
                div=i;
                cout<<div<<endl;
            }
        }
        break;
    }

    case 14:{
        short n1 = 0, n2 = 51;
        do {
            if(n1 < 9 && n2 > 42){
                n1++;
                n2--;
                cout<<n1<<"    "<<n2<<endl;
            }
            else{
                n1++;
                n2--;
                cout<<n1<<"   "<<n2<<endl;
            }

        } while (n1!=50 && n2!=1);
        break;
    }

    case 15:{
        short num,acumulador=0;
        do {
            cout<<"Ingrese un numero o ingresa el cero para terminar: ";
            cin>>num;
            acumulador += num;
        } while (num != 0);
        cout<<"El resultado de la sumatoria es: "<<acumulador<<endl;
        break;
    }

    case 16:{
        short num,sumatoria=0,cont=0,promedio;
        do {
            cout<<"Ingrese un numero o ingresa el cero para terminar: ";
            cin>>num;
            sumatoria += num;
            cont++;
        } while (num != 0);
        promedio = sumatoria/cont;
        cout<<"El promedio es: "<<promedio<<endl;
        break;
    }

    case 17:{
        short numero,mayor=0,menor=0;
        do {
            cout<<"Ingrese un numero o ingresa el cero para terminar: ";
            cin>>numero;
            if(numero>mayor){
                if(mayor<menor)menor=mayor;
                mayor = numero;
            }
        } while (numero != 0);
        cout<<"El mayor numero ingresado fue: "<<mayor<<endl<<"El menor numero ingresado fue: "<<menor<<endl;
        break;
    }

    case 18:{
        short number,factor=0;
        cout<<"Ingrese un numero: ";
        cin>>number;
        while(factor < (number/2)){
            if ((factor*factor)==number){
                cout<<number<<" es cuadrado perfecto"<<endl;
                break;
            }
            factor++;
        }
        cout<<number<<" NO es cuadrado perfecto"<<endl;
        break;
    }

    case 19:{
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
                }
                else{
                    cout <<N<<"  es primo";
                    break;
                }
            }

        break;
    }

    case 20:{
        cout << "número a evaluar" << endl;
            string N;
            cin>>N;

            for(int i=0;i<N.length();i=i+1){
                for(int j=N.length()-1;j>=0;j=j-1){
                    if(N[i]==N[j]){
                        cout<< N << " es palindromo";break;

                    }else{
                        cout<< N << "No es palindromo";break;

                    }
                }
            }

        break;
    }

    case 21:{
        char letra, letra_prueba;
        cout<<"Ingrese una letra: ";
        cin >>letra;
        letra_prueba = toupper(letra);
        if (letra == letra_prueba){
            letra_prueba = tolower(letra);
            cout<<letra_prueba<<endl;
        }
        else {
            cout<<letra_prueba<<endl;
        }
        break;
    }

    case 22:{
        cout << "Cuantos segundos va a calcular?" << endl;
            int N;
            cin>>N;
            int horas= N/3600; //3600 segundos = 1 hora
            int minutos=(N- horas*3600)/60;//regla de 3
            int segundos= N- (horas*3600+minutos*60);

            cout << horas <<":"<< minutos<<":"<<segundos;
        break;
    }



    case 23:{

        short A,B,R,MCD,MCM,aux;
        do {
            cout<<"Ingrese dos numero para calcular el MCM: ";
            cin>>A>>B;
        } while (A<0 && B<0);
        MCD = A;
        aux = B;
        //MCD
        do {
            R = MCD % aux;
            MCD = aux;
            aux = R;
        } while (R != 0);

        //(Propiedad) MCM*MCD = A*B --> MCM = A*B / MCD (Propiedad)
        MCM = A*B / MCD;
        cout<<"El MCM entre "<<A<<" y "<<B<<" es: "<<MCM<<endl;




        break;
    }

    case 24:{
        short lado,i,c;
        cout<<"Ingrese un numero para el tamano del ciuadrado: ";
        cin>>lado;
        for(i = 0; i < lado; i++){ //filas
            for(c = 0; c < lado; c++){ //columnas
                if (i==0 || i == (lado - 1)){
                    cout<<" +";
                }
                else if( c == 0 || c == (lado-1) ){
                    cout<<" +";
                }
                else {
                    cout<<"  ";
                }
            }
            cout <<endl;
        }

        break;
    }

    case 26:{
        unsigned int A,B,C,max,min_1,min_2;
        cout<<"Ingrese los lados A,B y C del triangulo a analizar: ";
        cin >> A >> B >> C;

        if (A>B && A>C) {
            min_1 = B;
            min_2 = C;
            max=A;
        }
        else if(B>A && B>C) {
            min_1 = A;
            min_2 = C;
            max=B;
        }
        else{
            min_1 = B;
            min_2 = A;
            max=C;
        }
        if(min_1+min_2 >max){
            if(A == B && A==C) cout<<"El triangulo es equilatero"<<endl;
            else if(A!=B && A!=C && B!=C) cout<<"El triangulo es escaleno"<<endl;
            else cout<<"El triangulo es isoceles"<<endl;

        }
        else{
            cout<<"No es un triangulo valido";
        }
        break;
    }

    case 30:{
        short num_ing,cont = 0,num_random;
        srand(time(NULL));
        num_random = rand() %101;
        do {
            cout<<"Ingrese un numero: ";
            cin>>num_ing;
            if (num_ing > num_random) cout<<"El numero es menor :("<<endl;
            else if(num_ing < num_random) cout<<"El numero es mayor :("<<endl;
            cont++;
        } while (num_ing != num_random);
        cout<<">>>>CONGRATULATIONS<<<<"<<endl<<"Adivinaste el numero"<<" en: "<<cont<<" intentos."<<endl;
        break;
    }

    case 36:{
        short n_term;
        double e=0;
        long double factorial=1;
        cout<<"Ingrese el nuumero de terminos de la aproximacion: ";
        cin >> n_term;
        for(short i=0; i<n_term; i++){
            for(short j=i;j>=2;j--) factorial *= j;
            e += 1.0/factorial;
        }
        cout<<"La aproximacion de e con: "<<n_term<<" cifras es e = "<<e<<endl;
        break;
    }

    case 37:{
        cout << "Numero de limite de la suma" << endl;
            int n,sumatoria=0;
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
                if(suma%2==0){
                     sumatoria+=suma;
                }

                cout<<suma<<endl;




            }
            cout<<endl<<"lasuma de sus números pares es: "<<sumatoria<<endl;



        break;
    }

    case 46:{
        cout << "Numero Natural de inicio" << endl;
           int N;
           int cont=0;
           cin>>N;

           while(N!=1){
               if(N%2==0){
                   N=N/2;
               }else{
                   N=(N*3)+1;
               }
            cont++;
            cout<<N<<", ";
           }
           cout<<"la serie tiene "<<cont<< " elementos cuando llega a uno." <<endl;
        break;
    }

    case 47:{
        short k,i,div;
        int num_triang,a;
        cout<<"Ingrese un numero K para saber cual es el primer numero triangular con mas de k divisores: ";
        cin>>k;
        a=1;
        do {
            num_triang = a*(a+1)/2;
            div=0;
            for (i =1;i<= num_triang;i++){
                if( num_triang%i==0)
                    div++;
            }

            a++;
        } while (div <= k);
        cout<<"El primer numero triangular con mas de "<<k<<" divisores es: "<<num_triang<<endl;

        break;
    }


    default:{
        cout <<"El ejercicio ingresado no existe";
    }
    }


}
