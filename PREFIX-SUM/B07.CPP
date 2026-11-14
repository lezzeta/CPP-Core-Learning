#include <bits/stdc++.h>

using namespace std;

main()
{
    int n;
    int a[n+5];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int pre[n+1] = {0};
    for (int i = 1 ;i <= n; i++) {
        pre[i] = pre[i-1] + a[i];
    }
    int dem = 0;
    for (int i = 1; i <= n; i++) {
        if (pre[n] - pre[i] == pre[i]) {
            dem++;
        }
    }
    cout << dem;
}
