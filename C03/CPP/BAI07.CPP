#include <bits/stdc++.h>

using namespace std;

const int M = 5e+1;

int a[1000005];
int prime[M];

bool check(int n)
{
    int total = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            total += i;
        }
    }
    if (total == n) {
        return 1;
    }
    return 0;
}



main()
{
    int n;
    cin >> n;
    int dem = 0;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (check(a[i]) == 1) {
            dem++;
        }
    }
    cout << dem;



}
