#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Pedir al usuario que introduzca las masas y la distancia entre los cuerpos
    float m1, m2, d;
    cout << "Introduzca las masas de los cuerpos (en gramos): ";
    cin >> m1 >> m2;
    cout << "Introduzca la distancia entre los cuerpos (en centímetros): ";
    cin >> d;

    // Calcular la constante de gravitación universal
    float G = 6.673 * pow(10, -8);

    // Calcular la fuerza gravitacional
    float F = G * (m1 * m2) / pow(d, 2);

    // Convertir la fuerza gravitacional a dinas
    F *= 981;  // 1 gr.cm/seg^2 = 981 dinas

    // Mostrar la fuerza gravitacional resultante
    cout << "La fuerza gravitacional entre los cuerpos es: " << F << " dinas" << endl;

    return 0;
}
