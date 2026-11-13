#include <bits/stdc++.h>

using namespace std;

int n;
int a[1000005];

main()
{
    cin >> n;
    int luu = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) {
            luu = i;
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << a[luu];
    }
    if (luu == 0) {
        cout << -1;
    }
}
