#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n1, n2, n3, n4, d;
    cin >> n1 >> n2 >> n3 >> n4 >> d;

    if (d > 0) {
        for (int i = 0; i < d; i++) {
            int temp = n4;
            n4 = n3;
            n3 = n2;
            n2 = n1;
            n1 = temp;
        }
    } else if (d < 0) {
        d = -d;
        for (int i = 0; i < d; i++) {
            int temp = n1;
            n1 = n2;
            n2 = n3;
            n3 = n4;
            n4 = temp;
        }
    }

    cout << n1 << " " << n2 << " " << n3 << " " << n4 << endl;

    return 0;
}