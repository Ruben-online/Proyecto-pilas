#include <iostream>
using namespace std;

int main() {
    int option;

    do {
        cout << "\n===== Menú principal =====" << endl;
        cout << "1. Opción 1" << endl;
        cout << "2. Opción 2" << endl;
        cout << "3. Opción 3" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> option;

        switch (option) {
            case 1:
                cout << "Elegiste la opción 1" << endl;
                break;
            case 2:
                cout << "Elegiste la opción 2" << endl;
                break;
            case 3:
                cout << "Elegiste la opción 3" << endl;
                break;
            case 4:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción inválida" << endl;
        }

    } while (option != 4);

    return 0;
}