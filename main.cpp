#include <iostream>

using namespace std;

void MenuPrincipal();
bool EsVocal(char letra);
void BilletesMonedas(int devuelta);
void MesDia(int mes, int dia);
void SumaHoras(int horaInicio,int horaMas);
int Potencia(int base, int exp);
int Factorial(int num);
bool EsPrimo(int numero);
void SumaFibonacci(int numero);
int Multiplo(int a, int c);
bool esPalindromo(int numero);

int main()
{
    int opcion=1;

    while(opcion!=0)
    {
        MenuPrincipal();
        cin>>opcion;
        switch (opcion)
        {
        case 1:
            char caracter;
            cout<<"Ejecutando Problema 1 ..."<<endl;
            cout<<"Ingrese un caracter: "<<endl;
            cin>>caracter;
            if((caracter>=65 && caracter<=90) || (caracter>=97 && caracter<=122))
            {
                if(EsVocal(caracter))
                    cout<<caracter<< " Es una vocal"<<endl;
                else
                    cout<<caracter<< " Es una consonante"<<endl;
            }
            else
                cout<<caracter<< " No es una letra"<<endl;
            break;
        case 2:
            int cantidadDevolver;
            cout<<"Ejecutando problema 2 ..."<<endl;
            cout<<"Ingrese la cantidad de dinero: "<<endl;
            cin>>cantidadDevolver;
            BilletesMonedas(cantidadDevolver);
            break;
        case 3:
            int mes;
            int dia;
            cout<<"Ejecutando problema 3 ..."<<endl;
            cout<<"Ingrese el mes (en numeros): "<<endl;
            cin>>mes;
            cout<<"Ingrese el dia: "<<endl;
            cin>>dia;
            MesDia(mes,dia);
            break;
        case 4:
            int horaInicio;
            int horaMas;
            cout<<"Ejecutando problema 4 ..."<<endl;
            cout<<"Ingrese la primer hora: "<<endl;
            cin>>horaInicio;
            cout<<"Ingrese la hora a sumar: "<<endl;
            cin>>horaMas;
            SumaHoras(horaInicio, horaMas);
            break;
        case 5:
            int n;
            cout<<"Ejecutando problema 5 ..."<<endl;
            cout << "Ingrese un numero: ";
            cin >>n;

            for(int i=0; i<n/2+1; i++) {
                for (int j = 0; j < n/2-i; j++)
                    cout << " ";
                for (int j = 0; j < 2*i+1; j++)
                    cout << "*" ;
                cout << endl ;
            }
            for(int i=n/2-1; i>=0; i--){
                for (int j = 0; j < n/2-i; j++)
                    cout << " ";
                for (int j = 0; j < 2*i+1; j++)
                    cout << "*" ;
                cout << endl ;
            }
            break;
        case 6:
            int num;
            float e;
            cout<<"Ejecutando problema 6 ..."<<endl;
            cout<<"Ingrese el numero de aproximacion para calcular e: "<<endl;
            cin>>num;
            e = 2 + (float)1/Factorial(num);
            cout<<"e es aproximadamente: "<<e<<endl;
            break;
        case 7:
            int N;
            cout<<"Ejecutando problema 7 ..."<<endl;
            cout<<"Ingrese el numero: "<<endl;
            cin>>N;
            SumaFibonacci(N);
            break;
        case 8:
            int a;
            int b;
            int c;
            int total1;
            int total2;
            cout<<"Ejecutando problema 8 ..."<<endl;
            cout<<"Ingrese el primer numero: "<<endl;
            cin>>a;
            cout<<"Ingrese el segundo numero: "<<endl;
            cin>>b;
            cout<<"Ingrese el  tercer numero: "<<endl;
            cin>>c;
            total1=Multiplo(a,c);
            total2=Multiplo(b,c);
            cout<<"="<<total1+total2<<endl;
            break;
        case 9:
            int number;
            int suma;
            int digito;
            int resultado;
            int digitos[10];
            int i;
            cout<<"Ejecutando problema 9 ..."<<endl;
            cout<<"Ingrese el numero entero: "<<endl;
            cin>>number;

            while(number>0){
                digitos[i] = number%10;
                number = number/10;
                i++;
            }
            for(int j=i-1; j>=0; j--){
                digito= digitos[j];
                resultado = Potencia(digito,digito);
                suma += resultado;
            }
            cout<<"El resultado de la suma es: "<<suma<<endl;//La primera vez imprime bien, después aparece con un error.
            break;
        case 10:
            int numero;
            int cont;
            bool prueba;
            cout<<"Ejecutando problema 10 ..."<<endl;
            cout<<"Ingrese el enesimo numero primo: "<<endl;
            cin>>numero;

            for(int i=1; i<=numero; i++){//NO entra al for
                prueba = EsPrimo(i);
                if(prueba == true){
                    cont+=1;
                    if(cont==numero){
                        cout<<"El primo numero "<<numero<<" es: "<<endl;//NO se como poner el numero
                    }
                }
            }

            break;
        case 11:
            cout<<"Ejecutando problema 11 ..."<<endl;
            break;
        case 12:
            cout<<"Ejecutando problema 12 ..."<<endl;
            break;
        case 13:
            int Num;
            int Suma;
            cout<<"Ejecutando problema 13 ..."<<endl;
            cout<<"Ingrese un numero entero positivo: ";
            cin>>Num;
            for(int i=2; i<Num;i++){
                int aumento = 2;
                bool esPrimo = true;

                while(esPrimo && aumento<i){
                    if(i % aumento == 0){
                        esPrimo = false;
                    }
                    else{
                        aumento++;
                    }
                }
                if(esPrimo){
                    Suma += i;
                }
            }
            cout<<"El resultado de la suma es: "<<Suma<<endl;//No se libera la variable, sigue guardando los valores.
            break;
        case 14:
            int palmax, m1, m2;
            cout<<"Ejecutando problema 14 ..."<<endl;
            for (int i = 999; i >= 100; i--)
            {
                for (int j = 999; j >= 100; j--)
                {
                    int temp;
                    temp = i * j;
                    if(esPalindromo(temp) && (temp > palmax)){
                        palmax = temp, m1 = i, m2 = j;
                    }
                }
            }
            cout << m1 <<"*"<<m2<<"="<<palmax<<endl;
            break;
        case 15:
            cout<<"Ejecutando problema 15 ..."<<endl;
            break;
        case 16:
            cout<<"Ejecutando problema 16 ..."<<endl;
            break;
        case 17:
            cout<<"Ejecutando problema 17 ..."<<endl;
            break;
        default:
            if(opcion!=0)
                cout<<"La opcion no valida"<<endl;
            break;
        }
    }
    return 0;
}

void MenuPrincipal(){
    cout<<endl;
    cout<<"*********** Menu practica 1 ***********"<<endl;
    cout<<endl;
    cout<<"Seleccione una opcion"<<endl;
    cout<<endl;
    cout<<"1. Vocal, consonante o ninguna de las 2"<<endl;
    cout<<"2. Minima combinacion de billetes y monedas"<<endl;
    cout<<"3. Mes y dia validos"<<endl;
    cout<<"4. Dos horas y sumarlas"<<endl;
    cout<<"5. Patron con numero impar"<<endl;
    cout<<"6. Valor aproximado del numero de euler"<<endl;
    cout<<"7. Serie Fibonacci"<<endl;
    cout<<"8. Suma de los multiplos de a y b que sean menores a c"<<endl;
    cout<<"9. Suma de todos los digitos elevados asi mismos"<<endl;
    cout<<"10. El enesimo numero primo"<<endl;
    cout<<"11. Minimo comun multiplo entre 1 y el ingresado"<<endl;
    cout<<"12. Maximo factor primo de un numero"<<endl;
    cout<<"13. Suma de todos los primos menores que el numero ingresado"<<endl;
    cout<<"14. Numero palindromo mas grande"<<endl;
    cout<<"15. Suma de los numeros en la diagonal de una espiral"<<endl;
    cout<<"16. Serie de Collatz"<<endl;
    cout<<"17. Numero triangular"<<endl;
    cout<<"0.Para salir"<<endl;
}

bool EsVocal(char letra){
    char vocales[]={'A','E','I','O','U'};
    if(letra>=97)
        letra-=32;
    for(int i=0; i<5; i++)
    {
        if(vocales[i]==letra)
            return true;
    }
    return false;
}

void BilletesMonedas(int devuelta){
    int billete50000=0;
    int billete20000=0;
    int billete10000=0;
    int billete5000=0;
    int billete2000=0;
    int billete1000=0;
    int moneda500=0;
    int moneda200=0;
    int moneda100=0;
    int moneda50=0;

    if(devuelta >= 50000){
        billete50000 = devuelta / 50000;
        devuelta = devuelta - (billete50000 * 50000);
    }
    if(devuelta >= 20000){
        billete20000 = devuelta / 20000;
        devuelta = devuelta - (billete20000 * 20000);
    }
    if(devuelta >= 10000){
        billete10000 = devuelta / 10000;
        devuelta = devuelta - (billete10000 * 10000);
    }
    if(devuelta >= 5000){
        billete5000 = devuelta / 5000;
        devuelta = devuelta - (billete5000 * 5000);
    }
    if(devuelta >= 2000){
        billete2000 = devuelta / 2000;
        devuelta = devuelta - (billete2000 * 2000);
    }
    if(devuelta >= 1000){
        billete1000 = devuelta / 1000;
        devuelta = devuelta - (billete1000 * 1000);
    }
    if(devuelta >= 500){
        moneda500 = devuelta / 500;
        devuelta = devuelta - (moneda500 * 500);
    }
    if(devuelta >= 200){
        moneda200 = devuelta / 200;
        devuelta = devuelta - (moneda200 * 200);
    }
    if(devuelta >= 100){
        moneda100 = devuelta / 100;
        devuelta = devuelta - (moneda100 * 100);
    }
    if(devuelta >= 50){
        moneda50 = devuelta / 50;
        devuelta = devuelta - (moneda50 * 50);
    }

    cout<<"50000: "<<billete50000<<endl;
    cout<<"20000: "<<billete20000<<endl;
    cout<<"10000: "<<billete10000<<endl;
    cout<<"5000: "<<billete5000<<endl;
    cout<<"2000: "<<billete2000<<endl;
    cout<<"1000: "<<billete1000<<endl;
    cout<<"500: "<<moneda500<<endl;
    cout<<"200: "<<moneda200<<endl;
    cout<<"100: "<<moneda100<<endl;
    cout<<"50: "<<moneda50<<endl;
    cout<<"Faltante: "<<devuelta<<endl;
}

void MesDia(int mes, int dia){

    if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
        if(dia>=1 && dia<=31){
            cout<<dia<<"/"<<mes<<" es una fecha valida"<<endl;
        }
        else{
            cout<<dia<<"/"<<mes<<" es una fecha invalida"<<endl;
        }
    }
    else if(mes==4 || mes==6 || mes==9 || mes==11){
        if(dia>=1 && dia<=30){
            cout<<dia<<"/"<<mes<<" es una fecha valida"<<endl;
        }
        else{
            cout<<dia<<"/"<<mes<<" es una fecha invalida"<<endl;
        }
    }
    else if(mes==2){
        if(dia>=1 && dia<=28){
            cout<<dia<<"/"<<mes<<" es una fecha valida"<<endl;
        }
        else if(dia==29){
            cout<<dia<<"/"<<mes<<" es valida en bisiesto"<<endl;
        }
        else{
            cout<<dia<<"/"<<mes<<" es una fecha invalida"<<endl;
        }
    }
    else{
        cout<<mes<<" es un mes invalido"<<endl;
    }
}

void SumaHoras(int horaInicio,int horaMas){
    int hora1=0;
    int minutos1=0;
    int minutos2=0;
    int hora2=0;
    int horaFin=0;
    int minutosFin=0;

    hora1 = horaInicio / 100;
    minutos1 = horaInicio - (100*hora1);
    hora2 = horaMas / 100;
    minutos2 = horaMas - (100*hora2);
    horaFin= hora1 + hora2;
    minutosFin = minutos1 + minutos2;

    if (minutosFin >=59){
        minutosFin = minutosFin - 60;
        horaFin = horaFin +1;
    }

    if (horaFin > 24)
        cout<<horaFin<<":"<<minutosFin<<" Es un tiempo invalido"<<endl;
    else{
        if(horaFin < 10 && minutosFin < 10){
            cout<<"La hora es 0"<<horaFin<<"0"<<minutosFin<<endl;
        }
        else if(horaFin < 10 && minutosFin > 10){
            cout<<"La hora es 0"<<horaFin<<minutosFin<<endl;
        }
        else if(horaFin > 10 && minutosFin < 10){
            cout<<"La hora es "<<horaFin<<"0"<<minutosFin<<endl;
        }
        else{
            cout<<"La hora es "<<horaFin<<minutosFin<<endl;
        }
    }


}

int Potencia(int base, int exp){
    int x=1;
    for(int i=0; i<exp; i++){
        x *= base;
    }
    return x;
}

int Factorial(int num){
    long factorial=1;
    for(int i=2; i<num; i++){
        factorial *= i;
    }
    return factorial;
}

bool EsPrimo(int numero){
    int cont=0;
    for(int i=1; i<=numero; i++){
        if(numero%i==0){
            cont++;
        }
    }
    if(numero==1){
        return false;
    }
    else if(cont>2){
        return false;
    }
    else{
        return true;
    }
}

void SumaFibonacci(int numero){
    int suma=0;
    int x=0;
    int y=1;
    int z=0;

    for(int i=1; i<numero; i++){
        z=x+y;
        x=y;
        y=z;

        if(z%2==0 && z<=numero){
            suma +=z;
        }
    }
    cout<<"El resultado de la suma es: "<<suma<<endl;
}

int Multiplo(int a, int c){

    int multiplos=0;
    int total=0;


    for(int i=1; i<20; i++){
        multiplos = a*i;
        if(multiplos < c){
            cout<<multiplos<<"+";
            total += multiplos;
        }
    }

    return total;
}

bool esPalindromo(int numero) {
    int numeroOriginal = numero;
    int reverso = 0;

    while (numero > 0) {
        int digito = numero % 10;
        reverso = reverso * 10 + digito;
        numero /= 10;
    }

    return (numeroOriginal == reverso);
}
