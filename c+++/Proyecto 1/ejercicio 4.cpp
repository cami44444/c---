//Un establecimiento ofrece un 15% de descuento en compras cuyo monto supere los 100$, 
// no se aplica ningun descuento. 
// Elabora un programa que solicite el monto total de la compra y calcule el precio final a pagar.

#include <iostream>

using namespace std;

int main14() {
	double montoTotal, totalPagar;

	cout << "Ingrese el monto total de la compra ($): ";
	cin >> montoTotal;

	if (montoTotal > 100.0) {
		double descuento = montoTotal * 0.15;
		totalPagar = montoTotal - descuento;
		cout << "Aplica un descuento del 15%: ($" << descuento << ")" << endl;
	}
	else {
		totalPagar = montoTotal;
		cout << "No aplica descuento para este monto. " << endl;
	}

	cout << "EL total a pagar es: ($)" << totalPagar << endl;

	return 0;

}