#include <bits/stdc++.h>

using namespace std;
int a[1000005];
main()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        ans+=a[i];
    }
    cout << ans/n;

}
