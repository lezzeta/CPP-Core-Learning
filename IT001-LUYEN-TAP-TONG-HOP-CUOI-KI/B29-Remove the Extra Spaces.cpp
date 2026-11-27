#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long i;
    string s;
    getline(cin,s);
    //cout << s;
    long long bd = 0;
    long long dai = s.size();
    //
    while (bd < dai && s[bd] == ' ') {
        bd++;
    }
    //
    while (bd < dai && s[dai] == ' ') {
        dai--;
    }
    for (i = 0; i < s.size(); i++) {
        if (i > 0 && s[i] == ' ' && s[i+1] == ' ') {
            continue;
        }
        cout << s[i];
    }
}
