#include <iostream>
using namespace std;

int* uniao(int *x1, int *x2, int n1, int n2, int* qtd) {
    int tamanho = n1 + n2;
    int *x3 = new int[tamanho];
    
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (x1[i] < x2[j]) {
            x3[k++] = x1[i++];
        } else if (x1[i] > x2[j]) {
            x3[k++] = x2[j++];
        } else {
            x3[k++] = x1[i++];
            j++;
        }
    }

    while (i < n1) {
        x3[k++] = x1[i++];
    }

    while (j < n2) {
        x3[k++] = x2[j++];
    }

    *qtd = k;
    return x3;
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int x1[] = {1, 3, 5, 6, 7};
    int x2[] = {1, 3, 4, 6, 8};
    int n1 = 5;
    int n2 = 5;
    int qtd;

    int *x3 = uniao(x1, x2, n1, n2, &qtd);

    cout << "União dos vetores x1 e x2: ";
    for (int i = 0; i < qtd; i++) {
        cout << x3[i] << " ";
    }
    cout << "\n";

    delete[] x3;

    return 0;
}
