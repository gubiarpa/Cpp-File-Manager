#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

void escribir()
{
	ofstream archivo; // tipo archivo (ofstream)
	archivo.open("prueba.txt", ios::out); // Abriendo el archivo
	
	if (archivo.fail()) { // Si hubo algún error,...
		cout << "Hubo un error en el archivo" << endl;
		exit(1);
	}
	
	archivo << "gubiarpa is programming";
	
	archivo.close();
}

int main()
{
	escribir();
	system("pause");
	return 0;
}
