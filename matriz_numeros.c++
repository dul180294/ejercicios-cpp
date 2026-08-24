#include <iostream>

using namespace std;

int main() {

    // matriz de 2 filas y 3 columnas.
    int numeros[2][3];

    // primera fila.
    numeros[0][0] = 10;
    numeros[0][1] = 20;
    numeros[0][2] = 30;

    //segunda fila.
    numeros[1][0] = 40;
    numeros[1][1] = 50;
    numeros[1][2] = 60;

    cout << "MATRIZ" << endl;

    //filas.
    for (int fila = 0; fila < 2; fila++) {

        //columnas.
        for (int columna = 0; columna < 3; columna++) {

            cout << numeros[fila][columna] << " ";
        }

        cout << endl;
    }

    return 0;
}
