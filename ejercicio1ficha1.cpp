/**
 * Ejercicio de Registro de Empleados: 
 * Crea una estructura llamada Empleado con campos como nombre, salario y antigüedad. 
 * Permite al usuario ingresar datos para varios empleados y guárdalos en un archivo binario. 
 * Luego, recupera la información de los empleados y calcula el promedio de salarios. 
*/
#include <iostream>
#include <fstream>
using namespace std;

struct reg_empleado {
	char nombre[40];
	int salario;
    int antiguedad;
};


int main() {
	ofstream fout;
    ifstream fin;
	reg_empleado reg;
	char opcion;
    int suma_salarios = 0;
    int contador = 0; 
    int promedio = 0;
	fout.open("empleados.dat", ios::out | ios::app | ios::binary);

	do {
		cout << "ingrese el nombre del empleado ";
		cin.getline(reg.nombre, 40);
		cout << "ingrese el salario ";
		cin >> reg.salario;
        cout << "ingrese el antiguedad ";
		cin >> reg.antiguedad;
		fout.write((char*) &reg, sizeof(reg_empleado));
		cin.ignore();
		cout << "desea continuar s/n ";
		cin >> opcion;
		cin.ignore();
	}while (opcion == 's');
    fout.close();	
    //abrir el archivo en modo lectura y calcular el promedio de los salarios
    fin.open("empleados.dat", ios::in | ios::binary);
    if (fin.fail()) {
		cout << "error al abrir el achivo empleados.dat" << endl;
		exit(1);
	}
	else {
		while (!fin.eof()) {
			fin.read((char*) &reg, sizeof(reg_empleado));
			if (!fin.eof()) {
				suma_salarios = suma_salarios + reg.salario;
                contador++;
			}
		}
		fin.close();
        promedio = suma_salarios / contador;
        cout << "Promedio de salarios " << promedio << endl;
	}


    fin.close();


	return 0;
}
