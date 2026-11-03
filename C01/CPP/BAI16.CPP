#include <bits/stdc++.h>

using namespace std;

bool check(double a, double b, double c)
{
    if (a+b > c && a+c > b && a+c > a) {
        return 1;
    }
    return 0;
}


main()
{
    double a,b,c;
    cin >> a >> b >> c;
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);

    if (a <= 0 || a + b <= c) {
        cout << "3 so khong phai la 3 canh tam giac";
    }
    else {
        if (a == b && b == c) {
            cout << "Tam giac deu";
        }
        else if (a == b && fabs(a*a + b*b - c*c) < 1e-9) {
            cout << "Tam giac vuong can";
        }
        else if (fabs(a*a + b*b - c*c) < 1e-9) {
            cout << "Tam giac vuong";
        }
        else if (a==b || b==c) {
            cout << "Tam giac can";
        }
        else {
            cout << "Tam giac thuong";
        }
    }

}
