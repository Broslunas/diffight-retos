# Números de Harshad

**Fácil** · math · Desafío diario 2026-11-13 · Resuelto

[Jugar este reto en Diffight](https://diffight.broslunas.com/play) · [Volver al índice](../../README.md)

Un número entero positivo es un **número de Harshad** (o número niven) si es divisible entre la suma de sus propios dígitos en base 10.

Dado un arreglo de $N$ enteros positivos, cuenta cuántos de ellos son números de Harshad.

Entrada:
- La primera línea contiene un entero $N$ ($1 \le N \le 1000$).
- La segunda línea contiene $N$ enteros positivos separados por espacios: $A_1, A_2, \dots, A_N$.

Salida:
- Un único entero con la cantidad de números de Harshad en el arreglo.

Ejemplo:
Entrada:
5
18 21 19 20 25

Salida:
3

Explicación:
- $18$: suma de dígitos $1 + 8 = 9$, y $18$ es divisible por $9$.
- $21$: suma de dígitos $2 + 1 = 3$, y $21$ es divisible por $3$.
- $19$: suma de dígitos $1 + 9 = 10$, y $19$ no es divisible por $10$.
- $20$: suma de dígitos $2 + 0 = 2$, y $20$ es divisible por $2$.
- $25$: suma de dígitos $2 + 5 = 7$, y $25$ no es divisible por $7$.
En total hay $3$ números de Harshad.

## Soluciones

| Lenguaje | Tests | Líneas | Intento | Fecha |
|---|---|---|---|---|
| [C++](solution.cpp) | 19/19 | 21 | 1 | 2026-11-13 |
