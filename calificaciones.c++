#include <iostream>

using namespace std;

int main() {
    // arreglo para 5 calificaciones
    float calificaciones[5];
    float suma = 0;
    float promedio;
    int aprobados = 0;

    //solicitar las calificaciones
    cout << "=== Registro de Calificaciones ===" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Ingresa la calificacion del estudiante " << (i + 1) << ": ";
        cin >> calificaciones[i];
    }

    // todas las calificaciones 
    cout << "\nCalificaciones registradas: ";
    for (int i = 0; i < 5; i++) {
        cout << calificaciones[i] << " ";
    }
    cout << endl;

    
    for (int i = 0; i < 5; i++) {
        suma += calificaciones[i];

        if (calificaciones[i] >= 6) {
            aprobados++; 
        }
    }

    // calcula el promedio
    promedio = suma / 5;

    cout << "\n--- Resultados ---" << endl;
    cout << "Suma total: " << suma << endl;
    cout << "Promedio del grupo: " << promedio << endl;
    cout << "Estudiantes aprobados: " << aprobados << endl;

    return 0;
}
