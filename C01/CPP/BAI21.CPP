
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    double delta, x1, x2;
    cin >> a >> b >> c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0)
                cout << "Phuong trinh vo so nghiem";
            else
                cout << "Phuong trinh vo nghiem";
        }
        else {
            cout << "Phuong trinh co nghiem x = " << -1.0 * c / b;
        }
    }
    else {
        delta = b * b - 4.0 * a * c;

        if (delta < 0) {
            cout << "Phuong trinh vo nghiem";
        }
        else if (delta == 0) {
            x1 = -1.0 * b / (2 * a);
            cout << "Phuong trinh co nghiem kep x = " << x1;
        }
        else {
            x1 = (-b + sqrt(delta)) / (2.0 * a);
            x2 = (-b - sqrt(delta)) / (2.0 * a);

            cout << "Phuong trinh co 2 nghiem phan biet:\n";
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2;
        }
    }

    return 0;
}
