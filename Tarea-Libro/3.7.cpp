#include <iostream>
using namespace std;

int main() {
    // Pedir al usuario la longitud del perímetro en hectómetros, decámetros y metros
    int hectometros, decametros, metros;
    cout << "Introduzca la longitud del perímetro en hectómetros, decámetros y metros: ";
    cin >> hectometros >> decametros >> metros;

    // Convertir los valores de hectómetros, decámetros y metros a decímetros
    int perimetro = (hectometros*10000) + (decametros*100) + (metros*10);

    // Mostrar el perímetro en decímetros
    cout << "El perímetro en decímetros es: " << perimetro << endl;
    
    return 0;
}
