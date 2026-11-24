#include <bits/stdc++.h>

using namespace std;

bool check(int y)
{
    if (y % 400 == 0) {
        return true;
    }
    else if (y % 4 == 0 && y % 100 != 0) {
        return true;
    }
    return false;
}

main()
{
    int m,y;
    cin >> m >> y;
    int days;
    if (m == 4 || m == 6 || m == 9 || m == 11) {
        cout << 30;
    }
    else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        cout << 31;
    }
    if (m == 2) {
        if (check(y)) cout << 29;
        else cout << 28;
    }

}
/*
• 31 ngày: Tháng 1, 3, 5, 7, 8, 10, 12.
• 30 ngày: Tháng 4, 6, 9, 11.
• 28 hoặc 29 ngày: Tháng 2.
*/
