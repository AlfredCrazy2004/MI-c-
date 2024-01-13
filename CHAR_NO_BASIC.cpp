/*
TITULO:EL USO DEL CHAR  
AUTOR:ALFREDO TITO BENAVIDES
DESCRIPCION:MEDIABTE LA TABLA ASCII IMPRIMIR LAS VOCALES EN MAYUS Y MINUSCULA CON ACENTO TAMBIEN EL "\" Y "@".
FECHA:12/01/2024
*/#include <iostream>
using namespace std;

int main() {
	// DEFINICION Y ASIGNACION DE VALORES CHAR
	char letra;
	
	// Imprimiendo las letras con acento
	cout << "Imprimiendo letras con acento:" << endl;
	
	// ASIGNANDO VALORES NUMERICOS
	letra = 181;  // Á en ASCII
	cout << "Imprimiendo ASCII 181: " << letra << endl;
	
	letra = 144;  // É en ASCII
	cout << "Imprimiendo ASCII 144: " << letra << endl;
	
	letra = 214;  // Í en ASCII
	cout << "Imprimiendo ASCII 214: " << letra << endl;
	
	letra = 224;  // Ó en ASCII
	cout << "Imprimiendo ASCII 224: " << letra << endl;
	
	letra = 233;  // Ú en ASCII
	cout << "Imprimiendo ASCII 233: " << letra << endl;
	
	letra = 160;  // á en ASCII
	cout << "Imprimiendo ASCII 160: " << letra << endl;
	
	letra = 130;  // é en ASCII
	cout << "Imprimiendo ASCII 130: " << letra << endl;
	
	letra = 161;  // í en ASCII
	cout << "Imprimiendo ASCII 161: " << letra << endl;
	
	letra = 162;  // ó en ASCII
	cout << "Imprimiendo ASCII 162: " << letra << endl;
	
	letra = 163;  // ú en ASCII
	cout << "Imprimiendo ASCII 163: " << letra << endl;
	
	letra = 92;  // ú en ASCII
	cout << "Imprimiendo ASCII 92: " << letra << endl;

	letra = 64;  // ú en ASCII
	cout << "Imprimiendo ASCII 64: " << letra << endl;
	
	char nombre[]="ALFREDO";
	cout<< "IMPRIMIENDO EL NOMBRE '\':"<<nombre<<endl;
	cout<< "IMPRIMIENDO NOMBRE[0] '\':"<<nombre[0]<<endl;
	cout<< "IMPRIMIENDO NOMBRE[1] '\':"<<nombre[1]<<endl;
	cout<< "IMPRIMIENDO NOMBRE[2] '\':"<<nombre[2]<<endl;
	cout<< "IMPRIMIENDO NOMBRE[3] '\':"<<nombre[3]<<endl;
	cout<< "IMPRIMIENDO NOMBRE[4] '\':"<<nombre[4]<<endl;
	cout<< "IMPRIMIENDO NOMBRE[5] '\':"<<nombre[5]<<endl;
	cout<< "IMPRIMIENDO NOMBRE[6] '\':"<<nombre[6]<<endl;

	nombre[0]='a';
	nombre[1]='l';
	nombre[2]='f';
	nombre[3]='r';
	nombre[4]='e';
	nombre[5]='d';
	nombre[6]='o';
	cout<< "IMPRIMIENDO EL NOMBRE '\':"<<nombre<<endl;
	return 0;
}


