#include <algorithm>
#include <iostream>
using namespace std;

void permutacoes(int conjunto[], int inicio, int tamanho) {
    if (inicio == tamanho - 1) {
        for (int i = 0; i < tamanho; i++) {
            cout << conjunto[i] << " ";
        }
        cout << endl;
    } else {
        for (int i = inicio; i < tamanho; i++) {
            swap(conjunto[inicio], conjunto[i]);
            permutacoes(conjunto, inicio + 1, tamanho);
            swap(conjunto[inicio], conjunto[i]);
        }
    }
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int conjunto[] = {1, 2, 3, 4};
    int tamanho = sizeof(conjunto) / sizeof(conjunto[0]);

    permutacoes(conjunto, 0, tamanho);

    return 0;
}