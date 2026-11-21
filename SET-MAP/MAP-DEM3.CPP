#include <bits/stdc++.h>

using namespace std;


//dem so lan xuat hien cua mang bien string

/*
9
python
java
string
java
cpp
string
sql
sql
java
*/
int main()
{
    string s;
    int n; cin >> n;
    map<string,int>mp;
    for (int i = 0; i < n; i++) {
        cin >> s;
        mp[s]++;
    }
    for (auto it : mp) {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}
