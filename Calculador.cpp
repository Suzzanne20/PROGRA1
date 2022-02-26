#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
void menu();
int suma(int, int );
int resta(int, int );
int mult(int, int );
int divi(int, int );
int result, num1, num2, opc;
const string msj="El resultado del calculo es: ";
const string calc="\nRealizando calculo.... ";
int main ()
{
    menu();
    cout<<"\nIngrese la Opcion deseada:"<<endl;
    cin>> opc;
    cout<<"\nIngrese el primer numero:"<<endl;
    cin>> num1;
    cout<<"\nIngrese el segundo numero:"<<endl;
    cin>> num2;
    cout<<" "<<endl;

    switch(opc){
        case 1:
            suma(num1,num2);
            cout<<msj<<result<<endl;
            break;
        case 2:
            resta(num1,num2);
            cout<<msj<<result<<endl;
            break;
        case 3:
            mult(num1,num2);
            cout<<msj<<result<<endl;
            break;
        case 4:
            divi(num1,num2);
            cout<<msj<<result<<endl;
            break;
        default:
            cout<<"\n Opcion Invalida"<<endl;
            break;

    }
    return 0;
}


    void menu(){
        cout<<"!! Calculadora !!"<<endl;
        cout<<"=============================================="<<endl;
        cout<<"Ingrese el # de opción del calculo a realizar"<<endl;
        cout<<"\n 1. SUMA "<<endl;
        cout<<"\n 2. RESTA "<<endl;
        cout<<"\n 3. DIVISION "<<endl;
        cout<<"\n 4. MULTIPLICACION "<<endl;
        cout<<"==============================================\n "<<endl;
    }

    int suma(int num1, int num2){
        cout<<calc<<endl;
        result=num1+num2;
        return result;
    }

