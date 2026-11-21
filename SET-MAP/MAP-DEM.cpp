#include <bits/stdc++.h>

using namespace std;

//dem so lan xuat hien cua cac phan tu trong mang, sau do in ra kem theo tan suat cua no


int main()
{
    map<int,int>mp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        mp[x]++;
    }
    for (auto it: map) {
        cout << it.first << " " << it.second << endl;
    }
}
