#include <iostream>
using namespace std;

int main() {
    // Pedir al usuario que introduzca la medida en pies
    float pies;
    cout << "Introduzca la medida en pies: ";
    cin >> pies;

    // Convertir a yardas
    float yardas = pies / 3;

    // Convertir a pulgadas
    float pulgadas = pies * 12;

    // Convertir a centímetros
    float centimetros = pulgadas * 2.54;

    // Convertir a metros
    float metros = centimetros / 100;

    // Mostrar resultados
    cout << pies << " pies equivalen a:" << endl;
    cout << yardas << " yardas" << endl;
    cout << pulgadas << " pulgadas" << endl;
    cout << centimetros << " centimetros" << endl;
    cout << metros << " metros" << endl;

    return 0;
}
