#include <iostream>

using namespace std;

int main() {
    double a, b, c, d, e, f;
    double x, y;

    cout << "Ingrese los coeficientes de la primera ecuación (ax + by = c): " << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    cout << "Ingrese los coeficientes de la segunda ecuación (cx + dy = f): " << endl;
    cout << "d: ";
    cin >> d;
    cout << "e: ";
    cin >> e;
    cout << "f: ";
    cin >> f;

    double det = a * e - b * d;

    if (det == 0) {
        cout << "El sistema no tiene solución única." << endl;
    } else {
        x = (c * e - b * f) / det;
        y = (a * f - c * d) / det;
        cout << "La solución del sistema es: x = " << x << ", y = " << y << endl;
    }

    return 0;
}
// MODIFICAR EL EJERCICIO PARA EL CASO QUE SI EL RESULTADO DE "X" ES POSITIVO, EL RESULTADO DE "Y", DEBERA SER ELEVADO AL CUADRADO, CASO CONTRARIO SE LE RESTARA 2
