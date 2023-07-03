#include <iostream>
using namespace std;

int main() {
    // primera linea
    cout << "1" << endl;
    
    // segunda linea
    cout << "1 2" << endl;
    
    // tercera y cuarta linea
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
    
    // quinta y sexta linea
    for (int i = 3; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    
    // septima linea
    cout << "1      " << endl;
    
    return 0;
}

