#include <iostream> //libreria permite salida e ingreso de datos
#include <vector>  //Libreria para que pueda trabajar con listas y vectores
#include <string>  //Libreria para manejar texto

using namespace std; //permite omitir el std en cada salida de mensaje dentro del codigo


int main() {

	//Declaracion de vectores
	vector <string> nombres;
	vector <int> edades;        //int es para enteros
	vector <int> cedulas;

	//Creacion de variables
	string nombre;
	int edad;
	int ci;
	int opcion;

	//Colocar el menu para ingresar datos
	
	do {
		//do para que se repita el menu
		cout << "========SISTEMAS DE REGISTRO=========";
		cout << "1.- Registrar nombre de la persona: ";
		cout << "2.- Mostrar todos los registros: ";
		cout << "3.- Eliminar posicion. ";
		cout << "4.- Salir. ";

		if (opcion == 1) {
			cout << "Ingreso de datos de la persona: ";
			cout << "Ingrese su nombre: ";
			cin >> nombre;
			cout << "Ingrese su edad: ";
			cin >> edad;
			cout << "Ingrese su Cedula: ";
			cin >> ci;

			//luego agregar la variable nombre al vector nombres y sucesivamente
			nombres.push_back(nombre);
			edades.push_back(edad);
			cedulas.push_back(ci);

			//Imprimir mensaje
			cout << "¡Registro Exitoso!. \n";

			
		}
		//if else es para cuando se tiene mas opciones
		else if (opcion == 2) {
			if (nombres.empty()) {       //empty es un metodo para ver si tengo algo en la lista
				cout << "La lista esta vacia. ";
			}
			else {
				cout << "Lista de Registro de personas. ";
				//bucle for para recorrer el vector desde el inicio o hasta lista.size()
				for (size_t i = 0; i < nombres.size(); i++) {
					//el iterador toma el valor entero //i<nombres; i++ va sumando de cero a mas incrementando de 1 a 1
					cout << "Posicion " << i << "--";
					cout << "Nombres" << nombres[i];
					cout << "Edades" << edades[i];
					cout << "CI" << cedulas[i]; "\n";
				}
			}
		}
		//Eliminar por posicion
		else if (opcion == 3) {
			if (nombres.empty()) {       //empty es un metodo para ver si tengo algo en la lista
				cout << "La lista esta vacia. ";
		}
			else {
				int pos;   //se crea la variable pos   // se pueede ver que dato se puede eliminar
				cout << "Ingrese la posicion que desea eliminar. ";
				cin >> pos;

				//Validamos la posicion
				//si pos 
				if (pos == 0 && pos < nombres.size()) {
					nombres.erase(nombres.begin() + pos);   //begin ayuda a escoger la posicion que se desea eliminar
					edades.erase(edades.begin() + pos);
					cedulas.erase(cedulas.begin() + pos);
					cout << "Registro Eliminado. ";
				}
				else {
					cout << "Error, posicion invalida.";
				}
			}
	}
	
		else if (opcion != 4) {
			cout << "Opcion Invalida. Intente nuevamente";
		}
	} while (opcion != 4);

		cout << "\n Programa Finalizado. Hasta Luego.";
		
		return 0;

}