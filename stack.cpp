#include <iostream>
#include <cstdlib>
using namespace std;

struct nodopila
{
    int dato;
    struct nodopila *enlace;
};

void push(struct nodopila **top, int valor)
{
    struct nodopila *nuevo;
    nuevo = (struct nodopila *)malloc(sizeof(struct nodopila));

    if (nuevo != NULL)
    {
        nuevo->dato = valor;
        nuevo->enlace = *top;
        *top = nuevo;
    }
}

int pop(struct nodopila **top)
{
    if (*top == NULL) return 0;

    struct nodopila *temp;
    temp = *top;

    int valor = temp->dato;
    *top = temp->enlace;

    free(temp);
    return valor;
}