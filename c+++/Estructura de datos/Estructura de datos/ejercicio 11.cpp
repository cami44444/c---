//escriba un programa en c++ que realice las sgts acciones:
//1. Declare 2 variables enteras (num1 y num2) e inicialicelas con los valores 15 y 20 resp
//2. Calcule la suma de amobos numeros y almacene el resultado en una variable llamada suma
//3. Muestre en pantalla los valores de los dos numeros y el resultado de la suma realizada

//Inclusion de librerias: que permite usar para imprimir codigo
#include <iostream>

//evita que en todo el codigo escribamos o terminemos
using namespace std;

//esta es la funcion principal o puente de entrada donde se inicia el programa
int main11() {

	//declaracion de variables con tipo de dato
	int num1 = 15;
	int num2 = 20;
	int suma;
	float num3 = 20; //con un decimal
	double num4 = 20.50; // con dos decimales
	char num5 = 'da';

	//proceso u operacion aritmetica
	suma = num1 + num2;

	//salida de pantalla
	//print("el primer numero es")
	cout << "El primer numero es: " << num1;
	cout << "El segundo numero es: " << num2;
	cout << "El resultado de la suma es: " << suma;
	return 0;

}