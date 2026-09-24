#include <iostream>
using namespace std;
int main(){
	int opcion;
	// El usuario lee los dias de la semana entre las 7 opciones//
		cout << "Ingrese los dias de la semana \n" <<endl;
		cout << "Opcion 1:Domingo \n" <<endl;
		cout << "Opcion 2:Lunes \n" <<endl;
		cout << "Opcion 3:Martes \n" <<endl;
		cout << "Opcion 4:Miercoles \n" <<endl;
		cout << "Opcion 5:Jueves \n" <<endl;
		cout << "Opcion 6:Viernes \n" <<endl;
		cout << "Opcion 7:Sabado \n" <<endl;
		//El usuario elige entre las 7 opciones//
		cin>> opcion;
		if (opcion==1){
			cout<< "Elegiste Domingo \n" <<endl;
			//si el usuario eligio la opcion 1 entonces su dia es domingo//
		}
			else if (opcion==2){
			cout<< "Elegiste Lunes \n" <<endl;
				//si el usuario eligio la opcion 2 entonces su dia es lunes//
		}
			else if (opcion==3){
			cout<< "Elegiste Martes \n" <<endl;
				//si el usuario eligio la opcion 3 entonces su dia es Martes//
		}
			else if (opcion==4){
			cout<< "Elegiste Miercoles \n" <<endl;
				//si el usuario eligio la opcion 4 entonces su dia es Miercoles//
		}
			else if (opcion==5){
			cout<< "Elegiste Jueves \n" <<endl;
				//si el usuario eligio la opcion 5 entonces su dia es Jueves//
		}
			else if (opcion==6){
			cout<< "Elegiste Viernes \n" <<endl;
				//si el usuario eligio la opcion 6 entonces su dia es Viernes//
		}
			else if (opcion==7){
			cout<< "Elegiste Sabado \n" <<endl;
				//si el usuario eligio la opcion 7 entonces su dia es Sabado//
		}
		else {
			cout << "Opcion Invalida \n" <<endl;
				//si el usuario eligio un numero diferentes entonces la opcion es invalida//
		}
		return 0;
		// le damos un stop a la maquina y finaliza el algoritmo//
		}
