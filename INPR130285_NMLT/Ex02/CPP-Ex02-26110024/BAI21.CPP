#include <bits/stdc++.h>

using namespace std;

long long n;



main()
{
    cin >> n;
    double ans = 0;
    double tang = 1;
    for (int i = 1; i <= n; i++) {
        tang=tang*i;
        ans = ans+1/tang;
    }
    cout << ans;
}
