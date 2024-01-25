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
#include <cmath> // Necesario para la funci�n sqrt
using namespace std;

// Funci�n para ingresar n�meros
void ingresarNumeros(int& n1, int& n2) {
	cout << "Ingrese el primer numero: ";
	cin >> n1;
	cout << "Ingrese el segundo numero: ";
	cin >> n2;
}

// Funci�n para sumar dos n�meros
int sumarNumeros(int n1, int n2) {
	return n1 + n2;
}

// Funci�n para verificar si un n�mero es primo
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
		// Men�
		cout << "\Menu:\n";
		cout << "1. Ingresar numeros\n";
		cout << "2. Sumar numeros\n";
		cout << "3. Verificar si el numero es primo\n";
		cout << "0. Salir\n";
		cout << "Ingrese su opcion: ";
		cin >> opcion;
		
		switch (opcion) {
		case 1:
			// Opci�n 1: Ingresar n�meros
			ingresarNumeros(numero1, numero2);
			break;
		case 2:
			// Opci�n 2: Sumar n�meros
			suma = sumarNumeros(numero1, numero2);
			cout << "La suma de los numeros es: " << suma << endl;
			break;
		case 3:
			// Opci�n 3: Verificar si un n�mero es primo
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
			// Opci�n 0: Salir del programa
			cout << "Saliendo del programa. �Hasta luego!\n";
			break;
		default:
			// Opci�n no v�lida
			cout << "Opcion no valida. Intente de nuevo.\n";
			break;
		}
		
	} while (opcion != 0);
	
	return 0;
}
