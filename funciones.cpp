#include <iostream>
#include <string>
using namespace std;

struct nodopila
{
    int dato;
    struct nodopila *enlace;
};

// funciones externas
void push(struct nodopila **top, int valor);
int pop(struct nodopila **top);


void convertirPostfija(string infija, string &postfija)
{
    if (infija == "")
    {
        cout << "Primero ingrese una expresión infija" << endl;
        return;
    }

    struct nodopila *pila = NULL;
    postfija = "";

    for (int i = 0; i < infija.length(); i++)
    {
        char c = infija[i];

        if (c >= '0' && c <= '9')
        {
            postfija += c;
        }
        else if (c == '(')
        {
            push(&pila, c);
        }
        else if (c == ')')
        {
            while (pila != NULL && pila->dato != '(')
            {
                postfija += (char)pop(&pila);
            }
            if (pila != NULL) pop(&pila);
        }
        else if (c == '+' || c == '-' || c == '*' || c == '/')
        {
            while (pila != NULL && pila->dato != '(')
            {
                int top = pila->dato;

                if ((c == '+' || c == '-') &&
                    (top == '+' || top == '-' || top == '*' || top == '/'))
                {
                    postfija += (char)pop(&pila);
                }
                else if ((c == '*' || c == '/') &&
                         (top == '*' || top == '/'))
                {
                    postfija += (char)pop(&pila);
                }
                else
                {
                    break;
                }
            }

            push(&pila, c);
        }
    }

    while (pila != NULL)
    {
        postfija += (char)pop(&pila);
    }

    cout << "Expresión postfija: " << postfija << endl;
}

int evaluarPostfija(string postfija)
{
    struct nodopila *pila = NULL;

    for (int i = 0; i < postfija.length(); i++)
    {
        char c = postfija[i];

        if (c >= '0' && c <= '9')
        {
            push(&pila, c - '0');
        }
        else
        {
            int b = pop(&pila);
            int a = pop(&pila);
            int res;

            if (c == '+') res = a + b;
            else if (c == '-') res = a - b;
            else if (c == '*') res = a * b;
            else if (c == '/') res = a / b;

            push(&pila, res);
        }
    }

    return pop(&pila);
}