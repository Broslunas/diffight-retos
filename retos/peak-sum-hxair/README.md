# Suma de Cimas

**Fácil** · vectores · Desafío generado · Resuelto

Dado un vector de $N$ números enteros, calcula la suma de todos sus elementos "cima".

Un elemento $A[i]$ es una cima si es estrictamente mayor que todos sus vecinos existentes:
- Si $N = 1$, el único elemento es una cima.
- Si $i = 0$, es cima si $A[0] > A[1]$.
- Si $i = N - 1$, es cima si $A[N - 1] > A[N - 2]$.
- Para cualquier otra posición, es cima si $A[i] > A[i - 1]$ y $A[i] > A[i + 1]$.

Entrada:
- Primera línea: un entero $N$.
- Segunda línea: $N$ enteros separados por espacio representando los elementos del vector.

Salida:
- Un único entero con la suma de los valores de todas las cimas. Si no hay cimas, imprime 0.

## Soluciones

| Lenguaje | Tests | Líneas | Intento | Fecha |
|---|---|---|---|---|
| [C++](solution.cpp) | 22/22 | 40 | 2 | 2026-11-08 |
