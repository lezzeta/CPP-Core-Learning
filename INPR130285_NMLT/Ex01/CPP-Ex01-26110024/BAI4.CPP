#include <bits/stdc++.h>

using namespace std;
double a, b, c;
double triagle;
double x1,x2;

double delta(double a, double b, double c)
{
    triagle = b * b - 4.0 * a * c;
    return triagle;
}

void vonghiem(double triagle) {
    if (triagle < 0) {
        cout << "Phuong trinh vo nghiem";
    }
}

void nghiemkep(double triagle) {
    if (triagle == 0) {
        x1 = -1.0 * b / (2 * a);
        cout << "Phuong trinh co nghiem kep" << " " << x1;
    }
}

void hainghiem(double triagle) {
    if (triagle > 0) {
        x1 = (-b + sqrt(triagle)) / (2.0 * a);
        x2 = (-b - sqrt(triagle)) / (2.0 * a);
        cout << "Phuong trinh co 2 nghiem phan biet:\n";
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2;
    }

}
main()
{
    cin >> a >> b >> c;
    if (a <= 0) {
        cout << -1;
    }

    else {
        delta(a,b,c);
        vonghiem(triagle);
        nghiemkep(triagle);
        hainghiem(triagle);
    }
}
