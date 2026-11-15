#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; //= "hom nay la     thu 7";
    getline(cin, s);
    stringstream ss(s);
    string tmp;
    vector<string> v;
    while(ss >> tmp) {
        v.push_back(tmp);
    }
    for (string x : v) {
        cout << x << endl;
    }
    return 0;
}
