#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long T;
    cin >> T;
    int h = T / 3600;
    int m = (T % 3600) / 60;
    int s = T % 60;

    cout << T << " giay = " << h << " gio " << m << " phut " << s << " giay";
    return 0;

}
