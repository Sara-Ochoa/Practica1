#include <iostream>

using namespace std;

bool EsVocal(char letra);

int main()
{
    int opcion=1;

    while(opcion!=0)
    {
        cout<<endl;
        cout<<"*********** Menu practica 1 ***********"<<endl;
        cout<<endl;
        cout<<"Seleccione una opcion"<<endl;
        cout<<endl;
        cout<<"1. Es vocal, consonante o ninguna de las 2"<<endl;
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
        cout<<"12. "<<endl;
        cout<<"13. "<<endl;
        cout<<"14. "<<endl;
        cout<<"15. "<<endl;
        cout<<"16. "<<endl;
        cout<<"17.Problema diesisiete"<<endl;
        cout<<"0.Para salir"<<endl;
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
            cout<<"Ejecutando problema 2"<<endl;
            break;
        case 3:
            cout<<"Ejecutando problema 3"<<endl;
            break;
        case 4:
            cout<<"Ejecutando problema 4"<<endl;;
            break;
        case 5:
            cout<<"Ejecutando problema 5"<<endl;;
            break;
        case 6:
            cout<<"Ejecutando problema 6"<<endl;;
            break;
        case 7:
            cout<<"Ejecutando problema 7"<<endl;;
            break;
        case 8:
            cout<<"Ejecutando problema 8"<<endl;;
            break;
        case 9:
            cout<<"Ejecutando problema 9"<<endl;;
            break;
        case 10:
            cout<<"Ejecutando problema 10"<<endl;;
            break;
        case 11:
            cout<<"Ejecutando problema 11"<<endl;;
            break;
        case 12:
            cout<<"Ejecutando problema 12"<<endl;;
            break;
        case 13:
            cout<<"Ejecutando problema 13"<<endl;;
            break;
        case 14:
            cout<<"Ejecutando problema 14"<<endl;;
            break;
        case 15:
            cout<<"Ejecutando problema 15"<<endl;;
            break;
        case 16:
            cout<<"Ejecutando problema 16"<<endl;;
            break;
        case 17:
            cout<<"Ejecutando problema 17"<<endl;;
            break;
        default:
            if(opcion!=0)
                cout<<"La opcion no valida"<<endl;
            break;
        }
    }
    return 0;
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
