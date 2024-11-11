#include <iostream>
using namespace std;

void frac(float num, int* inteiro, float* frac) {
    *inteiro = static_cast<int>(num);
    *frac = num - *inteiro;
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float numero;
    cout << "Digite um número real: ";
    cin >> numero;

    int parte_inteira;
    float parte_fracionaria;

    frac(numero, &parte_inteira, &parte_fracionaria);

    cout << "Parte inteira: " << parte_inteira << endl;
    cout << "Parte fracionária: " << parte_fracionaria << endl;

    return 0;
}
