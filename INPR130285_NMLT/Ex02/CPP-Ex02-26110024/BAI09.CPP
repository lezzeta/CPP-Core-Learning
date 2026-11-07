#include <bits/stdc++.h>

using namespace std;

int n,m;
int ans;
main()
{
    cin >> n >> m;
    int minn = min(n,m);
    int luu = 0;
    for (int i = 1; i <= minn; i++) {
        if (n % i == 0 &&  m % i == 0) {
            if (luu <= i) {
                luu = i;
            }
        }
    }
    cout << luu;

}
