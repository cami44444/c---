//Estructura de datos

#include <iostream> //permite salida e ingreso de datos
#include <vector>  //para que pueda trabajar con listas y vectores

using namespace std; //permite omitir el std en cada salida de mensaje dentro del codigo

int main1() {
	vector <int> numero; //[solo para numeros enteros] =[10,15,20,30]
	               //primero posicion empieza por el cero
				   
				   
	//1.- Insertar datos o agregar elemento
	numero.push_back(10);
	numero.push_back(20);
	numero.push_back(30);

//2.- INsertar un dato en alguna posicion especifica de mi vector o lista
	numero.insert(numero.begin() + 1, 15);   //[10,15,20,30]

//3.- Eliminar el ultimo elemento de la lista o vector
	numero.pop_back();

//4.-Imprimir y mostrar el vector

	cout << "vector resultante: ";
	for (int i : numero) {
		cout << i << ""; //salida esperada [10,15,20]
	}
	return 0;
}