#include <bits/stdc++.h>

using namespace std;
long long n;
long long a[100005];
long long tong,check;
long long tonggt(int i)
{
    tong+=i;
    return tong;
}

bool chiphi(long long n)
{
    if (n >= 200) {
        return 0;
    }
    return 1;
}

main()
{
    cout << "So luong mat hang" << " ";
    cin >> n;
    cout << "Nhap gia cua tung don hang:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << "Mat hang thu" << " " << i << " ";
        cin >> a[i];
        check = tonggt(a[i]);
        //cout << tonggt(a[i]) << endl;
    }
    if (chiphi(check)) {
        cout << "BAN DUOC MIEN PHI VAN CHUYEN";
    }
    else {
        cout << "PHI VAN CHUYEN CUA BAN LA" << " " << 10*n;

    }
}
