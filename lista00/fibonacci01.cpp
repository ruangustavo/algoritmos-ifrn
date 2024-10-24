#include <iostream>
using namespace std;

long long fibonacci(int l) {
    if (l == 0 || l == 1) {
        return l;
    }

    return fibonacci(l - 1) + fibonacci(l - 2);
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int l;
    cin >> l;
    cout << fibonacci(l) << endl;

    return 0;
}
