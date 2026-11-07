#include <bits/stdc++.h>

using namespace std;

long long n;
long long x;
main()
{
    cin >> x >> n;
    double ans = 1;
    double tang = 0;
    double gt = 1;
    //e^x
    for (int i = 1; i <= n; i++) {
        gt=gt*i;
        tang = pow(x,n)/gt;
        ans+=tang;
    }
    cout << ans;

}
