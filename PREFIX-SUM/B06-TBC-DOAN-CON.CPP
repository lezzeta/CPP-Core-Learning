#include <bits/stdc++.h>

using namespace std;

//Tính trung bình cộng đoạn con:

int main()
{
    int n;
    int a[n+5];
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int pre[n+1] = {0};
    for (int i = 1; i <= n; i++) {
        pre[i] = pre[i-1] + a[i];
    }
    int c;
    cin >> c;
    while(c--)
    {
        int l,r;
        cin >> l >> r;
        int dai = l-r+1;
        int ans = pre[r] - pre[l-1];
        cout << ans/dai << endl;
    }
    return 0;
}
