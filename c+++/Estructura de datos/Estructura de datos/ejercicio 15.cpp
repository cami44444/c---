//Escribe un programa que solicite una nota del 0 al 100. El programa debe verificar si la nota ingresada es valida y luego mostrar la condicion academica del estudiante segun la sgt escale
//90 100 excelente
//70 a 89 aprobado
//51 a 69 en recuperacion
//0 a 50 reprobado

#include <iostream>

using namespace std;

int main15() {
	int nota;

	cout << "Ingrese la nota del estudiante (0-100): ";
	cin >> nota;

	//validacion de rango correcto
	if (nota < 0 || nota > 100) {
		cout << "Error: la nota ingresada no es valida. debe estar entre 0 y 100." << endl;
	}
	else if (nota >= 90) {
		cout << "Estado: Excelente. " << endl;
	}
	else if (nota >= 70) {
		cout << "Estado: Aprobado. " << endl;
	}
	else if (nota >= 51) {
		cout << "Estado: En recuperacion. " << endl;
	}
	else {
		cout << "Estado: Reprobado. " << endl;
	}

	return 0;
}