#include <bits/stdc++.h>

using namespace std;

bool check(int n)
{
    if (n % 2 == 0) {
        return 1;
    }
    return 0;
}
int main()
{
    long long n,i;
    cin >> n;
    int tong = 0;
    double ans = 0.0;
    int dem = 0;
    for (i = 1; i <= n; i++) {
        long long x;
        cin >> x;
        if (check(x)) {
            tong+=x;
            dem++;
        }
    }
    ans = (double)tong/dem;
    cout<<fixed<<setprecision(3);
    cout<<ans;
    return 0;
}
