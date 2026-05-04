#include <iostream>
#include <string>
using namespace std;

// Funciones externas
void convertirPostfija(string infija, string &postfija);
int evaluarPostfija(string postfija);

int main() {
    int opcion;

    string infija = "";
    string postfija = "";
    int resultado = 0;

    do {
        cout << "\n===== PROYECTO PILAS =====" << endl;
        cout << "1. Ingresar expresión infija" << endl;
        cout << "2. Convertir a notación postfija" << endl;
        cout << "3. Evaluar expresión postfija" << endl;
        cout << "4. Mostrar resultados" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {

            case 1:
                cout << "Ingrese la expresión infija: ";
                cin.ignore();
                getline(cin, infija);
                cout << "Expresión guardada: " << infija << endl;
                break;

            case 2:
                convertirPostfija(infija, postfija);
                break;

            case 3:
                resultado = evaluarPostfija(postfija);
                cout << "Resultado: " << resultado << endl;
                break;

            case 4:
                cout << "Expresión infija: " << infija << endl;
                cout << "Expresión postfija: " << postfija << endl;
                cout << "Resultado: " << resultado << endl;
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