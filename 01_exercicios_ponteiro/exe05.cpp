#include <iostream>
using namespace std;

int main() {
  setlocale(LC_ALL, "pt_BR.UTF-8");

  int numeros[5];
  int* ponteiro = numeros;

  for (int i = 0; i < 5; i++) {
    cin >> *(ponteiro + i);
  }

  for (int i = 0; i < 5; i++) {
    cout << *(ponteiro + i) * 2 << " ";
  }

  return 0;
}
