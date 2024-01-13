/*
TITULO:EL USO DE STRING  
AUTOR:ALFREDO TITO BENAVIDES
DESCRIPCION: MOSTRAR BIENVENIDO A LA UNIVERSIDAD UPDS CON STRING.
FECHA:12/01/2024
*/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string cadena1, cadena2, Universidad ;
	cadena1="BIENVENIDO A";
	cadena2="UNIVERSIDAD";
	cout<<"INGRESE EL NOMBRE DE LA UNIVERSIDAD: ";
	cin>>Universidad;
	
	cout<<cadena1<<" LA "<<cadena2<<" "<<Universidad<<endl;
	
	return 0;
}

