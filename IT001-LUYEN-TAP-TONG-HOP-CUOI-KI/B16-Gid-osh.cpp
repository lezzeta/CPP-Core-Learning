#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>ds(n);
        for (int &x : ds) cin >> x;
        sort(ds.begin(), ds.end());
        cout << min(ds[n-1] - ds[1], ds[n-2] - ds[0]) << "\n";
    }
    return 0;
}
