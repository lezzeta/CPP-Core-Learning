#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int m;
    cin >> n;
    vector<int>ds;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ds.push_back(x);
    }
    cin >> m;
    for (int j = 0; j < m; j++) {
        int y;
        cin >> y;
        ds.push_back(y);
    }
    sort(ds.begin(), ds.end());
    for (int i = 0; i < (n+m); i++) {
        cout << ds[i] << " ";
    }
    return 0;
}
