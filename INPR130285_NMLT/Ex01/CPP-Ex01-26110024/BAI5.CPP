#include <bits/stdc++.h>

using namespace std;

int n;
string s[100005];
double a[1000005];

double diemtrungbinh(double a)
{
    double tong = tong + a;
    double s = tong / n;
    return s;
}

main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s[i] >> a[i];
    }
}
