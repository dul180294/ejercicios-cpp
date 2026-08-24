#include <iostream>

using namespace std;

int main() {
    //matriz de números enteros de 2 filas x 3 columnas
    int matriz[2][3];

    cout << "=== Llenado de la Matriz (2x3) ===" << endl;
    for (int fila = 0; fila < 2; fila++) {
        for (int columna = 0; columna < 3; columna++) {
            cout << "Ingresa el valor para la posicion [" << fila << "][" << columna << "]: ";
            cin >> matriz[fila][columna];
        }
    }

    //matriz completa
    cout << "\nMatriz resultante:" << endl;
    for (int fila = 0; fila < 2; fila++) {
        for (int columna = 0; columna < 3; columna++) {
            cout << matriz[fila][columna] << "\t"; // Imprime el valor con una tabulación
        }
        cout << endl; 
    }

    return 0;
}
