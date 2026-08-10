/* escribe  un programa que solicite que solicite una nota del 0 al 100. El programa debe verificar 
90 a 100 : Excelente
70 a 89 : Aprobado
51 a 69 : En recuperacion
0 a 50 : Reprobado
*/

#include <iostream>

using namespace std;

int main() {
	// Declaro variable nota
	int nota;
	// se lee por teclado y se almacena en la variable nota
	cout << "Ingrese la nota del estudiante (0-100)";
	cin >> nota;
	//Validacion de rango
	if (nota < 0 || nota > 100) {
		cout << "Error, La nota ingresada no es valida" << endl;
	}
	else if (nota >= 90) {
		cout << "Estado: Excelente" << endl;
	}
	else if (nota >= 70) {
		cout << "Estado: Aprobado" << endl;
	}
	else if (nota >= 51) {
		cout << "Estado: Recuperacion" << endl;
	}
	else {
		cout << "Estado: Reprobado" << endl;
	}

	return 0;
}