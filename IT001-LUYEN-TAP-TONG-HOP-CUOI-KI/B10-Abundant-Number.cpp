#include <bits/stdc++.h>

using namespace std;

bool check_abu(int n)
{
    if (n <= 0) {
        return 0;
    }
    int ans = 1;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            ans+=i;
        }
    }
    if (ans > n) {
        return 1;
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int>ds;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (check_abu(x)) {
            ds.push_back(x);
        }
    }
    if (ds.empty()) {
        cout << "-";
    }
    else {
        for (int i = 0; i < ds.size(); i++) {
            cout << ds[i] << " ";
        }
    }
    return 0;
}
