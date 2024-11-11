#include <iostream>
using namespace std;

int main() {
  setlocale(LC_ALL, "pt_BR.UTF-8");
  
  float array_de_float[10];
  for (int i = 0; i < 10; i++) {
      cout << "Endereço da posição " << i << ": " << &array_de_float[i] << endl;
  }

  return 0;
}
