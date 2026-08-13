#include <iostream>
using namespace std;

int main() {
    double c1, c2, c3, promedio;

    cout << "Ingrese la primera calificacion:"<< endl;
    cin >> c1;
    cout << "Ingrese la segunda calificacion:"<< endl;
    cin >> c2;
    cout << "Ingrese la tercera calificacion:"<< endl;
    cin >> c3;

    promedio = (c1 + c2 + c3) / 3;

    cout << "El promedio es: " << promedio << endl;
    
   if (promedio>=9){
    cout << "Excelente" << endl;
   } 
   else if (promedio>=8){
    cout << "Muy bien" << endl;
   }  
   else if (promedio>=7){
    cout << "Bien" << endl;   
  } 
  else if (promedio>=6){
    cout << "Suficiente" << endl;
  }
  else{
    cout << "Reprobado" <<endl;
  }
 
    return 0;
}
