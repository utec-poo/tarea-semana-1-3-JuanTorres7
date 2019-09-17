#include <iostream>
using namespace std;

int main (){
    int i, n, num;
    cout << "Input de numero entero: ";
    cin >> num;
    if (num > 10 && num <= 30){
        for (i=1;i<=num;i++){
            for(n=1; i>=n; n++)
                cout << "*";
            cout << "\n";
        }
    }
    else{
        cout << "El numero debe estar en el rango de 1 a 30.";
    }
    return 0;
}
