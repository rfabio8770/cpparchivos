#include <iostream>
#include <fstream>

using namespace std;

struct reg_persona {
	char nombre[40];
	int edad;
};


int main()
{
	fstream archivo;
	reg_persona reg;
	archivo.open("personas.dat", ios::in | ios:: binary);
	if (archivo.fail()) {
		cout << "error al abrir el achivo personas.dat" << endl;
		exit(1);
	}
	else {
		while (!archivo.eof()) {
			archivo.read((char*) &reg, sizeof(reg_persona));
			if (!archivo.eof()) {
				cout << "Nombre " << reg.nombre;
				cout << " - Edad " << reg.edad << endl;
			}
		}
		archivo.close();
	}
	return 0;
}
