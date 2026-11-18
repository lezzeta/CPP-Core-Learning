#include <bits/stdc++.h>

using namespace std;

string chuyendoi(int n, int base)
{
    if (n==0) return 0;
    string digits = "0123456789ABCDEF";
    string ketQua = "";

    while (n > 0) {
        ketQua += digits[n % base];
        n /= base;
    }
    reverse(ketQua.begin(), ketQua.end());
    return ketQua;
}

main()
{
    int n;
    cin >> n;

    cout << "Nhi phan (He 2): " << chuyendoi(n, 2) << endl;
    cout << "Bat phan (He 8): " << chuyendoi(n, 8) << endl;
    cout << "Thap luc phan (He 16): " << chuyendoi(n, 16) << endl;


}
