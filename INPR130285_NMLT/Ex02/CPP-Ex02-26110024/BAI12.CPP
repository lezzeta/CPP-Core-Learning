#include <bits/stdc++.h>

using namespace std;

long long n;

main()
{
    cin >> n;
    long long k = n;
    string str = to_string(abs(n));
    int dai = str.length()-1;
    int ans = 0;
    for (int i = 0; i <= dai; i++) {
        k = n % 10;
        ans = ans + k*pow(2,i);
        n/=10;
    }
    cout << ans;


}
