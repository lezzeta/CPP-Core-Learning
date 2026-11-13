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
    cin >> q;

    while(q--)
    {
        int l,r;
        cin >> l >> r;
        int sum = 0;
        for (int i = l; i <= r; i++) {
            sum+=a[i];
        }
        cout << sum << endl;
    }

}
