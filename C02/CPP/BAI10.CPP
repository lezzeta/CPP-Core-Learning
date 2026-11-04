#include<bits/stdc++.h>
#include <algorithm>

using namespace std;

int n;
int total = 0;
string s;

main()
{
    cin >> s;
    reverse(s.begin(), s.end());
    cout << s;
}
/*
#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long so_nguoc = 0;
    while (n > 0) {
        int chu_so_cuoi = n % 10;
        so_nguoc = so_nguoc * 10 + chu_so_cuoi;
        n /= 10;
    }

    cout << so_nguoc << endl;
}
*/
