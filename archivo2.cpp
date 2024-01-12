/*
ITULO: PROGRAMA PROBANDO LIMITES.
AUTOR: ALFREDO TITO BENAVIDES.
DESCRIPCION:PRIMER PROGRAMA PARA ANALIZAR SU ESTRUCTURA.
FECHA:11/01/24
*/

#include <iostream>//INCLUSION DE LA LIBRERIA DE ENTRADA Y SALIDA.
using namespace std;//EL USO DEL ESPACIO DE NOMBRE PARA STD DE LA I/O 

int main(int argc, char *argv[])//FUNCION PRINCIPAL MAIN PARA RETORNAR UN ENTERO. 
{
	int numero_entero;
	unsigned int numero_entero_s;
	float numero_decimal;
	double numero_decimal_g;
	//Asignando valores limites de los tipos de datos
	numero_entero = 2147483647;//Valor limite de rango
	cout <<" Numero entero pequeño: " << numero_entero << endl;
	numero_entero_s = 4294967295; //Valor fuera del rango
	cout <<" Numero entero pequeño positivo: " <<numero_entero_s <<endl;

	return 0;
}

