#include <cmath>
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "A distância Euclidiana entre os pontos é: " << distancia << endl;

    return 0;
}