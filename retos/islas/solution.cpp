
#include <iostream>
#include <vector>
using namespace std;

int r, c;
vector<string> matriz;
vector<vector<bool>> visitado;

void dfs(int x, int y) {
    if (x < 0 || x >= r || y < 0 || y >= c)
        return;

    if (matriz[x][y] == '0' || visitado[x][y])
        return;

    visitado[x][y] = true;

    // Explorar las 4 direcciones
    dfs(x - 1, y); // Arriba
    dfs(x + 1, y); // Abajo
    dfs(x, y - 1); // Izquierda
    dfs(x, y + 1); // Derecha
}

int main() {
    cin >> r >> c;

    matriz.resize(r);
    visitado.assign(r, vector<bool>(c, false));

    for (int i = 0; i < r; i++) {
        cin >> matriz[i];
    }

    int islas = 0;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {

            if (matriz[i][j] == '1' && !visitado[i][j]) {
                islas++;
                dfs(i, j);
            }
        }
    }

    cout << islas << endl;

    return 0;
}
