//Estructura de datos

#include <iostream> //libreria permite salida e ingreso de datos
#include <vector>  //Libreria para que pueda trabajar con listas y vectores
#include <string>  //Libreria para manejar texto

using namespace std; //permite omitir el std en cada salida de mensaje dentro del codigo


int main3() {
	//1.- Declarar vector y variables

	vector <string> lista;
	string productos;
	int opcion;

	//Bucle do-while ejecuta el codigo al menos una vez y se repite
	do {
		cout << "------Mi lista de compras------\n";
		cout << "1.- Agregar producto: \n";
		cout << "2.- Eliminar por posicion producto  \n";
		cout << "3.- Mostrar la lista \n";
		cout << "4.- Salir \n";

		cout << "Seleccione una opcion: \n";
		cin >> opcion;

		//opcion 1 : Agregar
		if (opcion == 1) {
			cout << "Escriba el nombre del producto: ";
				cin >> productos;
			lista.push_back(productos);
			cout << "Producto agregado correctamente. \n";
		}
		//Opcion 2: Eliminar
		else if (opcion == 2) {
			// Revisamos si la lista esta vacia
			if (lista.empty()) {
				cout << "NO hay nada que borrar, lista vacia. ";
			}
			else {
				int pos; //declaro variable
				cout << "Ingrese la posicion a borrar de (0 en adelante " << lista.size() - 1 << "):";
				cin >> pos;

				//Validacion: comprueba que la posicion este dentro del rango existente
				if (pos >= 0 && pos < lista.size()) {    //&& para tener dos condiciones en una condicion
					//size es un metodo que ayuda a ver el tamaño del vector
					//lista.begin() da un iterador al inicio; se le suma 'pos' para ir al elemento exacto
					lista.erase(lista.begin() + pos);  //Elimina el elemento en la posicion indicada
					cout << "Producto eliminado con exito. \n";
				}
				else {
					//Mensaje de error si la posicion ingresada esta fuera de rango
					cout << "Posicion invalida \n";
				}
			}
			

		}
		//Opcion 3 MOstrar
		else if (opcion == 3) {
			if (lista.empty()) {
				cout << "La lista esta vacia. \n";
			}
			else {
				cout << "---Tus Productos----\n";
				//BUcle for para recorrer el vector desde el inicio de la lista.size() -1
				for (size_t i = 0; i < lista.size(); i++) {             //size_t sirve para verificar si tengo #enteros
					//Imprime la posicion (indice) junto con el valor guardado en dicha posicion
					cout << i << " . " << lista[i] << "\n";
				}
			}
		}
	}
	while (opcion != 4); //ciclo finaliza cunado el usuario coloque 4 o diferentes a ese numero
	cout << "Hasta luego" << endl; //imprimimos salida
	return 0;
}