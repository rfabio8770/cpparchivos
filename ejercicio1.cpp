#include <iostream>
#include <fstream>
using namespace std;

struct reg_persona {
	char nombre[40];
	int edad;
};


int main() {
	fstream archivo;
	reg_persona reg;
	char opcion;
	archivo.open("personas.dat", ios::out | ios::app | ios::binary);

	do {
		cout << "ingrese el nombre de la persona ";
		cin.getline(reg.nombre, 40);
		cout << "ingrese la edad ";
		cin >> reg.edad;
		archivo.write((char*) &reg, sizeof(reg_persona));
		cin.ignore();
		cout << "desea continuar s/n ";
		cin >> opcion;
		cin.ignore();
	}while (opcion == 's');
        archivo.close();	
	return 0;
}


