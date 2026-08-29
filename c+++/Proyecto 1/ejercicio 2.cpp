//Desarrolle un programa que solicite al usuario el ingreso de 5 notas por teclado y ejecute las sgts acciones:
//Procesamiento de datos:calcule la suma total d elas 5 notas y determinar promedio
//Resultados: Imprima en pantalla la suma total y el promedio obtendido
//Evaluacion de rendimiento: verificar el estado final del estudiante. Si el promedio es mayor o igual a 61.0 muestre el mensahe "El estudainte aprobo"
//en caso contrario, muestre "El estudiante reprobo"

#include <iostream>

using namespace std;

int main12() {

	double nota1, nota2, nota3, nota4, nota5;
	double suma, promedio;

	cout << "------------Calculadora de promedio de notas " << endl << endl;
	
	cout << " Ingrese la primera nota: ";
    cin >> nota1;

	cout << " Ingrese la segunda nota: ";
	cin >> nota2;

	cout << " Ingrese la tercera nota: ";
	cin >> nota3;

	cout << " Ingrese la cuarta nota: ";
	cin >> nota4;

	cout << " Ingrese la quinta nota: ";
	cin >> nota5;

	suma = nota1 + nota2 + nota3 + nota4 + nota5;
	promedio = suma / 5;

	cout << "La suma total de todas las notas es: " << suma << endl;
	cout << "El promedio final de las notas es: " << promedio << endl;

	if (promedio >= 61.0) {
		cout << "El estudiante aprobo." << endl;
    }
	else {
		cout << "El estudiante reprobo" << endl;
	}

	return 0;

}