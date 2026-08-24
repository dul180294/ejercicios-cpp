#include <iostream>
using namespace std;  
const float PORCENTAJE_DESCUENTO = 0.10;
void mostrarMenu() {     
    cout << "1. Nino - $50" << endl;     
    cout << "2. Adulto - $80" << endl;
    cout << "3. Adulto mayor - $60" << endl;
} 
int main() { 
    int cantidadBoletos;
    int opcion;
    float precio = 0;
    float subtotal = 0;
    float descuento = 0;
    float total = 0;
      cout << "¿Cuantos boletos deseas comprar? ";
      cin >> cantidadBoletos; 
     for (int i = 1; i <= cantidadBoletos; i++) {
        cout << endl;
        cout << "BOLETO " << i << endl; 
          mostrarMenu();
          cout << "Selecciona el tipo de boleto: "; 
            cin >> opcion;

              switch (opcion) {
                case 1:
                precio = 50;
                break;

                case 2:
                precio = 80;
                break;

                case 3:
                precio = 60;
                break;

                default
                cout << "Opcion no valida." << endl;
                precio = 0;
                break;
            } 

             subtotal = subtotal + precio;
            }
            
              if (cantidadBoletos >= 4) {
                descuento = subtotal * PORCENTAJE_DESCUENTO;
            } else {
                descuento = 0;
            } 

                total = subtotal - descuento;
                cout << endl;
                cout << "========================" << endl;
                cout << "RESUMEN DE COMPRA" << endl;
                cout << "========================" << endl;
                cout << "Subtotal: $" << subtotal << endl;
                cout << "Descuento: $" << descuento << endl;
                cout << "Total a pagar: $" << total << endl;
                return 0;
            } 