#include <bits/stdc++.h>

using namespace std;
int a,b;
main()
{
    cin >> a >> b;
    if (b == 0) {
        cout << "Khong chia duoc";
    }
    else {
        int ans = 0;
        ans = a/b;
        cout << ans;
    }
}
