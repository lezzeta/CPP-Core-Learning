#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 'a' + 'A';
        }
    }
    for (int i = 0; i < s.size(); i++) {
        cout << s[i];
    }
}
