#include <iostream>

using namespace std;

/* 
	Punteros con asignación de memoria dinámica
	
	- new = reservar un espacio en memoria
	- delete[] = liberar la memoria
*/

main(){
	int total = 0, *p_notas;
	p_notas = new int[total];
	char res;
	
	do{
		cout << "Ingrese nota: " << total << ": ";
		cin >> p_notas[total];
		total++;
		cout << "Desea ingresar otro valor (s/n): ";
		cin >> res;
	}while(res == 's' || res == 'S');
	
	cout << "------- Mostrar notas --------" << endl;
	for(int i = 0; i < total; i++){
		cout << "Nota (" << i << "): " << *p_notas << endl;
		*p_notas++;
	}
	
	delete[] p_notas;
	system("Pause");
}
