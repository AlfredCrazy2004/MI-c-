/*
TITULO:EL USO DEL CHAR  
AUTOR:ALFREDO TITO BENAVIDES
DESCRIPCION: EL USO BASICO DE LA TABLA ASCII
FECHA:12/01/2024
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//DEFINICION Y ASIGNACION DE VALORES CHAR
	char letra;
	letra = 'L' ;
	cout << "IMPRIMIENDO LA LETRA 'L' :"<<letra<<endl;
	//LETRA = "LL";//ERROR POR ASIGNAR MAS DE UN CARACTER
	//ASIGNANDO VALORES NUMERICOS
	letra = 65;//ASCII ES LA LEYRA A
	cout << "IMPRIMIENDO ASCII 65 :"<<letra<<endl;
	return 0;
}

