#include <iostream>
#include <cstdlib>
using namespace std;

struct nodopila {
    char dato;
    struct nodopila *enlace;
};

void push(struct nodopila **top, char valor) {
    struct nodopila *nuevo;
    nuevo = (struct nodopila *)malloc(sizeof(struct nodopila));

    if (nuevo != NULL) {
        nuevo->dato = valor;
        nuevo->enlace = *top;
        *top = nuevo;
    }
}

char pop(struct nodopila **top) {
    if (*top == NULL) return '\0';

    struct nodopila *temp;
    temp = *top;

    char valor = temp->dato;
    *top = temp->enlace;

    free(temp);
    return valor;
}