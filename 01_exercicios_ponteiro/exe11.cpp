#include <iostream>
using namespace std;

void encontrar_min_max(int V[], int tamanho, int& min, int& max) {
    min = V[0];
    max = V[0];
    
    for (int i = 1; i < tamanho; i++) {
        if (V[i] < min) {
            min = V[i];
        }
        if (V[i] > max) {
            max = V[i];
        }
    }
}

int main() {
  setlocale(LC_ALL, "pt_BR.UTF-8");

  int array[] = {5, 3, 8, 1, 9, 4, 2};
  int tamanho = sizeof(array) / sizeof(array[0]);
  int menor, maior;

  encontrar_min_max(array, tamanho, menor, maior);

  cout << "Menor valor: " << menor << endl;
  cout << "Maior valor: " << maior << endl;

  return 0;
}
