#include <bits/stdc++.h>

using namespace std;

int a;
double ans = 0;
int tang = 0;

main()
{
    cin >> a;
    if (a < 0 || a > 4) {
        cout << "ko tinh dc";
    }
    else {
        while (ans <= a) {
            tang++;
            ans += 1.0/tang;
        }
        cout << tang;
    }

}
