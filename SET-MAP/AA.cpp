#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<int,int>mp;
    mp[100] = 200;
    mp.insert({300,400});
    for(pair<int,int>x : mp) {
        cout << x.first << " " << x.second << endl;
    }
    for (auto it : mp) {
        cout << it.first << " " << it.second << endl;
    }
    for(map<int,int>::iterator it = mp.begin(); it != mp.end(); it++) {
        cout << (*it).first << " " << (*it).second << endl;
    }
}
