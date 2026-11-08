#include <iostream>
#include <string>
using namespace std;

// Devuelve true si el caracter c es una vocal minuscula
bool esVocal(char c) {
    string vocales = "aeiou";
    return vocales.find(c) != string::npos;
}

// Cuenta los "sandwiches de vocales" de un texto
int contarSandwiches(const string& texto) {
    int contador = 0;
    int n = texto.size();

    // i + 2 < n asegura que existen los caracteres i, i+1 e i+2.
    // Si n < 3, el bucle no se ejecuta y se devuelve 0.
    for (int i = 0; i + 2 < n; i++) {
        char primero = texto[i];
        char medio   = texto[i + 1];
        char tercero = texto[i + 2];

        if (esVocal(primero) && primero == tercero && !esVocal(medio)) {
            contador++;
        }
    }
    return contador;
}

int main() {
    string texto;
    getline(cin, texto);

    cout << contarSandwiches(texto) << endl;
    return 0;
}
