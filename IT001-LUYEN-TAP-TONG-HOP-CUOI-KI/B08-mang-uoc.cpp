#include <bits/stdc++.h>

using namespace std;

int dem(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); // hoặc cin.tie(NULL);
    int a[100005];
    int n; cin >> n;
    for (int i =1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        if (a[i] < 0) {
            cout << dem(-a[i]) << " ";
        }
        else {
            cout << dem(a[i]) << " ";
        }

    }
    return 0;
}
