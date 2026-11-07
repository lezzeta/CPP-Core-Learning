#include <bits/stdc++.h>

using namespace std;

long long n;

main()
{
    cin >> n;
    double tang = 0;
    double ans = 0;
    for (int i = 1; i <= n; i++) {
        tang+=i;
        ans+=1/tang;
    }
    cout << ans;

}
