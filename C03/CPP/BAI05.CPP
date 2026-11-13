#include <bits/stdc++.h>

using namespace std;
int a[1000005];
main()
{
    int n;
    cin >> n;
    int ans = 0;
    int dem = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] % 5 == 0) {
            ans+=a[i];
            dem++;
        }
    }
    cout << ans/dem;

}
