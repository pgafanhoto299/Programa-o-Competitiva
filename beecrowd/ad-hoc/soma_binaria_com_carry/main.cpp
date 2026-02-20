#include <iostream>
#include <limits>

using namespace std;

unsigned int somador_binario(unsigned int a, unsigned int b){
    unsigned int carry;

    while (b != 0){
        carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}

int main() {
    unsigned int a, b;

    cin >> a >> b;

    unsigned int resultado = somador_binario(a, b);
    cout << resultado << endl;

    return 0;
}
