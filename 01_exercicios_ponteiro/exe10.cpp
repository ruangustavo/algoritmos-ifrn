#include <iostream>
using namespace std;

int negativos(float *vet, int N) {
    int count_negativos = 0;
    for (int i = 0; i < N; i++) {
        if (vet[i] < 0) {
            count_negativos++;
        }
    }
    return count_negativos;
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float numeros[] = {1.5, -3.2, 5.7, -2.1, -0.5};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    int quantidade_negativos = negativos(numeros, tamanho);

    cout << "Quantidade de números negativos: " << quantidade_negativos << endl;

    return 0;
}
