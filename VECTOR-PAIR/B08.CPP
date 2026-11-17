#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<pair<int,int>, int>>ds(n);
    vector<int>tong;
    for (int i = 0; i < n; i++) {
        cin >> ds[i].first.first >> ds[i].first.second >> ds[i].second;
        int total = ds[i].first.first + ds[i].first.second + ds[i].second;
        tong.push_back(total);
    }
    for (int i = 0; i < n; i++) {
        cout << tong[i] << " ";
    }
    return 0;

}
