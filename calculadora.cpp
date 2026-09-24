#include <iostream>
using namespace std;
float suma(float a, float b);
float resta(float a, float b);
float multiplicacion(float a, float b);
float division(float a, float b);	
int main(){
	float n1, n2, resultado, opcion;
	cout<< "Ingrese sus numeros \n" <<endl;
	cin>> n1;
	cin>> n2;
	cout<< "Elija la operacion \n" <<endl;
	cout<< "Opcion 1:Suma" <<endl;
	cout<< "Opcion 2:Resta" <<endl;
	cout<< "Opcion 3:Multiplicacion" <<endl;
	cout<< "Opcion 4:Division" <<endl;
	cin>> opcion;
	if (opcion==1){
		resultado=n1+ n2;
		cout<< "tu resultado es: " <<endl;
		cout<< resultado;
		return 0;
	}
	if (opcion==2){
		resultado=n1- n2;
		cout<< "tu resultado es: " <<endl;
		cout<< resultado;
		return 0;
	}
	if (opcion==3){
		resultado=n1 * n2;
		cout<< "tu resultado es: " <<endl;
		cout<< resultado;
		return 0;
	}
	if (opcion==4){
		resultado=n1/ n2;
		cout<< "tu resultado es: " <<endl;
		cout<< resultado;
	}
	}


