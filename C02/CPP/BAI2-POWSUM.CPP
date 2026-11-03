#include <bits/stdc++.h>

using namespace std;

long long n;

main()
{
    cin >> n;
    long long sum = n * (n + 1) * (2 * n + 1) / 6;
    cout << sum;
}
