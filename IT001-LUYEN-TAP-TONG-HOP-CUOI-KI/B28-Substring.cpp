#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    long long n,m;
    cin >> n >> m;
    /*
    for (int i = n; i <= m; i++) {
        cout << s[i];
    }
    */
    cout << s.substr(n, m - n + 1);


}
