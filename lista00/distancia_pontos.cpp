#include <cmath>
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    cout.precision(4);
    cout << fixed << sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) << endl;
    return 0;
}
