//Crea un programa que simule el acceso a un cajero automatico. 
//Defina un pin (1234). Utiliza un bucle while para solicitar continuamente el pin al usuario hasta qye ingrese el correcto. Dentro del bucle,
//usa if-else para mostrar un mensaje de error si el pin es incorrecto o dar bienvenida y terminar el bucle si es correcto.

#include <iostream>

using namespace std;

int main16() {
	const int pin_correcto = 1234;
	int pinngresado = 0;
	int intentos = 0;

	while (pinngresado != pin_correcto) {
		cout << "Ingresa tu pin de 4 digitos: ";
		cin >> pinngresado;
		intentos++;

		if (pinngresado == pin_correcto) {
			cout << "Acceso concedido! Lograste ingresar en " << intentos << "intentos. " << endl;
		}
		else {
			cout << "Pin incorrecto. Intentalo de nuevo. \n" << endl;
		}
	}
	return 0;
}