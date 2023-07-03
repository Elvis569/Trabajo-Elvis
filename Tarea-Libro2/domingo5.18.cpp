#include <iostream>
using namespace std;

int main() {
    float suma = 0;
    for (int n = 1; n <= 20; n++) {
        suma += (n*n) / (3.0*n);
    }
    cout << "La suma de los 20 primeros términos es: " << suma << endl;
    return 0;
}
