#include <iostream>
using namespace std;

int main() {
    int num, positivo=0, negativo=0, cero=0;

    for(int i=0; i<10; i++) {
        cout << "Ingrese el número " << i+1 << ": ";
        cin >> num;
        if(num > 0) {
            positivo++;
        }
        else if(num < 0) {
            negativo++;
        }
        else {
            cero++;
        }
    }

    cout << "Cantidad de números positivos: " << positivo << endl;
    cout << "Cantidad de números negativos: " << negativo << endl;
    cout << "Cantidad de ceros: " << cero << endl;

    return 0;
}
