/**
 *  Ejercicio de Registro de Ventas: 
 *  Crea una estructura Venta con campos como producto, cantidad y precio. 
 *  Solicita al usuario ingresar datos de ventas y guarda la información en un archivo. 
 *  Después, lee los datos del archivo y calcula el total de ventas y el producto más vendido. 
*/
#include <iostream>
#include <fstream>
using namespace std;

struct reg_venta {
	// definir
};


int main() {
	ofstream fout;
    ifstream fin;
	reg_venta reg;
	char opcion;
    // declarar aquí las variables necesarias para calcular
    // la información solicitada.


    
	fout.open("ventas.dat", ios::out | ios::app | ios::binary);

	do {
		// pedir los datos de cada venta
		cin.ignore();
		cout << "desea continuar s/n ";
		cin >> opcion;
		cin.ignore();
	}while (opcion == 's');
    fout.close();	
    //abrir el archivo en modo lectura 
    fin.open("ventas.dat", ios::in | ios::binary);
    if (fin.fail()) {
		cout << "error al abrir el achivo ventas.dat" << endl;
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
