#include<iostream>
using namespace std;

int main() {
    string nombre, apellido, direccion, telefono;
    int opcion;
    bool datosRegistrados = false; // Bandera para verificar si los datos han sido registrados

    do {
        // Menú simple
        cout << "----- Menu de Agenda -----" << endl;
        cout << "1. Registrar datos" << endl;
        cout << "2. Ver datos registrados" << endl;
        cout << "3. Salir" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                // Pide el nombre
                cout << "Nombre: ";
                cin >> nombre;

                // Pide el apellido
                cout << "Apellido: ";
                cin >> apellido;

                // Pide la dirección (solo tomará la primera palabra)
                cout << "Direccion: ";
                cin >> direccion;

                // Pide el teléfono
                cout << "Telefono: ";
                cin >> telefono;

                datosRegistrados = true; // Se registraron los datos
                cout << endl << "Registro completo!" << endl;
                break;

            case 2:
                // Ver datos registrados
                if (datosRegistrados) {
                    cout << endl << "----- Datos Registrados -----" << endl;
                    cout << "Nombre completo: " << nombre << " " << apellido << endl;
                    cout << "Direccion: " << direccion << endl;
                    cout << "Telefono: " << telefono << endl;
                } else {
                    cout << endl << "No hay datos registrados. Registra primero los datos." << endl;
                }
                break;

            case 3:
                // Salir del programa
                cout << "Saliendo de la agenda..." << endl;
                break;

            default:
                // Opción no válida
                cout << "Opcion no valida, intenta de nuevo." << endl;
                break;
        }

        cout << endl;

    } while(opcion != 3); // El ciclo continuará hasta que el usuario elija "Salir"

    return 0;
}