#include <bits/stdc++.h>

using namespace std;

//Đếm đoạn con có tổng chia hết cho k
int a[1000005];

int main()
{
    int n,k;
    cin >> n >> k;
    for (int i = 1; i<= n; i++) {
        cin >> a[i];
    }
    int pre[n+1] = {0};
    for (int i = 1; i <= n; i++) {
        pre[i] = pre[i-1] + a[i];
    }
    int dem = 0;
    for (int l = 1; l <= n; l++) {
        for (int r = l; r <= n; r++) {
            if (pre[r] % k == pre[l-1] % k) {
                dem++;
            }
        }
     }
     cout << dem;
     return 0;

}
