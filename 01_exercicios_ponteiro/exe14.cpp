#include <iostream>
using namespace std;

void ler_elementos(int* vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cin >> vetor[i];
    }
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n;
    cin >> n;

    int* vetor = new int[n];

    ler_elementos(vetor, n);

    for (int i = 0; i < n; i++) {
        cout << vetor[i] << " ";
    }

    delete[] vetor;

    return 0;
}
