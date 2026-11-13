#include <bits/stdc++.h>

using namespace std;

int n;
int a[1000005];

main()
{
    cin >> n;
    int dem = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) {
            cout << a[i];
            break;
        }
        dem++;
    }
    if (dem == n) {
        cout << -1;
    }

}
