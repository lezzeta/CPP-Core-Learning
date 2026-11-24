#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n+5];
    int pre[n+5] = {1};
    for (int i = 1; i <= 19; i++) {
        pre[i] = pre[i-1]*i;
    }
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cout << pre[a[i]] << " ";
    }
    return 0;

}
