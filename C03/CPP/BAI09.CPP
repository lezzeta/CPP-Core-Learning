#include <bits/stdc++.h>

using namespace std;
int a[1000005];


main()
{
    int n;
    int dem = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] < 0) {
            cout << a[i];
            break;
        }
        dem++;
    }

    if (dem == n) cout << -1;


}
