#include <bits/stdc++.h>

using namespace std;

main()
{
    int n;
    cin >> n;
    int a[n+5];
    for (int i = 1; i <= n; i++) cin >> a[i];
    int pre[n+1] = {0};
    for (int i = 1; i <= n; i++) {
        pre[i] = pre[i-1] + a[i];
    }
    int dem = 0;
    for (int l = 1; l <= n; l++) {
        for (int r = l; r <= n; r++) {
            if (pre[r] - pre[l-1] == 0) {
                dem++;
            }
        }
    }
    cout << dem;
}
