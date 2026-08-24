#include <iostream>

using namespace std;

int main() {
    // matriz calificaciones[3][3]
    float calificaciones[3][3];
    float sumaGeneral = 0;
    float promedioGeneral;

    // 9 calificaciones (3 estudiantes x 3 materias)
    cout << "=== Registro de Calificaciones ===" << endl;
    for (int estudiante = 0; estudiante < 3; estudiante++) {
        cout << "\n--- Estudiante " << (estudiante + 1) << " ---" << endl;
        for (int materia = 0; materia < 3; materia++) {
            cout << "Ingresa la calificacion de la materia " << (materia + 1) << ": ";
            cin >> calificaciones[estudiante][materia];
        }
    }

    //matriz completa
    cout << "\n=== Matriz de Calificaciones ===" << endl;
    cout << "Estudiante\tMat1\tMat2\tMat3" << endl;
    for (int estudiante = 0; estudiante < 3; estudiante++) {
        cout << "Estudiante " << (estudiante + 1) << "\t";
        for (int materia = 0; materia < 3; materia++) {
            cout << calificaciones[estudiante][materia] << "\t";
        }
        cout << endl;
    }

    cout << "\n=== Promedios Individuales (Reto Adicional) ===" << endl;
    for (int estudiante = 0; estudiante < 3; estudiante++) {
        float sumaEstudiante = 0;
        
        for (int materia = 0; materia < 3; materia++) {
            // Acumula para el promedio total
            sumaGeneral = sumaGeneral + calificaciones[estudiante][materia];
            // Acumula para el estudiante actual
            sumaEstudiante += calificaciones[estudiante][materia];
        }
        
        // Promedio individual (dividiéndolo entre 3 materias)
        cout << "Promedio Estudiante " << (estudiante + 1) << ": " << (sumaEstudiante / 3.0) << endl;
    }

    //calcula y muestra el promedio general
    promedioGeneral = sumaGeneral / 9;

    cout << "\n=== Resultado General ===" << endl;
    cout << "Suma total de calificaciones: " << sumaGeneral << endl;
    cout << "Promedio general del grupo: " << promedioGeneral << endl;

    return 0;
}
