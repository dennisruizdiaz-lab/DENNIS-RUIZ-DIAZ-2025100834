#include <iostream>
#include <string>
using namespace std;


struct Personaje {
    string nombre;
    int fuerza;  
};

int main() {
    Personaje p1, p2;

   
    cout << "=== Personaje 1 ===" << endl;
    cout << "Nombre: ";
    getline(cin, p1.nombre);
    cout << "Puntos de fuerza: ";
    cin >> p1.fuerza;
    cin.ignore(); 

    
    cout << "\n=== Personaje 2 ===" << endl;
    cout << "Nombre: ";
    getline(cin, p2.nombre);
    cout << "Puntos de fuerza: ";
    cin >> p2.fuerza;


    cout << "\n========== RESULTADO ==========" << endl;

    if (p1.fuerza > p2.fuerza) {
        cout << p1.nombre << " es más fuerte que " << p2.nombre << "!" << endl;
        cout << "(" << p1.fuerza << " vs " << p2.fuerza << ")" << endl;
    }
    else if (p2.fuerza > p1.fuerza) {
        cout << p2.nombre << " es más fuerte que " << p1.nombre << "!" << endl;
        cout << "(" << p2.fuerza << " vs " << p1.fuerza << ")" << endl;
    }
    else {
        cout << "¡Empate! Ambos tienen la misma fuerza (" << p1.fuerza << " puntos)." << endl;
    }

    return 0;
}
