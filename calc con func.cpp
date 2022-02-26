//EJERCICIO SUMA CON FUNCIONES- PROGRAMACIÓN 1

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
void menu();
int resta(int, int );
int result, num1, num2;
const string msj="El resultado del calculo es: ";

int main ()
{	
	menu();
	cout<<"\nIngrese el primer numero:"<<endl;
	cin>> num1;
	cout<<"\nIngrese el segundo numero:"<<endl;
	cin>> num2;
	cout<<" "<<endl;
	resta(num1,num2);
	cout<<msj<<result<<endl;
	return 0;

}

void menu(){
	cout<<"!!Bienvenido!!"<<endl;
	cout<<"================="<<endl;	
	cout<<" Calculo de Resta"<<endl;
	cout<<"=================\n "<<endl;

}

int resta(int num1, int num2){
	result=num1-num2;
	return result;	
}


