/*
TITULO:EL USO DEL IF 
AUTOR:ALFREDO TITO BENAVIDES
DESCRIPCION: UN ALGOTIRMO QUE ME DIGA SI EL NUMERO INGRESADO ES PAR O IMPAR.
FECHA:12/01/2024
*/
#include <iostream>
using namespace std;

int main() {
	int numero;
	
	// Solicitar al usuario que ingrese un número
	cout << "Ingresa un número: ";
	cin >> numero;
	
	// Verificar si el número ingresado es par o impar
	if (numero % 2 == 0) {
		cout << "El número ingresado (" << numero << ") es PAR." << endl;
	} else {
		cout << "El número ingresado (" << numero << ") es IMPAR." << endl;
	}
	
	return 0;
}



