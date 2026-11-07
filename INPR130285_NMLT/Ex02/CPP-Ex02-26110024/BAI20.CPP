#include <bits/stdc++.h>

using namespace std;

long long n;

main()
{
    cin >> n;
    long long ans = 0;
    long long tang = 1;
    for (int i = 1; i <= n; i++) {
        tang=tang*i;
        ans = ans+tang;
    }
    cout << ans;

}
