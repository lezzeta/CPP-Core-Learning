#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    vector<pair<int,int>>l;
    for (int i = 0 ; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        bool xh = false;
        for (auto &p : l) {
            if (p.first == v[i]) {
                p.second++;
                xh = true;
                break;
            }
        }
        if(!xh) {
            l.push_back({v[i], 1});
        }
    }
    for (int i = 0; i < l.size(); i++) {
        cout << l[i].first << " " << l[i].second << endl;
    }
    return 0;
}
