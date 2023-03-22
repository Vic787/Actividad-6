#include <iostream>

using namespace std;

/* 
	Punteros con asignación de memoria dinámica
	
	- new = reservar un espacio en memoria
	- delete[] = liberar la memoria
*/

main(){
	int fil = 0, col = 0, **pm_notas;
	cout << "Ingrese los estudiantes: ";
	cin >> fil;
	cout << "Ingrese la cantidad de notas por estudiante: ";
	cin >> col;
	
	pm_notas = new int *[fil];
	for(int i = 0; i < fil; i++){
		pm_notas[i] = new int[col];
	}
	
	for(int i = 0; i < fil; i++){
		cout << "__________Estudiante__________" << i << endl;
		for(int ii = 0; ii < col; ii++){
			cout << "Nota: " << ii << ": ";
			cin >> *(*(pm_notas+i)+ii);
		}
		cout << "____________________" << endl;
	}
	
	cout << "-------- Mostrar notas --------" << endl;
	for(int i = 0; i < fil; i++){
		for(int ii = 0; ii < col; ii++){
			cout << *(*(pm_notas+i)+ii) << endl;;
		}
		cout << "______________________________" << endl;
	}
	
	for(int i = 0; i < fil; i++){
		delete [] pm_notas[i];
	}
	delete [] pm_notas;
	
	system("Pause");
}
