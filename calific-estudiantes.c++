#include <iostream>
using namespace std;
int main() {
    int calificaciones[5];
    calificaciones[0] = 8;
    calificaciones[1] = 10;
    calificaciones[2] = 7;
    calificaciones[3] = 9;
    calificaciones[4] = 8; 
    
    cout << "CALIFICACIONES" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Estudiante " << i + 1 << ": ";
        cout << calificaciones[i] << endl; }
        return 0;
    } 