#include <iostream>
using namespace std;

int main() {
    double a, b;

    cout << "Digite dois numeros: ";
    cin >> a >> b;

    cout << "Soma: " << a + b << endl;
    cout << "Subtracao: " << a - b << endl;
    cout << "Multiplicacao: " << a * b << endl;

    if (b != 0)
        cout << "Divisao: " << a / b << endl;
    else
        cout << "Divisao por zero nao permitida." << endl;

    return 0;
}
