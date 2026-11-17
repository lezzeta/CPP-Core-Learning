#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[100005];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int max1 = 0;
    int max2 = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        } else if (a[i] > max2 && a[i] < max1) {
            max2 = a[i];
        }
    }

    if (max2 == 0) {
        cout << "Mang khong ton tai so lon thu hai." << endl;
    } else {
        cout << "So lon thu hai trong mang la: " << max2 << endl;
    }

    return 0;
}
