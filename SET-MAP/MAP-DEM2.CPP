#include <bits/stdc++.h>

using namespace std;
//dem so lan xuat hien trong mang cua phan tu do bao nhieu lan
int main()
{
    map<int,int>mp;
    int n;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (mp[a[i]] != 0) {
            cout << a[i] << " " << mp[a[i]] << endl;
            mp[a[i]] = 0;
        }
    }
}
