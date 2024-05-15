/**
 *  Ejercicio de Registro de Estudiantes: 
 *  Define una estructura Estudiante con campos como nombre, edad y calificaciones. 
 *  Permite al usuario ingresar datos para varios estudiantes y almacénalos en un archivo. 
 *  Luego, lee los datos del archivo y calcula el promedio de calificaciones. 
*/
#include <iostream>
#include <fstream>
using namespace std;

struct reg_estudiante {
	// definir
};


int main() {
	ofstream fout;
    ifstream fin;
	reg_estudiante reg;
	char opcion;
    // declarar aquí las variables necesarias para calcular
    // la información solicitada.


    
	fout.open("estudiantes.dat", ios::out | ios::app | ios::binary);

	do {
		// pedir los datos de cada estudiante
		cin.ignore();
		cout << "desea continuar s/n ";
		cin >> opcion;
		cin.ignore();
	}while (opcion == 's');
    fout.close();	
    //abrir el archivo en modo lectura
    fin.open("estudiantes.dat", ios::in | ios::binary);
    if (fin.fail()) {
		cout << "error al abrir el achivo estudiantes.dat" << endl;
		exit(1);
	}
	else {
		while (!fin.eof()) {
			// implementar
		}
		fin.close();
        
	}


    fin.close();


	return 0;
}
