#include <bits/stdc++.h>

using namespace std;

main()
{
    map<string,int>mp;
    int n; cin >> n;
    for (int i = 0 ; i < n; i++) {
        string s; cin >> s;
        mp[s]++;
    }
    int max_fre = 0;
    string res;
    for (auto x : mp) {
        if (x.second > max_fre) {
            max_fre = x.second;
            res = x.first;
        }
    }
    cout << res << " " << max_fre;
}
