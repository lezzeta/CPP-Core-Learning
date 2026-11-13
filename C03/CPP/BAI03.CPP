#include <bits/stdc++.h>

using namespace std;

int a[1000005];
main()
{
    int n;
    cin >> n;
    int maxx = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] >= maxx) {
            maxx = a[i];
        }
    }
    cout << maxx;
}
