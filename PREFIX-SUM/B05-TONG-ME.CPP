#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int a[n+5];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int pre[n+1] = {0};
    for (int i = 1; i <= n; i++) {
        pre[i] = pre[i-1] + a[i];
    }
    int q;
    cin >> q;
    while(q--)
    {
        int l,r;
        cin >> l >> r;
        cout << pre[r] - pre[l-1];
    }
    return 0;
}
