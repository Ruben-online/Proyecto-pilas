#include <iostream>
#include <string>
using namespace std;

struct nodopila {
    char dato;
    struct nodopila *enlace;
};

// Funciones
void push(struct nodopila **top, char valor);
char pop(struct nodopila **top);

int main() {
    int opcion;

    // Variables 
    string infija = "";
    string postfija = "";

    // Pila
    struct nodopila *pila = NULL;

    do {
        cout << "\n===== PROYECTO PILAS =====" << endl;
        cout << "1. Ingresar expresión infija" << endl;
        cout << "2. Convertir a notación postfija" << endl;
        cout << "3. Evaluar expresión postfija" << endl;
        cout << "4. Mostrar resultados" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opcin: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese la expresión infija: ";
                cin.ignore();
                getline(cin, infija);
                cout << "Expresión guardada: " << infija << endl;
                break;

            case 2:
                cout << ">> Conversión a postfija pendiente" << endl;
                break;

            case 3:
                cout << ">> Evaluación pendiente" << endl;
                break;

            case 4:
                cout << "Expresión infija: " << infija << endl;
                cout << "Expresión postfija: " << postfija << endl;
                break;

            case 5:
                cout << "Saliendo del programa..." << endl;
                break;

            default:
                cout << "Opción invalida" << endl;
        }

    } while (opcion != 5);

    return 0;
}