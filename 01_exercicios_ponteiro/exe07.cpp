#include <iostream>
using namespace std;

int main() {
  setlocale(LC_ALL, "pt_BR.UTF-8");

  int A, *B, **C, ***D;
  cout << "Digite o valor de A: ";
  cin >> A;

  B = &A;
  C = &B;
  D = &C;

  cout << "O dobro de A é: " << *B * 2 << endl;
  cout << "O triplo de A é: " << **C * 3 << endl;
  cout << "O quádruplo de A é: " << ***D * 4 << endl;

  return 0;
}
