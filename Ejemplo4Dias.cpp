#include <iostream>
using namespace std ;
int main () {
	int opcion;
	cout <<"opcion 1:Domingo" << "\n" ;
	cout <<"opcion 2:Lunes" << "\n" ;
	cout <<"opcion 3:Martes" << "\n" ;
	cout <<"opcion 4:Miercoles" << "\n" ;
	cout <<"opcion 5:Jueves" << "\n" ;
	cout <<"opcion 6:Viernes" << "\n" ;
	cout <<"opcion 7:Sabado" << "\n" << " Elija una opcion" <<"\n" <<":";
	cin >> opcion;
	switch (opcion){
	case 1 :
		cout << "El dia es Domingo" ;
		break;
		case 2 :
		cout << "El dia es Lunes" ;
		break;
		case 3 :
		cout << "El dia es Martes" ;
		break;
		case 4 :
		cout << "El dia es Miercoles" ;
		break;
		case 5 :
		cout << "El dia es Jueves" ;
		break;
		case 6 :
		cout << "El dia es Viernes" ;
		break;
		case 7 :
		cout << "El dia es Sabado" ;
		break;
		default :
			cout << "Error, Opcion Invalida, Elija del 1 al 7" ;
		
	}
	return (0);	
}
