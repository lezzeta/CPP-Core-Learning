#include <bits/stdc++.h>

using namespace std;
int a[1005][1005];
int main()
{
    int n; cin >> n;
    int luu = n;
    double ans = 0.0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    double tong = 0.0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            tong = tong + a[i][luu];
        }
        luu--;
    }
    cout << fixed << setprecision(1);
    cout << (tong/n)/n;
}
