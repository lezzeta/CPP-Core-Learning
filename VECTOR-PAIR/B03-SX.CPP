#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    vector<int>ds;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ds.push_back(x);
    }
    //Tăng dần
    sort(ds.begin(), ds.end());
    for (int i = 0; i < n; i++) {
        cout << ds[i] << " ";
    }
    //Giảm dần
    cout << endl;
    sort(ds.begin(), ds.end(), greater<int>());
    for (int i = 0; i < n; i++) {
        cout << ds[i] << " ";
    }
    return 0;
}
