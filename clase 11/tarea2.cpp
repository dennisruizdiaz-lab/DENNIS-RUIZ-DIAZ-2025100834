#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	char car;
	for (car = ' ';   car != 'a' && car != 'e' &&  car != 'i' && car != 'o' && car != 'u';){	
	cout << "ingrese un caracter: ";
	cin>>car;	
}
	cout << " ingresado la vocal minuscula " << car << endl;
	return 0;
}
