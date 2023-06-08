#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Pedir al usuario que introduzca una masa en gramos
    float m;
    cout << "Introduzca una masa en gramos: ";
    cin >> m;

    // Convertir la velocidad de la luz a cm/s
    double c = 2.997925 * pow(10, 10);
    c *= 100;  // 1 m/s = 100 cm/s

    // Calcular la energía producida
    double E = m * pow(c, 2);

    // Mostrar el resultado en ergios
    cout << "La energía producida es: " << E << " ergios." << endl;

    return 0;
}
