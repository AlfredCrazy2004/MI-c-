/*
TITULO:EL USO DEL IF 
AUTOR:ALFREDO TITO BENAVIDES
DESCRIPCION: SUMA DE 10+5 Y UN MENSAJE BONITO.
FECHA:12/01/2024
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int resultado = 0;
	cout<<"¿Cuanto es 10+5? ";
	cin>>resultado;
	if(resultado == 10+5)
	{
		cout <<"Respuesta correcta, Felicitaciones! \n";
	}
	else
	   {
		cout<<"Respuesta incorrecta! \n";
	}
	return 0;
}

