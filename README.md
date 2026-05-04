# Proyecto: Evaluación de expresiones infija - postfija con pilas (C++)

## Descripción

Este programa permite:

- Ingresar una expresión matemática en **notación infija**
- Convertirla a **notación postfija** utilizando pilas
- Evaluar la expresión postfija usando pilas
- Mostrar los resultados

El proyecto fue desarrollado en **C++** utilizando **memoria dinámica y punteros**, siguiendo la estructura de pilas proporcionada por el docente.

---

## Tecnologías utilizadas

- Lenguaje: C++
- Compilador: g++
- Uso de:
  - Punteros
  - Memoria dinámica (`malloc`)
  - Estructuras (`struct`)
  - Pilas implementadas manualmente

---

## Estructura del proyecto
proyecto-pilas/
│
├── main.cpp # Menú principal
├── funciones.cpp # Conversión y evaluación
├── stack.cpp # Implementación de la pila
├── README.md # Documentación

## Funcionamiento

### 1. Notación infija
Es la forma común de escribir las expresiones: (5+3)*2
### 2. Notación posfija
Es la forma utilizada para evaluar con pilas: 53+2*

---

## Instrucciones para compilar
En la terminal, ubicarse en la carpeta del proyecto y ejecutar el siguiente comando:
``` bash
g++ main.cpp stack.cpp funciones.cpp -o main
``` 
Se creara un ejecutable "main" en el proyecto, luego ejecutar el siguiente comando:
``` bash
./main
```


## Consideraciones
- Solo se permiten números de un solo dígito (0–9)
- Se deben usar operadores explícitos:
    - Correcto: 5*(2+1)
    - Incorrecto: 5(2+1)
- Operadores soportados:
    - +, -, *, /
- Soporta uso de paréntesis ( )