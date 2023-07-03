#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int base, limite_maximo;
    cout << "Introduce la base entera positiva: ";
    cin >> base;
    cout << "Introduce el límite máximo entero positivo: ";
    cin >> limite_maximo;
    
    
    cout << "Potencias de " << base << " menores que " << limite_maximo << ":" << endl;
    for(int i=0; pow(base,i)<limite_maximo; i++) {
        cout << pow(base,i) << endl;
    }
    
    return 0;
}
