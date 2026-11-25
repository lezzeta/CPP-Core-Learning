#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    while(n--)
    {
        int maxx = 0;
        int minn = 10e5;
        int m; cin >> m;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            if (maxx < a[i]) {
                maxx = a[i];
            }
            if (minn > a[i]) {
                minn = a[i];
            }
        }
    }
    return 0;
}
