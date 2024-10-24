#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    double x_ie, y_ie, x_sd, y_sd, x_p, y_p;
    cin >> x_ie >> y_ie >> x_sd >> y_sd >> x_p >> y_p;

    if (x_ie > x_sd) swap(x_ie, x_sd);
    if (y_ie > y_sd) swap(y_ie, y_sd);

    if (x_p >= x_ie && x_p <= x_sd && y_p >= y_ie && y_p <= y_sd) {
        if (x_p == x_ie || x_p == x_sd || y_p == y_ie || y_p == y_sd) {
            cout << "O ponto está na borda do retângulo." << endl;
        } else {
            cout << "O ponto está dentro do retângulo." << endl;
        }
    } else {
        cout << "O ponto está fora do retângulo." << endl;
    }

    return 0;
}