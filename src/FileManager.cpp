#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

void escribir()
{
	ofstream archivo; // tipo archivo (ofstream)
	string nombreArchivo, contenidoArchivo;
	
	cout << "Digite el nombre del archivo: ";
	getline(cin, nombreArchivo);
	
	cout << "Ingrese el texto del archivo: ";
	getline(cin, contenidoArchivo);
	
	archivo.open(nombreArchivo.c_str(), ios::out); // Abriendo el archivo
	
	if (archivo.fail()) { // Si hubo algún error,...
		cout << "Hubo un error en el archivo" << endl;
		exit(1);
	}
	
	archivo << contenidoArchivo;
	
	archivo.close();
}

int main()
{
	escribir();
	return 0;
}
