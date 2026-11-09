#include <bits/stdc++.h>

using namespace std;

int n;

bool check(int n)
{
    if (n % 2 == 0) {
        return 1;
    }
    return 0;
}

main()
{
    cin >> n;
    if (n == 0) {
        cout << "So khong";
    }
    else if (check(n)) {
        cout << "So duong";
    }
    else {
        cout << "So am";
    }

}
