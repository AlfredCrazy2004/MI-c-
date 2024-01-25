/*
Autor: Alfredo Tito Benavides
Descripcion: Realizar un menu con 3 opciones:
-1 Ingresar numero
-2 Sumar los numeros
-3 Verificar si un numero es primo 
Todo con funciones, parametros con referencia
Fecha: 24/01/24
*/
#include <iostream>
#include <cmath> // Necesario para la función sqrt
using namespace std;

// Función para ingresar números
void ingresarNumeros(int& n1, int& n2) {
	cout << "Ingrese el primer numero: ";
	cin >> n1;
	cout << "Ingrese el segundo numero: ";
	cin >> n2;
}

// Función para sumar dos números
int sumarNumeros(int n1, int n2) {
	return n1 + n2;
}

// Función para verificar si un número es primo
bool esPrimo(int numero) {
	if (numero < 2) {
		return false;
	}
	for (int i = 2; i <= sqrt(numero); ++i) {
		if (numero % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int opcion;
	int numero1, numero2;
	int suma;
	
	do {
		// Menú
		cout << "\Menu:\n";
		cout << "1. Ingresar numeros\n";
		cout << "2. Sumar numeros\n";
		cout << "3. Verificar si el numero es primo\n";
		cout << "0. Salir\n";
		cout << "Ingrese su opcion: ";
		cin >> opcion;
		
		switch (opcion) {
		case 1:
			// Opción 1: Ingresar números
			ingresarNumeros(numero1, numero2);
			break;
		case 2:
			// Opción 2: Sumar números
			suma = sumarNumeros(numero1, numero2);
			cout << "La suma de los numeros es: " << suma << endl;
			break;
		case 3:
			// Opción 3: Verificar si un número es primo
			int numeroPrimo;
			cout << "Ingrese un numero para verificar si es primo: ";
			cin >> numeroPrimo;
			if (esPrimo(numeroPrimo)) {
				cout << numeroPrimo << " es primo." << endl;
			} else {
				cout << numeroPrimo << " no es primo." << endl;
			}
			break;
		case 0:
			// Opción 0: Salir del programa
			cout << "Saliendo del programa. ¡Hasta luego!\n";
			break;
		default:
			// Opción no válida
			cout << "Opcion no valida. Intente de nuevo.\n";
			break;
		}
		
	} while (opcion != 0);
	
	return 0;
}
