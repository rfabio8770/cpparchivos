#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

struct reg_persona {
	char nombre[40];
	int edad;
};


int main()
{
	fstream archivo;
	reg_persona reg;
	// solo para LINUX
	system("clear");

	cout << "PROGRAMA QUE LEE UN ARCHIVO DE REGISTROS DE PERSONAS (nombre, edad) Y CALCULA EL PROMEDIO DE EDADES" << endl;
	cout << "===================================================================================================" << endl;
	archivo.open("personas.dat", ios::in | ios:: binary);
	if (archivo.fail()) {
		cout << "error al abrir el achivo personas.dat" << endl;
		exit(1);
	}
	else {
		int suma = 0, c = 0;
		int prom;
		while (!archivo.eof()) {
			archivo.read((char*) &reg, sizeof(reg_persona));
			if (!archivo.eof()) {
				suma += reg.edad;
				c++;
			}
		}
		prom = suma / c;
		cout << "promedio de edades es " << prom << endl;
		archivo.close();
	}
	return 0;
}
