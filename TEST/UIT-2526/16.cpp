#include <bits/stdc++.h>

using namespace std;

int n;
int giaVe[1000006], soLuot[1000006];
long long res[1000006];
long long tong = 0;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> giaVe[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> soLuot[i];
    }
    int luu = 0;

    for (int i = 1; i <= n; i++)
    {
        res[i] = 1LL * giaVe[i] * soLuot[i];
        tong+=res[i];
        cout << res[i] << " ";
        if (res[i] > luu) {
            luu = res[i];
        }
    }
    cout << endl;
    cout << tong << endl;
    for (int i = 1; i <= n; i++) {
        if (luu == res[i]) {
            cout << i << endl;
        }
    }
    return 0;
}
