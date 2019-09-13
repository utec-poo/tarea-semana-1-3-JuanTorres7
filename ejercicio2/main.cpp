#include <iostream>
using namespace std;
int main(){
    int x, precio;
    cout << "1. Entrada super VIP\n";
    cout << "2. Entrada VIP\n";
    cout << "3. Entrada preferencial\n";
    cout << "4. Entrada General\n";
    cout << "Ingrese su opción segun el numero: ";
    cin >> x;
    if (x == 1) {
        cout << "Su precio es de 212 soles\n";
        precio = 212;
    }
    else if (x == 2){
        cout << "Su precio es de 170 soles\n";
        precio = 170;
    }
    else if (x == 3){
        cout << "Su precio es de 136 soles\n";
        precio = 136;
    }
    else if (x == 4){
        cout << "Su precio es de 59 soles\n";
        precio = 59;
    }
    else {
        cout << "No es opcion valida\n";
        exit (-1);
    }
    cout << "¿Usted es cliente Claro?\n";
    cout << "1. Sí\n";
    cout << "2. No\n";
    int z;
    cin >> z;
    switch (z){
        case 1: cout << "Su nuevo precio es de: " << precio*0.2 << " soles.";
            break;
        case 2: cout << "Su precio se mantiene en " << precio << " soles."; 
            break;
        default: cout << "Ingreso no valido";
            exit(-1);
    }
    return 0;
}
