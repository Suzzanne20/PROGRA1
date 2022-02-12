//EJERCICIO #1 - PROGRAMACIÓN 1

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main ()
{
	int opc;
	float num1, num2, result;
cout<<"!! Calculadora !!"<<endl;
cout<<"=============================================="<<endl;	
cout<<"Ingrese el # de opción del calculo a realizar"<<endl;
cout<<"\n 1. SUMA "<<endl;
cout<<"\n 2. RESTA "<<endl;
cout<<"\n 3. DIVISION "<<endl;
cout<<"\n 4. MULTIPLICACION "<<endl;
cout<<"==============================================\n "<<endl;
cout<<"Ingrese la Opcion deseada:"<<endl;
cin>> opc;

cout<<"\nIngrese el primer numero:"<<endl;
cin>> num1;
cout<<"\nIngrese el segundo numero:"<<endl;
cin>> num2;

switch(opc){
	case 1:
		cout<<"\n Realizando Calculo...."<<endl;
		result=num1+num2;
		cout<<"\n >>> El resultado es: "<<result<<endl;
		break;
	case 2:
		cout<<"\n Realizando Calculo...."<<endl;
		result=num1-num2;
		cout<<"\n >>> El resultado es: "<<result<<endl;
		break;
	case 3:
		cout<<"\n Realizando Calculo...."<<endl;
		result=num1/num2;
		cout<<"\n >>> El resultado es: "<<result<<endl;
		break;
	case 4:
		cout<<"\n Realizando Calculo...."<<endl;
		result=num1*num2;
		cout<<"\n >>> El resultado es: "<<result<<endl;
		break;
	default:
		cout<<"\n Opcion Invalida"<<endl;
		break;
		
}
return 0;
}