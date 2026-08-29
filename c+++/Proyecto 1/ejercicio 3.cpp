//crea un programa que pida 3 numeros enteros al usuario y determine cual de ellos es el mayor. Si los 3 numeros son iguales, 
// el programa debe mostrar un mensaje informandolo

#include <iostream>
using namespace std;

int main13() {
	int n1, n2, n3;

	cout << "Ingresar el primer numero: ";
	cin >> n1;
	cout << "Ingresar el segundo numero: ";
	cin >> n2;
	cout << "Ingresar el tercer numero: ";
	cin >> n3;

	if (n1 == n2 && n2 == n3) {
		cout << "Los tres numeros son iguales. " << endl;
	}
	else if (n1 >= n2 && n1 >= n3) {
		cout << "El numero mayor es: " << n1 << endl;
	}
	else if (n2 >= n1 && n2 >= n3) {
		cout << "El numero mayor es; " << n2 << endl;
	}
	else {
		cout << "El numero mayor es: " << n3 << endl;
	}

	return 0;
}