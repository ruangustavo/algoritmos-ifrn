#include <iostream>
using namespace std;

int main() {
  setlocale(LC_ALL, "pt_BR.UTF-8");
  
  int i = 34, j;
  int *p;
  p = &i;
  *p++;
  j = *p + 33;

  cout << "O valor de i é: " << i << endl;
  cout << "O valor de j é: " << j << endl;

  return 0;
}
