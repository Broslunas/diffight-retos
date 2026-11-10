# Vectores ortogonales

**Fácil** · vectors · Desafío generado · Resuelto

[Jugar este reto en Diffight](https://diffight.broslunas.com/practice/e02d1fe2-0724-49c0-b7d1-2c122cb7f8da) · [Volver al índice](../../README.md)

Dos vectores bidimensionales $u = (x_1, y_1)$ y $v = (x_2, y_2)$ son ortogonales (perpendiculares) si su producto escalar es cero:

$$u \cdot v = x_1 x_2 + y_1 y_2 = 0$$

Dado un conjunto de $N$ vectores en el plano, cuenta cuántos pares de índices $(i, j)$ con $1 \le i < j \le N$ cumplen que los vectores $i$ y $j$ son ortogonales.

Entrada:
- Primera línea: un entero $N$, la cantidad de vectores.
- Siguientes $N$ líneas: dos enteros separados por espacio, $x_i$ e $y_i$.

Salida:
- Un único entero con la cantidad de pares ortogonales.

Ejemplo:
Entrada:
4
1 2
-2 1
0 3
4 0

Salida:
2

## Soluciones

| Lenguaje | Tests | Líneas | Intento | Fecha |
|---|---|---|---|---|
| [C++](solution.cpp) | 17/17 | 22 | 1 | 2026-11-10 |
