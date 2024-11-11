#include <iostream>
using namespace std;

int main() {
  setlocale(LC_ALL, "pt_BR.UTF-8");
  
  int numeros[5];
  
  cout << "Digite 5 números inteiros:" << endl;
  for (int i = 0; i < 5; i++) {
    cin >> numeros[i];
  }

  cout << "Endereços das posições com valores pares:" << endl;
  for (int i = 0; i < 5; i++) {
    if (numeros[i] % 2 == 0) {
      cout << &numeros[i] << endl;
    }
  }
  
  return 0;
}
