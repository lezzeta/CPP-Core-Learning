#include <bits/stdc++.h>

using namespace std;
long long a[1005][1005];
int main()
{
    int n,m;
    cin >> n >> m;
    long long luu_i = -1, luu_j = -1, luu = LLONG_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j] < 0 && a[i][j] > luu) {
                luu = a[i][j];
                luu_i = i;
                luu_j = j;
            }
        }
    }
    if(luu_i == -1) {
        cout << 0 << "\n";
    }
    else{
        cout << luu << "\n" << luu_i << " " << luu_j;
    }
}
