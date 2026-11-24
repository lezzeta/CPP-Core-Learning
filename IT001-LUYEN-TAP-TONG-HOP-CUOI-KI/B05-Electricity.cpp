/*
    first 50 kWh: 600 dong per kWh;
    next 50 kWh: 800 dong per kWh;
    next 100 kWh: 1100 dong per kWh;
    the rest: 1500 dong per kWh.
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    if (n <= 50) {
        cout << n*600;
    }
    if (n > 50 && n <= 100) {
        cout << 50*600+(n-50)*800;
    }
    if (n > 100 && n <= 200) {
        cout << 50*600+50*800+(n-100)*1100;
    }
    if (n > 200) {
        cout << 50*600+50*800+100*1100+(n-200)*1500;
    }

}
