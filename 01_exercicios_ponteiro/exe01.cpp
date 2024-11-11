#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int numero = 10;
    float real = 3.14;
    char caractere = 'A';

    int* ptr_numero = &numero;
    float* ptr_real = &real;
    char* ptr_caractere = &caractere;

    cout << "Valores originais:" << endl;
    cout << "Inteiro: " << numero << endl;
    cout << "Real: " << real << endl;
    cout << "Caractere: " << caractere << endl;

    *ptr_numero = 20;
    *ptr_real = 6.28;
    *ptr_caractere = 'B';

    cout << "\nValores modificados:" << endl;
    cout << "Inteiro: " << numero << endl;
    cout << "Real: " << real << endl;
    cout << "Caractere: " << caractere << endl;

    return 0;
}