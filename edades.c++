#include <iostream>

using namespace std;

int main() {
    //arreglo 
    int edades[5];

    cout << "=== Registro de Edades ===" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Ingresa la edad de la persona " << (i + 1) << ": ";
        cin >> edades[i];
    }

    cout << "\nLas edades registradas son:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Persona " << (i + 1) << ": " << edades[i] << " años" << endl;
    }

    return 0;
}
