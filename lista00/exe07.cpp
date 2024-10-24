#include <iostream>
using namespace std;

void ordena3(int &num1, int &num2, int &num3, char ordem) {
    if (ordem == 'V') {
        if (num1 > num2) swap(num1, num2);
        if (num1 > num3) swap(num1, num3);
        if (num2 > num3) swap(num2, num3);
    } else if (ordem == 'F') {
        if (num1 < num2) swap(num1, num2);
        if (num1 < num3) swap(num1, num3);
        if (num2 < num3) swap(num2, num3);
    }
}

bool eh_primo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

bool eh_par(int num) { return num % 2 == 0; }

// DEFINIÇÃO: Números amigos são dois números que estão ligados um ao outro por
// uma propriedade especial: cada um deles é a soma dos divisores do outro
bool eh_amigo(int num1, int num2) {
    int sum1 = 0, sum2 = 0;

    for (int i = 1; i <= num1 / 2; i++) {
        if (num1 % i == 0) sum1 += i;
    }

    for (int i = 1; i <= num2 / 2; i++) {
        if (num2 % i == 0) sum2 += i;
    }

    return (num1 == sum2 && num2 == sum1);
}

int mdc(int a, int b, int c) {
    int menor = min(a, min(b, c));

    for (int i = menor; i > 0; i--) {
        if (a % i == 0 && b % i == 0 && c % i == 0) return i;
    }
    return 1;
}

int mmc(int a, int b, int c) {
    int maior = max(a, max(b, c));
    int i = maior;
    while (true) {
        if (i % a == 0 && i % b == 0 && i % c == 0) return i;
        i++;
    }
}

int fatorial(int num) {
    if (num == 0) return 1;
    return num * fatorial(num - 1);
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int a = 10, b = 5, c = 8;
    cout << "Antes de swap: " << a << " " << b << " " << c << endl;
    swap(a, b);
    cout << "Depois de swap: " << a << " " << b << " " << c << endl;

    ordena3(a, b, c, 'V');
    cout << "Ordenado em ordem crescente: " << a << " " << b << " " << c
         << endl;
    bool primo = eh_primo(a);
    cout << "O número " << a << " é primo? " << (primo ? "Sim" : "Não") << endl;
    bool par = eh_par(b);
    cout << "O número " << b << " é par? " << (par ? "Sim" : "Não") << endl;
    bool amigos = eh_amigo(a, c);
    cout << "Os números " << a << " e " << c << " são amigos? "
         << (amigos ? "Sim" : "Não") << endl;
    int max_div_comum = mdc(a, b, c);
    cout << "O máximo divisor comum entre " << a << ", " << b << " e " << c
         << " é: " << max_div_comum << endl;
    int min_mult_comum = mmc(a, b, c);
    cout << "O mínimo múltiplo comum entre " << a << ", " << b << " e " << c
         << " é: " << min_mult_comum << endl;
    int fact = fatorial(c);
    cout << "O fatorial de " << c << " é: " << fact << endl;
    return 0;
}