#include <iostream>

using namespace std;

int main() {
    int n, suma = 0;
    cout << "Ingrese un número entero positivo: ";
    cin >> n;

    // sumar los números de 1 a n
    for (int i = 1; i <= n; i++) {
        suma += i;
    }

    // mostrar el resultado
    cout << "La suma de los primeros " << n << " números es: " << suma << endl;

    return 0;
}
