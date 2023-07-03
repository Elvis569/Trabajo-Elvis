
#include <iostream>
using namespace std;

int main() {
    for(int i=100; i<=999; i++) {
        int x = i / 100; //Obtener el primer dígito
        int y = (i / 10) % 10; //Obtener el segundo dígito
        int z = i % 10; //Obtener el tercer dígito
        int suma = x*x + y*y + z*z; //Calcular la suma de los cuadrados
        int cociente = i / 3; //Calcular el cociente de la división entera
        if(suma % 3 == 0 && suma == cociente) { //Verificar si cumple la condición
            cout << i << endl; //Imprimir el número si cumple la condición
        }
    }
    return 0;
}
