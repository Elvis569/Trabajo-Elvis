#include <iostream>

using namespace std;

int main() {
    int num, doble, triple;

    cout << "Ingresa un número entero: ";
    cin >> num;

    doble = num * 2;
    triple = num * 3;

    cout << "El doble de " << num << " es: " << doble << endl;
    cout << "El triple de " << num << " es: " << triple << endl;

    return 0;
}
