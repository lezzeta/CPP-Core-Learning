#include<bits/stdc++.h>

using namespace std;

int n;
int total = 0;

main()
{
    cin >> n;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            total+=i;
        }
    }
    if (total == n) {
        cout << "Day la so hoan hao";
    }
    else {
        cout << "Khong phai la so hoan hao";
    }
}
