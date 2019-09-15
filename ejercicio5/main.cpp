#include <iostream>
using namespace std;

int main (){
    int cant, pares = 0, impares = 0;
    for (int i;; i++){
        int num;
        cout << "Ingrese numero " << i+1 << ":\n";
        cin >> num;
        cant = i;
        if (num % 2 == 0){
            pares++;
        }
        else if (num % 2 != 0){
            impares++;
        }
        if (num == 0){
            break;
        }
    }
    cout << "La cantidad de numeros leidos fue de " << cant << "\n";
    cout << "La cantidad de numeros pares son " << pares-1 << "\n";
    cout << "La cantidad de numeros impares son " << impares << "\n";
    return 0;
}
