#include <bits/stdc++.h>

using namespace std;
int a[1000005], mangmax[1000005];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int>ds;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    mangmax[n] = a[n];
    for(int i = n-1; i >= 1; i--) {
        mangmax[i] = max(mangmax[i+1],a[i]);
    }
    int pre = a[1];
    for (int i = 2; i < n; i++) {
        if (pre < a[i] && a[i] < mangmax[i + 1])
            ds.push_back(i);          // mỗi i được thêm tối đa 1 lần
        pre = min(pre, a[i]);   // cập nhật sau khi kiểm tra
    }

    cout << ds.size() << '\n';
    for (int i : ds) cout << i << ' ';
    return 0;
}
