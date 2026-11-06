#include <bits/stdc++.h>

using namespace std;
long long a,b;

main()
{
    cin >> a >> b;
    long long c = a;
    a = b;
    b = c;
    cout << a << " " << b;
}
