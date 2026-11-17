#include <bits/stdc++.h>

using namespace std;

main()
{
    int n;
    cin >> n;
    vector<char>v(n);
    vector<pair<char,int>>dem;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        bool xh = false;
        for (auto &p : dem) {
            if (p.first == v[i]) {
                p.second++;
                xh = true;
                break;
            }
        }
        if(!xh) {
            dem.push_back({v[i], 1});
        }
    }
    cout << dem.size() << endl;
    for (int i = 0; i < dem.size(); i++) {
        cout << dem[i].first << " " << dem[i].second << endl;
    }
}
