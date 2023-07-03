#include <iostream>

using namespace std;

int main()
{
    int m = 30;
    int suma = 0;
    for (int i = 1; i <= 2 * m; i++)
    {
        if (i % 2 == 0)
        {
            suma += i;
            if (suma > m * (m + 1))
            {
                break;
            }
        }
    }
    cout << "La suma de los primeros " << m << " numeros pares es " << suma << endl;
    return 0;
}
