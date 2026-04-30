#include <iostream>
#include <string>
using namespace std;

// Estructura pila
struct nodopila {
    char dato;
    struct nodopila *enlace;
};

// Funciones pila
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
                if (infija == "") {
                    cout << "Primero ingrese una expresión infija" << endl;
                } else {
                    postfija = "";
                    pila = NULL;

                    for (int i = 0; i < infija.length(); i++) {
                        char c = infija[i];

                        // Número
                        if (c >= '0' && c <= '9') {
                            postfija += c;
                        }

                        // Abrir paréntesis
                        else if (c == '(') {
                            push(&pila, c);
                        }

                        // Cerrar paréntesis
                        else if (c == ')') {
                            while (pila != NULL && pila->dato != '(') {
                                postfija += pop(&pila);
                            }
                            if (pila != NULL) pop(&pila); // elimina '('
                        }

                        // Operadores
                        else if (c == '+' || c == '-' || c == '*' || c == '/') {

                            while (pila != NULL && pila->dato != '(') {

                                char top = pila->dato;

                                // prioridades
                                if ((c == '+' || c == '-') &&
                                    (top == '+' || top == '-' || top == '*' || top == '/')) {
                                    postfija += pop(&pila);
                                }
                                else if ((c == '*' || c == '/') &&
                                         (top == '*' || top == '/')) {
                                    postfija += pop(&pila);
                                }
                                else {
                                    break;
                                }
                            }

                            push(&pila, c);
                        }
                    }

                    // Vaciar pila final
                    while (pila != NULL) {
                        postfija += pop(&pila);
                    }

                    cout << "Expresión postfija: " << postfija << endl;
                }
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