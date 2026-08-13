#include <iostream>
using namespace std;

int main() {
    const int cafe=35;
    const int sandwich=65;
    const int jugo=40;
    const double descuento=0.10;
     double monto=0.0;
    int compras=0;
    int subtotal=0;
    int opcion=0;

    cout << "ingrese la cantidad de productos que desea comprar:" << endl;
    cin >> compras;
    for (int i = 1; i <= compras; i++){
        
        cout << "\n1. cafe: $35 \n2. sandwich: $65 \n3. Jugo: $40" << endl;
        cout << "Elija una opcion: " << endl;
        cin >> opcion;
        switch (opcion){
            case 1: subtotal += cafe;
            break;
            case 2: subtotal += sandwich;
            break;
            case 3: subtotal += jugo;
            break;
            default: cout << "opcion no valida" << endl;
        }
    }
     
     if (subtotal> 150){
        monto = subtotal * descuento;
     }
     cout <<"Subtotal: $" << subtotal << endl;
     cout << "Descuento: $" << monto << endl;
     cout << "Total a pagar: $" << (subtotal - monto) << endl;
    

return 0;
}