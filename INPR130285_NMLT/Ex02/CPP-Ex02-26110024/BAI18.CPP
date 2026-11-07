#include <bits/stdc++.h>

using namespace std;

long long n;

main()
{
    cin >> n;
    int tang = 0;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        tang+=i;
        ans+=tang;
    }
    cout << ans;

}
