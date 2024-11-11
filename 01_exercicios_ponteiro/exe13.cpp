#include <iostream>
using namespace std;

int* interseccao(int *x1, int *x2, int n1, int n2, int *qtd) {
    int *x3 = new int[min(n1, n2)];
    int idx = 0;
    
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (x1[i] == x2[j]) {
                x3[idx++] = x1[i];
                break;
            }
        }
    }
    
    *qtd = idx;
    return x3;
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int x1[] = {1, 3, 5, 6, 7};
    int x2[] = {1, 3, 4, 6, 8};
    int n1 = 5;
    int n2 = 5;
    int qtd;

    int* resultado = interseccao(x1, x2, n1, n2, &qtd);

    cout << "Interseção: ";
    for (int i = 0; i < qtd; i++) {
        cout << resultado[i] << " ";
    }
    cout << endl;

    delete[] resultado;

    return 0;
}
