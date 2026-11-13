#include <bits/stdc++.h>

using namespace std;

int n;
int a[1000006];


bool timuoc(int n)
{
    int total = 1;
    for (int i = 2; i < n; i++) {
        if (n % i == 0 ) {
            total+=i;
        }
    }
    if (total == n) {
        return 1;
    }
    return 0;
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (timuoc(a[i])) {
            cout << a[i];
            return 0;
        }
    }
    cout << -1;
    return 0;

}
