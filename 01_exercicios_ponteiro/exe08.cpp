#include <iostream>
using namespace std;

int ordenar_valores(int& a, int& b, int& c) {
    if (a > b) {
        swap(a, b);
    }
    if (b > c) {
        swap(b, c);
    }
    if (a > b) {
        swap(a, b);
    }

    return (a == b && b == c) ? 1 : 0;
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int valor1, valor2, valor3;
    cout << "Digite três valores inteiros: ";
    cin >> valor1 >> valor2 >> valor3;

    int resultado = ordenar_valores(valor1, valor2, valor3);

    cout << "Valores ordenados: " << valor1 << ", " << valor2 << ", " << valor3 << endl;

    return 0;
}
