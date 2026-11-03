#include <bits/stdc++.h>

using namespace std;

long long n;

main()
{
    cin >> n;
    long long x = 1;
    long long sum = 0;
    for (int i=1; i<=n; i++) {
        x *= i;
        sum+=x;
    }
    cout << sum;
}
