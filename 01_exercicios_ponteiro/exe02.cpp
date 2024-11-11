#include <iostream>
using namespace std;

void calcular_soma(int& A, int B) {
    A = A + B;
    cout << "A: " << A << endl;
    cout << "B: " << B << endl;
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int numero_A = 5;
    int numero_B = 3;

    calcular_soma(numero_A, numero_B);

    return 0;
}
