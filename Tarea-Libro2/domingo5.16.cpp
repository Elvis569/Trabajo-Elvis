#include <iostream>
#include <string>

using namespace std;

int main() {
    string letras("ZYXWVTSRQPONMLKJIHGFEDCBA");

    for (int i = 0; i < letras.length(); i++) {
        cout << letras.substr(i) << endl;
    }
    
    return 0;
}
