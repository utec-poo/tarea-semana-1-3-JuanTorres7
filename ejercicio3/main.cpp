#include <iostream>
using namespace std;

int main(){
    int letra, num;
    cout << "1. a\n"
            "2. b\n"
            "3. c\n"
            "4. d\n"
            "5. e\n"
            "6. f\n"
            "7. g\n"
            "8. h\n";
    while (1>0){
        cout << "Inserte la letra coordenada con el siguiente diagrama: \n";
        cin >> letra;
        if (letra == 1 || letra == 2 || letra == 3 || letra == 4 || letra == 5 || letra == 6 || letra == 7 || letra == 8){
            break;
        }
        else{
            cout << "Inserte una letra en el rango de 1 a 8. \n";
        }
    }
    while (1>0){
        cout << "Ahora inserte el numero coordenado (1-8): ";
        cin >> num;
        if (letra == 1 || letra == 2 || letra == 3 || letra == 4 || letra == 5 || letra == 6 || letra == 7 || letra == 8){
            break;
        }
        else{
            cout << "Inserte una letra en el rango de 1 a 8. \n";
        }
    }
    if (letra == 1 || letra == 3 || letra == 5 || letra == 7){
        if (num == 1 || num == 3 || num == 5 || num == 7){
            cout << "La casilla es negra";
        }
        else {
            cout << "La casilla es blanca";
        }
    }
    else if (letra == 2 || letra == 4 || letra == 6 || letra == 8){
        if (num == 2 || num == 4 || num == 6 || num == 8){
            cout << "La casilla es negra";
        }
        else{
            cout << "La casilla es blanca";
        }
    }
    return 0;
}

