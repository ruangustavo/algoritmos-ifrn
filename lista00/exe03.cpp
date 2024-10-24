#include <iostream>
using namespace std;

int raizes(float a, float b, float c) {
    float delta = b * b - 4 * a * c;
    if (delta > 0) {
        return 2;
    } else if (delta == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float coef_a, coef_b, coef_c;
    cout << "Digite os coeficientes da equação do segundo grau (a, b, c): ";
    cin >> coef_a >> coef_b >> coef_c;

    int num_raizes = raizes(coef_a, coef_b, coef_c);

    cout << "A equação possui " << num_raizes << " raiz(es) reais." << endl;

    return 0;
}