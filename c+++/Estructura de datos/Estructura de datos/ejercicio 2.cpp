//Estructura de datos

#include <iostream> //permite salida e ingreso de datos
#include <vector>  //para que pueda trabajar con listas y vectores

using namespace std; //permite omitir el std en cada salida de mensaje dentro del codigo

int main2(){
	//1.- Declarar un vector vacio
	vector <int> numeros;
	//Declarar una variable
	int valor;

	//Verificar si esta vacio al arrancar el programa

	if (numeros.empty()) { //empty sirve para ver el tamaño o la longitud de mi vector. [en python es lend]
		cout << "El vector esta vacio actualmente. ";
	}

	//2.- Insertar datos por teclado
	cout << "Ingrese el numero para insertar: ";
	cin >> valor;
	numeros.push_back(valor);

	//3.- Eliminar el ultimo elemento ingresado
	numeros.pop_back();

	//4.- Mostrar lista
		if (numeros.empty()) {
			cout << "La lista esta vacia. ";
		}
		else {
			cout << "Contenido actual de la lista es: ";
			for (int i : numeros) {
				cout << i << " ";
			}
		}
	cout << endl; //salto de linea
	return 0;


}