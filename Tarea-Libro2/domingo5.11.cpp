#include <iostream>
using namespace std;

int main() {
    int n, num, max, min, suma = 0; 
    float media;
    
    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;
    
    cout << "Ingrese el primer numero: ";
    cin >> num;
    max = num; // Asignamos el primer numero como maximo y minimo inicialmente
    min = num;
    suma += num;
    
    for(int i = 1; i < n; i++) {
        cout << "Ingrese el siguiente numero: ";
        cin >> num;
        if(num > max) max = num; // Si el numero es mayor, se asigna como maximo
        if(num < min) min = num; // Si el numero es menor, se asigna como minimo
        suma += num; // Sumamos el numero a la suma acumulada
    }
    
    media = (float) suma / n; // Calculamos la media con la suma acumulada
    
    cout << "El numero maximo ingresado es: " << max << endl;
    cout << "El numero minimo ingresado es: " << min << endl;
    cout << "La media de los numeros ingresados es: " << media << endl;
    
    return 0;
}
