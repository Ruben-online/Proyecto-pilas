#include <iostream>
using namespace std;

int main() {
    int option;

    do {
        cout << "\n===== PROYECTO PILAS =====" << endl;
        cout << "1. Ingresar expresion infija" << endl;
        cout << "2. Convertir a notacion postfija" << endl;
        cout << "3. Evaluar expresion postfija" << endl;
        cout << "4. Mostrar resultados" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una option: ";
        cin >> option;

        switch (option) {
            case 1:
                cout << ">> Ingreso de expresion pendiente" << endl;
                break;
            case 2:
                cout << ">> Conversion a postfija pendiente" << endl;
                break;
            case 3:
                cout << ">> Evaluacion pendiente" << endl;
                break;
            case 4:
                cout << ">> Mostrar resultados pendiente" << endl;
                break;
            case 5:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "option invalida" << endl;
        }

    } while (option != 5);

    return 0;
}