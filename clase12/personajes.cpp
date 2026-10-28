#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;
struct Personaje {
    string nombre;
    int vida;
    int ataque;
};
void agregarPersonaje() {
    Personaje p;
    cout << "\n--- Registrar nuevo personaje ---\n";
    cout << "Nombre: ";
    cin.ignore();           
    getline(cin, p.nombre);
    cout << "Vida: ";
    cin >> p.vida;
    cout << "Ataque: ";
    cin >> p.ataque;
    ofstream archivo("personajes.txt", ios::app);
    if (archivo.is_open()) {     
        archivo << p.nombre << "|" << p.vida << "|" << p.ataque << endl;
        archivo.close();        
        cout << "\nPersonaje guardado correctamente.\n";
    } else {
        cout << "\nError: No se pudo abrir el archivo para escritura.\n";
    }
}
       void mostrarPersonajes() {
    ifstream archivo("personajes.txt");

    if (archivo.is_open()) {
        string linea;
        cout << "\n--- Lista de personajes ---\n";

        bool hayPersonajes = false;
        while (getline(archivo, linea)) {
            if (linea.empty()) continue;

            size_t pos1 = linea.find('|');
            size_t pos2 = linea.find('|', pos1 + 1);

            if (pos1 != string::npos && pos2 != string::npos) {
                string nombre = linea.substr(0, pos1);
                
                // ESTAS DOS LÍNEAS SON LAS CORRECTAS (sin stoi)
                int vida = atoi(linea.substr(pos1 + 1, pos2 - pos1 - 1).c_str());
                int ataque = atoi(linea.substr(pos2 + 1).c_str());

                cout << "Nombre: " << nombre
                     << " | Vida: " << vida
                     << " | Ataque: " << ataque << endl;
                hayPersonajes = true;
            }
        }

        if (!hayPersonajes) {
            cout << "No hay personajes registrados todavía.\n";
        }

        archivo.close();
    } else {
        cout << "\nError: No se pudo abrir el archivo para lectura "
             << "(puede que aún no exista).\n";
    }
}
int main() {
    int opcion;
    do {
        cout << "\n===== MENÚ DE PERSONAJES =====\n";
        cout << "1. Registrar nuevo personaje\n";
        cout << "2. Mostrar todos los personajes\n";
        cout << "3. Salir\n";
        cout << "Elige una opción: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                agregarPersonaje();
                break;
            case 2:
                mostrarPersonajes();
                break;
            case 3:
                cout << "¡Hasta luego!\n";
                break;
            default:
                cout << "Opción no válida.\n";
        }
    } while (opcion != 3);
    return 0;
}
