#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, resultado;

    for (x = 0; x <= 5; x += 0.5) {
        resultado = cos(3 * x) - 2 * x;
        cout << "El resultado para x=" << x << " es " << resultado << endl;
    }

    return 0;
}
