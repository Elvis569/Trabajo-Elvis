#include <iostream>
using namespace std;

int main() {
    int max_suma;
    cin >> max_suma;
    int suma = 0;
    int n = 0;
    while (suma <= max_suma) {
        n++;
        suma += n * n - n - 2;
    }
    cout << "El número natural más pequeño es: " << n << endl;
    return 0;
}
