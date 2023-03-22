#include <iostream>

using namespace std;

main(){
	int edad, *p_edad;
	p_edad = &edad;
	cout << "Ingrese edad: ";
	cin >> *p_edad;
	cout << *p_edad << endl;
	
	if(*p_edad > 18){
		cout << "Mayor de edad" << endl;
	} else {
		cout << "Menor de edad" << endl;
	}
	
	system("Pause");
}
