#include <bits/stdc++.h>

using namespace std;

int tim_vi_tri_dau_tien(long long pre[], int l, int r, long long x) {
    int ans = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (pre[mid] >= x) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return ans;
}

main() {
    int n;
    long long m;
    cin >> n >> m;

    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    long long pre[n + 1];
    pre[0] = 0;
    for (int i = 1; i <= n; i++) {
        pre[i] = pre[i - 1] + a[i];
    }

    int min_len = n + 1;

    for (int i = 0; i < n; i++) {
        long long target = pre[i] + m;
        int j = tim_vi_tri_dau_tien(pre, i + 1, n, target);

        if (j != -1) {
            min_len = min(min_len, j - i);
        }
    }
    if (min_len == n + 1) cout << 0;
    else cout << min_len;

    return 0;
}
