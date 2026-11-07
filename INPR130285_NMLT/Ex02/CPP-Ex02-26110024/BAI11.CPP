//so amstrong
#include <bits/stdc++.h>

using namespace std;

int n;

main()
{
    cin >> n;
    int k = n, check = n;
    int ans = 0;
    string str = to_string(abs(n));
    int dai = str.length();
    for (int i = 1; i <= dai; i++) {
        k = n % 10;
        ans+=pow(k,dai);
        n/=10;
    }
    if (ans == check) {
        cout << "DAY LA SO AMSTRONG";
    }

}
