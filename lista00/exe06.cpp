#include <iostream>
using namespace std;

int maiores(int vet[], int n, int x) {
    int contador = 0;
    for (int i = 0; i < n; i++) {
        if (vet[i] > x) {
            contador++;
        }
    }
    return contador;
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int numeros[] = {10, 20, 30, 40, 50};
    int tamanho_vetor = sizeof(numeros) / sizeof(numeros[0]);
    int valor_x = 25;

    int qtde_maiores = maiores(numeros, tamanho_vetor, valor_x);

    cout << "Quantidade de números maiores que " << valor_x << ": "
         << qtde_maiores << endl;

    return 0;
}