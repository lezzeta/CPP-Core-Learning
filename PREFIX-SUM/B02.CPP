#include <bits/stdc++.h>

using namespace std;

int n;
int q;
int a[1000005];

main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int prefix[n+1] = {0};
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i-1] + a[i];
    }
    cin >> q;

    while(q--)
    {
        int l,r;
        cin >> l >> r;
        int ans = 0;
        ans = prefix[r] - prefix[l-1];
        cout << ans << endl;
    }

}
