#include <iostream>
using namespace std;

int main() {
  setlocale(LC_ALL, "pt_BR.UTF-8");

  float matriz[3][3];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "Endereço de matriz[" << i << "][" << j << "]: " << &matriz[i][j] << endl;
    }
  }

  return 0;
}
