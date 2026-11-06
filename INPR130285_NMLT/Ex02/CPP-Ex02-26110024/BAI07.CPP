#include <bits/stdc++.h>

using namespace std;

long long n;
long long gt = 1;

main()
{
    cin >> n;
    if (n < 0) {
        cout << "KHONG THE TINH";
    }
    else if (n == 0) {
        cout << 1;
    }
    else {

        for(int i = 1; i <= n; i++) {
            gt=gt*i;
        }
        cout << gt;
    }
}
