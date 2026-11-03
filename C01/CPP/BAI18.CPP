#include <bits/stdc++.h>

using namespace std;

main()
{
    double a;
    cin >> a;
    int c = a;
    double k = c+0.5;
    if (a >= k) {
        cout << c+1;
    } else {
        cout << c;
    }
}
