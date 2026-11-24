#include <bits/stdc++.h>

using namespace std;

long long f1 = 12000;
long long f30 = 10000;
long long f31 = 9000;

main()
{
    long long n;
    cin >> n;
    if (n <= 1) {
        cout << f1;
    }
    if (n > 1 && n <= 30) {
        cout << f1 + (n-1)*f30;
    }
    if (n > 30) {
        cout << f1 + 29*f30 + (n-30)*f31;
    }

}
/*
    the first kilometre: 12,000 dong;
    from the 2nd to the 30th kilometre: 10,000 dong per km;
    from the 31st kilometre on: 9,000 dong per km.
*/
